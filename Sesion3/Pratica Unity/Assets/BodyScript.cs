using UnityEngine;
using System.Collections;

public class BodyScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	string currentView;

	public void changeView( string view ) 
	{ 
		if ( view == currentView) 
			return; 
		
		
		object[] parms; 
		currentView = view; 
		StopCoroutine( "RotateToView" ); 
		
		switch ( view ) 
		{ 
		case "Left": 
			parms = new object [2] {Vector3.left,Vector3.up}; 
			StartCoroutine( "RotateToView", parms ); 
			break; 
			
		case "Front": 
			// TODO
			break; 
			
		case "Top":
			 // TODO
			 break; 
			 
		case "Bottom": 
			 // TODO
			 break; 
			 
		case "Right": 
			 // TODO
			 break; 
			 
		 case "Back": 
			 // TODO
			 break; 
			 
		 default: 
			 break; 
		 } 
 } 
	
	bool done = false;
	
	private IEnumerator RotateToView( object[] parms ) { 
		Vector3 direction = (Vector3)parms [0]; 
		Vector3 up = (Vector3)parms [1]; 
		// done es una variable booleana que controla el bucle 

		//transform.rotation = q;

		while (! done) {
			// pon tu código de rotación gradual aquí 
			// la siguiente instrucción le dice al runtime que ceda 
			// la ejecución a otros procesos para no bloquear el hilo 
			// principal, pero que debe volver al bucle while 
			// en el siguiente frame
			Quaternion q = Quaternion.FromToRotation(transform.forward, direction);
			transform.rotation = transform.rotation * q;

			yield return null; 
		}
			// rotación ha terminado
			yield return "done";
	}

}
