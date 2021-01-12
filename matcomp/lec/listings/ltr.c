for k = 1,2,...n
	for i = 1,2,...,k-1
		b[k] <- b[k] - l[k][i]b[k]
	end
	if l[k][k] == 0 flag ``error"; exit
	else b[k] <- b[k]/l[k][k]
end
