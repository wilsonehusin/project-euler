<?php
	function isPrime($num) {
		$i = 2;
		while ($i < $num) {
			if (!($num % $i)) {
				return false;
			}
			$i = $i + 1;
		}
		return true;
	}
	$index = 10001;
	$primes = array();
	$i = 2;
	while (count($primes) < 10001) {
		if (isPrime($i)) {
			$primes[] = $i;
			echo "primes[" . count($primes) - 1 . "] = " . $i . "\n";
		}
		$i = $i + 1;
	}
	echo $primes[$index - 1] . "\n";
?>