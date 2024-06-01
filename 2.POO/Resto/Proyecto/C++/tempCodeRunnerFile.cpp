
                    archivo.open(id.c_str(), ios::in);
                    cout << "Historial del cliente:\n";
                    cout << "\n";
                    cout << "Fecha de consulta: " << fecha << "\n";
                    string cadena;
                    while(!archivo.eof()){
                        getline(archivo,cadena);
                        cout << cadena << "\n";
                    }