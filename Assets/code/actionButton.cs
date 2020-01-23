using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class actionButton : MonoBehaviour {
    public Animation anim;
    public GameObject body;
    public bool rotateStatues = false;
    public GameObject pregnant;
    public GameObject placemta;
    // Use this for initialization
    public void rotateButton()
    {
        if (rotateStatues == false)
        {
            rotateStatues = true;
        }
        else
        {
            rotateStatues = false;
        }
    }
    public void expandButton()      //------------ buton
    {

        pregnant.active = true;
        anim.Play("expand");
    }

    public void joinButton()        //------------ buton
    {
        pregnant.active = true;
        placemta.active = true;
        anim.Play("join");

    }

    public void showFetus(){
        pregnant.active = false;
        placemta.active = false;
    }

    void Update()
    {
        if (rotateStatues == true)
        {
            body.transform.Rotate(0, 50f * Time.deltaTime, 0);
        }

    }
}
