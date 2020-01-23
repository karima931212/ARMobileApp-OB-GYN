using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotationme : MonoBehaviour {

	public GameObject other;
   // public float rotateSpeed = 10f;
    public bool roteteStatues = false;
	
    public void setStatus(){
        if(roteteStatues == false){
            roteteStatues = true;
        }else{
            roteteStatues = false;
        }
    }
	
	// Update is called once per frame
	void Update () {
        if(roteteStatues == true){
            //other.transform.Rotate(0, 0.8f, 0);
            other.transform.Rotate(0, 50f*Time.deltaTime, 0);
        }
	
	}
}
