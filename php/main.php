<?php
require('bubble.php');
require('heap.php');
require('insertion.php');
require('merge.php');
require('quick.php');
require('quick3.php');
require('selection.php');
require('shell.php');

$a = [3, 5, 2, 5, 6, 4, 4, 7, 3, 5, 2, 5, 6, 4, 4, 7, 1, 0, 8, 9];
shell($a);
echo implode(", ", $a)."\n";
