<?php

?>

<html>
    <head>
        <title>Get1</title>
    </head>
    <body>
        In the title type "?" key=___ & value=___
        
        <table>
        <?php foreach($_GET as $key => $value): ?>
            <tr>
                <td class="key"><?= $key ?></td>
                <td class="value"><?= $value ?></td>
            </tr>
        <?php endforeach; ?>
        
        </table>
    </body>
</html>
