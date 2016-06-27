<?php
require_once('util.php');

// heap implements heap sort algorithm. The function takes an array.
function heap(&$a) {
	$n = count($a);
	array_unshift($a, 0);
	for($i = $n/2; $i >= 1; $i--)
		sink($a, $i, $n);
	for($i = 1; $i <= $n; $i++) {
		swap($a, 1, $n-$i+1);
		sink($a, 1, $n-$i);
	}
	array_shift($a);
}

function sink(&$a, $i, $n) {
	$lc = 2*$i;
	if($lc > $n)
		return;
	$rc = $lc+1;
	$mc = ($rc > $n) ? $lc : ($a[$lc] > $a[$rc] ? $lc : $rc);
	if($a[$i] >= $a[$mc])
		return;
	swap($a, $i, $mc);
	sink($a, $mc, $n);
}
