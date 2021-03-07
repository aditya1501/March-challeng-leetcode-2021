class MyHashMap{
	int hm[100000001];
public:
	MyHashMap(){
		for(int i=0;i<10000001;i++)
			hm[i]=-1;

	}
	void put(int key,int value){
		hm[key]=value;
	}
	int get(int key){
		return hm[key];
	}
	void remove(int key){
		hm[key]=-1;
	}
};

//** in above method the constructor will take time to run;

//second way of doing the same problem
class MyHashMap{
	int hm[1000001];
	unordered_set<int>seen;
public:
	MyHashMap(){
		//this constructor is now useless.
	}
	void put(int key,int value){
		seen.insert(key);
		hm[key]=value;
	}
	int get(int key){
		if(seen.find(key)==end(seen))return -1;
		return hm[key];
	}
	void remove(int key){
		seen.erase(key);
		hm[key]=-1;
	}
};