
<?php
    /*
    3. Inject Variable in HTML Template

    $var = 'PHP Tutorial'.

    Put the said variable into the title section, h3 tag and as an anchor text within an HTML document. 

    */
    
    $var = "PHP Tutorial";
    $desc = "The anchor text, link label, link text, or link title is the visible, clickable text in a hyperlink. The blue, underlined anchor text is the most common as it is the web standard, but it is possible to change the color and underlining through html code. Different browsers display anchor texts differently."
?> 

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
   <?php
        echo "<h1> $var </h1>";
        echo "<p> $desc </p>";
   ?> 
</body>
</html>