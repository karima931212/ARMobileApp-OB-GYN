using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class actions : MonoBehaviour {

	public Animation anim;
	public GameObject GameObject_placenta;
	public GameObject gameobject_R;
	
	
	void Start () {
		anim.Play("idle");
	}
	
public void BButt_expand() 		//------------ buton
	{
	anim.Play("expand");
	GameObject_placenta.active = true;	
	}
	
public void BButt_join() 		//------------ buton
	{
	anim.Play("join");
        gameobject_R.active = true;
        GameObject_placenta.active = true;

	}
	
	public void BButt_HIDEGAMEOBJECT() 		//------------ buton
	{
	GameObject_placenta.active = false;	
	}
	
	public void BButt_SHOWGAMEOBJECT() 		//------------ buton
	{
        gameobject_R.active = false;	
	}
	
	public void BButt_rotateR() 		//------------ buton
	{
	gameobject_R.transform.Rotate(0, 20.5f, 0);	
	}
	
		public void BButt_rotateL() 		//------------ buton
	{
	gameobject_R.transform.Rotate(0, -20.5f, 0);	
	}
	


}
