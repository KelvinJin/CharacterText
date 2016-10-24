//
//  ViewController.swift
//  CharacterText
//
//  Created by Andrew Hulsizer on 6/26/14.
//  Copyright (c) 2014 Swift Yeti. All rights reserved.
//

import UIKit
import FlickrKit

class ViewController: UIViewController, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout {
    
    @IBOutlet var collectionView: UICollectionView!
    var dataArray = Array<FlickrPhoto>()
    var characterLabel: MotionLabel!;
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    override func viewWillLayoutSubviews() {
        setupCollectionView()
        setupCharacterLabel()
        
        super.viewWillLayoutSubviews()
    }
    
    func setupCollectionView() {
        //Get Flickr Data
        FlickrKit.shared().initialize(withAPIKey: "334626934a41897193b6a0613f1c94a0", sharedSecret: "b0132e5cfd44574b")
        guard let flickrKit = FlickrKit.shared() else { return }
        _ = flickrKit.call(FKFlickrInterestingnessGetList()) { response, error in
            if (response != nil) {
                var photoUrls = Array<FlickrPhoto>()
                let photos = response!["photos"] as! [AnyHashable: Any]
                let photoArray = photos["photo"] as! [[AnyHashable: Any]]
                //Get Photos
                for photoData in photoArray {
                    guard let url = flickrKit.photoURL(for: FKPhotoSizeMedium800, fromPhotoDictionary: photoData) else { continue }
                    
                    let newPhoto = FlickrPhoto(photoURL: url, title: photoData["title"] as! String)
                    photoUrls.append(newPhoto)
                }
                
                DispatchQueue.main.async(execute: {
                    self.dataArray = Array<FlickrPhoto>(photoUrls);
                    self.collectionView.reloadData()
                    })
            }
        }
        collectionView.register(FlickrCollectionViewCell.classForCoder(), forCellWithReuseIdentifier: "FlickrCollectionViewCell")
    }
    
    func setupCharacterLabel() {
        characterLabel = MotionLabel(frame: self.view.bounds.insetBy(dx: 0, dy: 200))
        characterLabel.textAlignment = NSTextAlignment.center
        characterLabel.textColor = UIColor.white
        characterLabel.text = "You"
        self.view.addSubview(characterLabel)
    }

    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return dataArray.count
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell
    {
        let collectionViewCell : FlickrCollectionViewCell! = collectionView.dequeueReusableCell(withReuseIdentifier: "FlickrCollectionViewCell", for: indexPath) as! FlickrCollectionViewCell
        
        collectionViewCell.configure(dataArray[(indexPath as NSIndexPath).row])
        return collectionViewCell
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        return view.bounds.size
    }
    
    func scrollViewDidEndDecelerating(_ scrollView: UIScrollView) {
        let page: Int = Int(scrollView.contentOffset.x/self.view.bounds.width)
        let photo = dataArray[page];
        characterLabel.text = photo.title
    }
    
    func scrollViewDidEndDragging(_ scrollView: UIScrollView, willDecelerate decelerate: Bool) {
        if !decelerate {
            let page: Int = Int(scrollView.contentOffset.x/self.view.bounds.width)
            let photo = dataArray[page];
            characterLabel.text = photo.title
        }
    }
}

