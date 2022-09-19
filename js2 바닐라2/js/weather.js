
function onGeoOK(position){
    const lat = position.coords.latitude;
    const lng = position.coords.longitude;
    console.log("You live in", lat , lng);
}
function onGeoError(){
    alert("Can't find you. No weather for you.");
}


navigator.geolocation.getCurrentPosition(onGeoOK, onGeoError);


//8.0 5분 50초 쯤 부터 API 머시기쪽부터