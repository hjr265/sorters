<?php
require_once('util.php');

// insertion implements insertion sort algorithm. The function takes an array.
function insertion(&$a) {
	for($i = 2; $i < count($a); $i++) {
		for($k = $i; $k > 0 && $a[$k] < $a[$k-1]; $k--)
			swap($a, $k, $k-1);
	}
}
