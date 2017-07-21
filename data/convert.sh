#!/bin/bash
echo "Converting..."
cat data.txt | ./session | ./converter > data.csv
echo "End of conversion"
