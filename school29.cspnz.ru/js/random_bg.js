
	// var min = 0;
	// var max = 1;
	// var n = Math.floor(Math.random() * (max - min + 1) + min);



	// if (n == 1) { 
	// 	document.write("<img src="./img/photogallery_bg.jpg" alt="" class="photo_bg" width="310px">");
	// }
	// else { 
	// 	document.write("<img src="./img/photogallery_bg1.jpg" alt="" class="photo_bg" width="310px">");
	// }

var min = 0;
var max = 1;
var n = Math.floor(Math.random() * (max - min + 1) + min);

var q = "photo_bg";
var w = "310px";
image = new Array();
image[0]="./img/photogallery_bg.jpg";
image[1]="./img/photogallery_bg1.jpg";

document.write ("<img src=" + image[n] + " class=" + q + " width=" + w + ">");
