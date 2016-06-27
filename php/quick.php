<?php
require_once('util.php');

// quick implements quick sort algorithm. The function takes an array.
function quick(&$a) {
	_quick($a, 0, count($a));
}

function _quick(&$a, $l, $n) {
	if($n <= 1)
		return;
	swap($a, $l, $l+rand(0, $n-1));
	$k = $l;
	for($i = $l+1; $i < $l+$n; $i++) {
		if($a[$i] < $a[$l])
			swap($a, ++$k, $i);
	}
	swap($a, $l, $k);
	_quick($a, $l, $k-$l);
	_quick($a, $k+1, $l+$n-$k-1);
}
