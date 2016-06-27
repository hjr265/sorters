<?php
require_once('util.php');

// bubble implements bubble sort algorithm. The function takes an array.
function bubble(&$a) {
	for($i = 0; $i < count($a); $i++) {
		$swapped = false;
		for($j = count($a)-1; $j > $i; $j--) {
			if($a[$j] < $a[$j-1]) {
				swap($a, $j, $j-1);
				$swapped = true;
			}
		}
		if(!$swapped) {
			break;
		}
	}
}
