<?php
function swap(&$a, $i, $j) {
	$t = $a[$i];
	$a[$i] = $a[$j];
	$a[$j] = $t;
}
