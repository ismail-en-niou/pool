int ft_sqrt(int nb){
    if(nb % 2 != 0)
        return 0 ;
    for(int i =0 ; i< nb /2 ; i++){
        if(i*i == nb )
            return i;
    }
}