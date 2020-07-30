#FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo
FT_NBR3=gtaio\ luSnemf

base5x1=$(echo "$FT_NBR1" | sed "s_\'_0_g" | sed 's_\\_1_g' | sed 's_\"_2_g' | sed 's_\?_3_g' | sed 's_\!_4_g')
#echo "example one base 5 =  $base5x1"

base5x2=$(echo "$FT_NBR2" | sed 's_m_0_g' | sed 's_r_1_g' | sed 's_d_2_g' | sed 's_o_3_g' | sed 's_c_4_g')
#echo "example two base 5 = $base5x2"

var1=$(echo "ibase=5; $base5x1" | bc )
var2=$(echo "ibase=5; $base5x2" | bc )
var3=$(echo "$var1 + $var2" | bc )
var4=$(echo "obase=13; $var3" | bc )
var5=$(echo "$var4" | tr '0123456789ABC' 'gtaio luSnemf' ) 

echo "converted to gtaio luSnemf base = $var5" 
