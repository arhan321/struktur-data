#include <iostream>
#include <mysql/mysql.h>
#include <sstream>

using namespace std;

const char* hostname = "127.0.0.1";
const char* user = "root";
const char* pass = "Djony";
const char* dbname = "cpp_crud";
unsigned int port = 31235;
const char* unixsocket = NULL;
unsigned long clientflag = 0;

MYSQL* connect_db() {
    MYSQL* conn = mysql_init(0);
    if (conn) {
        conn = mysql_real_connect(conn, hostname, user, pass, dbname, port, unixsocket, clientflag);
        if (conn) {
            cout << "Connected to the database successfully." << endl;
        } else {
            cerr << "Connection failed: " << mysql_error(conn) << endl;
        }
    } else {
        cerr << "mysql_init failed" << endl;
    }
    return conn;
}

void create_user(const string& name, const string& email) {
    MYSQL* conn = connect_db();
    if (conn) {
        string query = "INSERT INTO users (name, email) VALUES ('" + name + "', '" + email + "')";
        if (mysql_query(conn, query.c_str())) {
            cerr << "INSERT failed: " << mysql_error(conn) << endl;
        } else {
            cout << "User successfully added." << endl;
        }
        mysql_close(conn);
    }
}

void get_users() {
    MYSQL* conn = connect_db();
    if (conn) {
        if (mysql_query(conn, "SELECT * FROM users")) {
            cerr << "SELECT failed: " << mysql_error(conn) << endl;
            mysql_close(conn);
            return;
        }

        MYSQL_RES* res = mysql_store_result(conn);
        if (res == nullptr) {
            cerr << "mysql_store_result failed: " << mysql_error(conn) << endl;
            mysql_close(conn);
            return;
        }

        MYSQL_ROW row;
        while ((row = mysql_fetch_row(res))) {
            cout << "     " <<endl;
            cout << "ID: " << row[0] << ", Name: " << row[1] << ", Email: " << row[2] << endl;
        }

        mysql_free_result(res);
        mysql_close(conn);
    }
}

void update_user(int user_id, const string& name, const string& email) {
    MYSQL* conn = connect_db();
    if (conn) {
        stringstream query;
        query << "UPDATE users SET name = '" << name << "', email = '" << email << "' WHERE id = " << user_id;
        if (mysql_query(conn, query.str().c_str())) {
            cerr << "UPDATE failed: " << mysql_error(conn) << endl;
        } else {
            cout << "User successfully updated." << endl;
        }
        mysql_close(conn);
    }
}

void delete_user(int user_id) {
    MYSQL* conn = connect_db();
    if (conn) {
        stringstream query;
        query << "DELETE FROM users WHERE id = " << user_id;
        if (mysql_query(conn, query.str().c_str())) {
            cerr << "DELETE failed: " << mysql_error(conn) << endl;
        } else {
            cout << "User successfully deleted." << endl;
        }
        mysql_close(conn);
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add User\n";
        cout << "2. Show All Users\n";
        cout << "3. Update User\n";
        cout << "4. Delete User\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name, email;
            cout << "Enter name: ";
            cin.ignore(); 
            getline(cin, name);
            cout << "Enter email: ";
            getline(cin, email);
            create_user(name, email);
        } else if (choice == 2) {
            get_users();
        } else if (choice == 3) {
            int user_id;
            string name, email;
            cout << "Enter user ID to update: ";
            cin >> user_id;
            cin.ignore(); 
            cout << "Enter new name: ";
            getline(cin, name);
            cout << "Enter new email: ";
            getline(cin, email);
            update_user(user_id, name, email);
        } else if (choice == 4) {
            int user_id;
            cout << "Enter user ID to delete: ";
            cin >> user_id;
            delete_user(user_id);
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
