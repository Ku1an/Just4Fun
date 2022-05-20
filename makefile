
generate:
	@echo "Creating run files..." ;\
    g++ -std=c++17 main.cpp -o run ;\
    ./run

clean:
	@echo "Removing all created files..." ;\
    rm run