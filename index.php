<html>
<head>
<meta http-equiv="Content-Language" content="pt-br">
<meta http-equiv="Content-Type" content="text/html; charset=windows-1252">
<title>Controle de Leds com Arduino</title>
</head>
<body>
 
<!--------------POST DO BOTAO LIGAR AMARELO------------------------>
<form method="POST" action="arduino.php">
    <input type="hidden" value="7" name="estado" >
    <input type="submit" value="Ligar Led Amarelo" name="amarelo">
</form>

 
<!--------------POST DO BOTAO LIGAR AZUL--------------------------->
<form method="POST" action="arduino.php">
    <input type="hidden" value="Azul" name="estado" >
    <input type="submit" value="    Ligar Led Azul    " name="azul">
</form>
 
<!-------------POST DO BOTAO LIGAR LARANJA------------------------->
<form method="POST" action="arduino.php">
    <input type="hidden" value="Vermelho" name="estado" >
    <input type="submit" value="  Ligar Led Vermelho" name="vermelho">
</form>
 
<!------------POST DO BOTAO LIGAR VERDE--------------------------->
<form method="POST" action="arduino.php">
    <input type="hidden" value="Verde" name="estado" >
    <input type="submit" value="   Ligar Led Verde   " name="verde">
</form>
<br><br>

    
</body>
</html>