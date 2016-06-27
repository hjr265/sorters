<?php
require_once('util.php');

// selection implements selection sort algorithm. The function takes an array.
function selection(&$a) {
	for($i = 0; $i < count($a); $i++) {
		$k = $i;
		for($j = $i+1; $j < count($a); $j++) {
			if($a[$j] < $a[$k])
				$k = $j;
		}
		swap($a, $i, $k);
	}
}
