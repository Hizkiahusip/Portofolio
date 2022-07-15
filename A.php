<?php
 
$random_data = [12, 9, 30, "A", "M", 99, 82, "J", "N", "B"];
 
sort($random_data);
echo "Array  ";
foreach($random_data as $element) {
    echo str_pad($element, 9)." ";
}