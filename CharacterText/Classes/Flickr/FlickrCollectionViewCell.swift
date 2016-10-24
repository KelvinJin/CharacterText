//
//  FlickrCollectionViewCell.swift
//  CharacterText
//
//  Created by Andrew Hulsizer on 7/6/14.
//  Copyright (c) 2014 Swift Yeti. All rights reserved.
//

import UIKit
import SDWebImage

class FlickrCollectionViewCell: UICollectionViewCell {
    var photoImageView: UIImageView!
    var darkenMask: UIView!
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        initialSetup()
    }

    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        initialSetup()
    }
    
    override func awakeFromNib() {
        super.awakeFromNib()
        initialSetup()
    }
    
    func configure(_ flickrPhoto: FlickrPhoto) {
        photoImageView.alpha = 0
        photoImageView.sd_setImage(with: flickrPhoto.photoURL) { image, error, cacheType, url in
            switch cacheType {
            case .memory:
                self.photoImageView.alpha = 1
            case .disk, .none:
                UIView.animate(withDuration: 0.5, animations: {
                    self.photoImageView.alpha = 1
                })
            }
        }
    }
    
    func initialSetup() {
        photoImageView = UIImageView(frame: self.bounds)
        photoImageView.clipsToBounds = true
        photoImageView.contentMode = UIViewContentMode.scaleAspectFill
        self.addSubview(photoImageView)
        
        darkenMask = UIView(frame: self.bounds)
        darkenMask.backgroundColor = UIColor(white: 0, alpha:0.5)
        self.addSubview(darkenMask)
    }
}
