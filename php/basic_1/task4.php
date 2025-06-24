<?php
    /*
    4. Basic HTML Form and Echo Name

    Create a simple HTML form and accept the user name and display the name through PHP echo statement.
    */
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method="POST">
        <h2>Please input your name:</h2>
      
        <input type="text" name="name">
      
        <input type="submit" value="Submit Name">
    </form>
    <?php
        if ($_SERVER['REQUEST_METHOD'] == 'POST' && isset($_POST['name']) )
        {
            $name = $_POST['name'];

            echo "<h1> $name </h1>";
        }
    ?>
</body>
</html>