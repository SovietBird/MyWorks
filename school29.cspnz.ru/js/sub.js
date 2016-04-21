function checkForm(form){

    if ((document.getElementById('email').value == "") || (document.getElementById('name').value == "")) {
        alert('Не заполнены обязательные поля')
    } else {
    	alert('Подписка оформлена');
        document.location.reload();
        return false
    }

}
