using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class menubutton : MonoBehaviour {
    public Transform mainPanel;
    public Transform objectPanel;
    public Transform videoPanel;
    public GameObject annotation;
    public GameObject model;
    public GameObject videoScreen;
    // Use this for initialization

	
    public void annotationButton(){
        mainPanel.gameObject.SetActive(true);
        model.SetActive(false);
        videoScreen.SetActive(false);
        videoPanel.gameObject.SetActive(false);
        objectPanel.gameObject.SetActive(false);
        annotation.SetActive(true);

    }
    public void videoButton()
    {
        mainPanel.gameObject.SetActive(false);
        annotation.SetActive(false);
        model.SetActive(false);
        objectPanel.gameObject.SetActive(false);
        videoPanel.gameObject.SetActive(true);
        videoScreen.SetActive(true);
      

    }
    public void modelButton()
    {
        mainPanel.gameObject.SetActive(false);
        annotation.SetActive(false);
        videoScreen.SetActive(false);
        videoPanel.gameObject.SetActive(false);
        objectPanel.gameObject.SetActive(true);
        model.SetActive(true);
    }
    public void OpenURL(){
        Debug.Log("clicked");
        Application.OpenURL("https://www.umassmed.edu/obgyn/");

    }

}
