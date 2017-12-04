/**
 * Created by Josef Ginerman on 04/12/17.
 * ID : 332494830
 **/

#ifndef TCPCLIENT_CLIENT_H
#define TCPCLIENT_CLIENT_H


class Client {
public:
    Client(const char *serverIP, int serverPort);
    void connectToServer();
    int sendExercise(int arg1, char op, int arg2);
private:
    const char *serverIP;
    int serverPort;
    int clientSocket;
};


#endif //TCPCLIENT_CLIENT_H
