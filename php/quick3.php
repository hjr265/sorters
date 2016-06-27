<?php
require_once('util.php');

// quick3 implements quick sort (3 way) algorithm. The function takes an array.
function quick3(&$a) {
	_quick3($a, 0, count($a));
}

function _quick3(&$a, $l, $n) {
	if($n <= 1)
		return;
	swap($a, $l+$n-1, $l+rand(0, $n-1));
	$i = $l;
	$k = $l;
	$p = $l+$n;
	while($i < $p) {
		if($a[$i] < $a[$l+$n-1])
			swap($a, $i++, $k++);
		else if($a[$i] == $a[$l+$n-1])
			swap($a, $i, --$p);
		else
			$i++;
	}
	$m = min($p-$k, $l+$n-$p+1);
	for($i = 0; $i < $m-1; $i++)
		swap($a, $k+$i, $l+$n-$m+1+$i);
	_quick3($a, $l, $k-$l);
	_quick3($a, $k+1, $l+$n-$k-1);
}
