<?php
require_once('util.php');

// shell implements shell sort algorithm. The function takes an array.
function shell(&$a) {
	$h = 0;
	while($h < count($a))
		$h = 3*$h+1;
	while($h > 0) {
		$h = floor($h/3);
		for($k = 0; $k < $h; $k++) {
			for($j = 0; $j < floor(count($a)/$h); $j += floor(count($a)/$h))
				_insertion($a, $j, floor(count($a)/$h)-$j);
		}
	}
}

function _insertion(&$a, $l, $n) {
	for($i = $l+2; $i < $l+$n; $i++) {
		for($k = $i; $k > $l && $a[$k] < $a[$k-1]; $k--)
			swap($a, $k, $k-1);
	}
}
