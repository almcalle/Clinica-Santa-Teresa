<?php
require 'conexion.php';
$usuario=$_POST['usuario'];
$contrasena=$_POST['contrasena'];

$resultado = mysql_query("select * from usuarios where usuario ='$usuario'");
$fila = mysql_fetch_array($resultado);
if ($fila['usuario']==$usuario) {
	if ($fila['contrasena']==$contrasena) {
		session_start();
		$_SESSION['usuario'] = $usuario;
		$_SESSION['id_usuario'] = $fila['identidad'];
		mysql_close($conexion);
		header("Location: ../menu.php");
	}
	else{
		echo '<script type="text/javascript">
		alert("Password Incorrecto");
		javascript:history.go(-1)</script>';
	}
}
else{
	echo '<script type="text/javascript">
	alert("Usuario no Existe");
	javascript:history.go(-1)</script>';

}
?>
