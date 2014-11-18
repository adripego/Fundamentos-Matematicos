using UnityEngine;
using System.Collections;

public class MainCameraScript : MonoBehaviour {

	public BodyScript bodyController;

	// Use this for initialization
	void Start () {
		//transform.position = new Vector3 (5, 0, 0);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnGUI () { 
		// Make a background box 
		GUI.Box(new Rect(10,10,100,200), "Views"); 
		
		if(GUI.Button(new Rect(20,40,80,20), "Front")) { 
			bodyController.changeView("Front"); 
		} 
		
		if(GUI.Button(new Rect(20,70,80,20), "Left")) { 
			bodyController.changeView("Left"); 
		} 
		
		if(GUI.Button(new Rect(20,100,80,20), "Right")) { 
			bodyController.changeView("Right"); 
		} 
		
		if(GUI.Button(new Rect(20,130,80,20), "Top")) { 
			bodyController.changeView("Top"); 
		} 
		
		if(GUI.Button(new Rect(20,160,80,20), "Bottom")) { 
			bodyController.changeView("Bottom"); 
		} 
		
		if(GUI.Button(new Rect(20,190,80,20), "Back")) { 
			bodyController.changeView("Back"); 
		} 
		
	}


}
