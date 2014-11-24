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
			parms = new object [2] {Vector3.forward,Vector3.up}; 
			StartCoroutine( "RotateToView", parms ); 
			break; 
			
		case "Top":
			 // TODO
			parms = new object [2] {Vector3.up,Vector3.up}; 
			StartCoroutine( "RotateToView", parms ); 

			 break; 
			 
		case "Bottom": 
			 // TODO
			parms = new object [2] {Vector3.down,Vector3.up}; 
			StartCoroutine( "RotateToView", parms ); 
			 break; 
			 
		case "Right": 
			 // TODO
			parms = new object [2] {Vector3.right,Vector3.up}; 
			StartCoroutine( "RotateToView", parms ); 
			break; 
			 
		 case "Back": 
			 // TODO
			parms = new object [2] {Vector3.back,Vector3.up}; 
			StartCoroutine( "RotateToView", parms ); 
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
			float speed = 5.0f;
			Quaternion q = Quaternion.FromToRotation(transform.forward, direction);
			//transform.rotation = transform.rotation * q;
			transform.rotation =  Quaternion.Lerp (transform.rotation, q, Time.time * speed);;
			yield return null; 
		}
			// rotación ha terminado
			yield return "done";
	}

}
