start=`date +%s%N | cut -b1-13`
for i in {1..10}
do 
	./aes
done
end=`date +%s%N | cut -b1-13`
echo $((end-start))
