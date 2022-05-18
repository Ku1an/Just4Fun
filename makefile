
generate:
	@echo "Creating run files..." ;\
    g++ main.cpp -o run ;\
    ./run

clean:
	@echo "Removing all created files..." ;\
    rm run