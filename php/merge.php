<?php
// merge implements merge sort algorithm. The function takes an array.
function merge(&$a) {
	_merge($a, 0, count($a));
}

function _merge(&$a, $l, $n) {
	if($n <= 1)
		return;
	$m = floor($n/2);
	_merge($a, $l, $m);
	_merge($a, $l+$m, $n-$m);
	$b = array_slice($a, $l);
	$i = 0;
	$j = $l+$m;
	$k = $l;
	while($i < $m && $j < $l+$n) {
		if($a[$j] < $b[$i])
			$a[$k++] = $a[$j++];
		else
			$a[$k++] = $b[$i++];
	}
	while($i < $m)
		$a[$k++] = $b[$i++];
}
