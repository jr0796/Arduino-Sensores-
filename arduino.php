<?php

exec("mode COM7: BAUD=9600 PARITY=N data=8 stop=1 xon=on");

$port = fopen("COM7", "w+");
// sleep(2);
// $led = $_POST['estado'];

// if ($led == 7)
// {
    echo "<br> Ligou o Amarelo <br>";
    fwrite($port, 7);
    // var_dump($port);
// }

echo(fgets($port));

    // else if ($_POST['estado']=="Azul")
    // {
    //     echo "Ligou o Azul";
    //     fwrite($port, "z");
    // }
    // else if ($_POST['estado']=="Vermelho")
    //     {
    //         echo "Ligou o Vermelho";
    //         fwrite($port, "m");
    //     }
    // else if ($_POST['estado']=="Verde")
    //         {
    //             echo "Ligou o Verde";
    //             fwrite($port, "v");
    //         }
fclose($port);
?>