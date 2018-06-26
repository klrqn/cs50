<?php
    date_default_timezone_set('US/Eastern');
    $time = date('h;i:s', time());
?>

<html>
    <head>
        <title>Current Time in Rhode Island</title>
    </head>
    <body>
        The current time in Rhode Island is <?= $time ?>
    </body>
</html>