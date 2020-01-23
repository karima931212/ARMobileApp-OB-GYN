using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class videoButton : MonoBehaviour {
    private VideoPlayer videoPlayer;

    // Use this for initialization
    public VideoClip[] videoClips;
    void Awake()
    {
        videoPlayer = gameObject.GetComponent<VideoPlayer>();
    }
    void Start()
    {
        videoPlayer.clip = videoClips[0];
        videoPlayer.Play();

    }
    public void Fertilization()
    {

            videoPlayer.Stop();
            videoPlayer.clip = videoClips[0];
            videoPlayer.Play();
           

            
    }

    public void FetusButton()
    {
        videoPlayer.Stop();
        videoPlayer.clip = videoClips[1];
        videoPlayer.Play();

    }

    public void BirthButton()
    {
        videoPlayer.Stop();
        videoPlayer.clip = videoClips[2];
        videoPlayer.Play();

    }

}
