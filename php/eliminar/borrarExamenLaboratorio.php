<?php
require '../conexion.php';
$id = $_POST['id'];

//ELIMINAMOS LA FICHA

mysql_query("DELETE FROM examen_laboratorio  WHERE id = '$id'");

//ACTUALIZAMOS LOS REGISTROS Y LOS OBTENEMOS
mysql_close($conexion);
echo '<script type="text/javascript">alert("Examen de Laboratorio borrado");</script>';
echo "<script>window.location = 'consultaExamenLaboratorio.php'</script>";
?>
