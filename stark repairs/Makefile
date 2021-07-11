
run: main.o startup.o signup.o login.o choose_service.o display_service.o service_details.o query.o payment.o logout.o invoice.o clean_stdin.o
	g++ main.o startup.o signup.o login.o choose_service.o display_service.o service_details.o query.o payment.o logout.o invoice.o clean_stdin.o -o run

main.o: main.cpp 
	g++ -c main.cpp

startup.o: classes/startup.cpp header_files/startup.h
	g++ -c classes/startup.cpp

signup.o: classes/signup.cpp header_files/signup.h
	g++ -c classes/signup.cpp

login.o: classes/login.cpp header_files/login.h
	g++ -c classes/login.cpp

choose_service.o: classes/choose_service.cpp header_files/choose_service.h
	g++ -c classes/choose_service.cpp

display_service.o: classes/display_service.cpp header_files/display_service.h
	g++ -c classes/display_service.cpp

service_details.o: classes/service_details.cpp header_files/service_details.h
	g++ -c classes/service_details.cpp

query.o: classes/query.cpp header_files/query.h
	g++ -c classes/query.cpp

payment.o: classes/payment.cpp header_files/payment.h
	g++ -c classes/payment.cpp

logout.o: classes/logout.cpp header_files/logout.h
	g++ -c classes/logout.cpp

invoice.o: classes/invoice.cpp header_files/invoice.h
	g++ -c classes/invoice.cpp

clean_stdin.o: classes/clean_stdin.cpp header_files/clean_stdin.h
	g++ -c classes/clean_stdin.cpp

clean:
	rm *.o run
