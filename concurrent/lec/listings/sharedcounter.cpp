// a naive implementation of shared counter
public class Counter {
	private long value;
	public Counter(long i) {
		value = i;
	}
	public long getAndIncrement() {
		return value++;
	}
}

Counter counter = new Counter(1);
void primePrint {
	long i = 0;
	long limit = power(10,10);
	while (i < limit) {
		i = counter.getAndIncrement();
		if (isPrime(i))
			print(i);
	}
}

