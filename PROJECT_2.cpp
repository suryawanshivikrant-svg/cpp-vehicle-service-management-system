#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

//=============(vehicle infnformation:)===============//

class vehicle
{
    public:
    string number;
    string owner;
    string model;
    string vehicle_type;
    int manufacturing_year;
};

//==============(service information:)================//


class service
{
    public:
    string number;
    string service_type;
    string date;
    string machanic_name;
    int cost;
};

vector<vehicle> vehicles_list;
vector<service> service_list;

/*
 cout<<"Enter the service_type:"<<endl;
    cin>>v.service_type;
*/
void add_vehicle()
{
    vehicle v;
    cout<<"=========(welcome:)========="<<endl;

    cout<<"Enter vechicle Number:"<<endl;
    cin>>v.number;

    cout<<"Enter the owner name:"<<endl;
    cin>>v.owner;

    cout<<"Enter the model Name:"<<endl;
    cin>>v.model;

    cout<<"Enter the vechicle type:"<<endl;
    cin>>v.vehicle_type;

    cout<<"Enter the  manufacturing_year:"<<endl;
    cin>>v.manufacturing_year;

    vehicles_list.push_back(v);


    cout<<"vehicle add successfully:"<<endl;

}

void dispaly_vehicle()
{
    if(vehicle_list.empty())
    {

        cout<<"No vehicle available: "<<endl;
        
    }

    cout<<"=======(:VEHICLE LIST:)=========="<<endl;
    int i;
    for(i=0;i<vehicles_list.size();i++)
    {
        cout<<"vehicle number: "<<vehicle_list[i].number<<endl;
        cout<<"vehicle owner name: "<<vehicle_list[i].owner<<endl;
        cout<<"model name  :"<<vehicle_list[i].model<<endl;
        cout<<"vehicle type: "<<vehicle_list[i].vehicle_type<<endl;
        cout<<"manufacturing_year"<<vehicle_list[i].manufacturing_year<<endl;
    }

}

void searh_vechicle()
{
    cout<<"=====(searh th vehicle:)========:"<<endl;
    string num;
    cout<<"Enter the vehicle number:"<<endl;
    cin>>num;
     int i;
     for(i=0;i<vehicles_list.size();i++)
     {
        if(num==vehicle_list[i].number)
        {
            cout<<"vehicle number:"<<vehicle_list[i].number<<endl;

            cout<<"owenr name: "<<vehicle_list[i].owner<<endl;

            cout<<"model name: "<<vehicle_list[i].model<<endl;

            cout<<"vehicle type:"<<vehicle_list[i].vehicle_type<<endl;

            cout<<"manfacturing year: "<<vehicle_list[i].manufacturing_year<<endl;
        }
        return ;
     }


     cout<<"vehicle not found:"<<endl;
    
}
void updatevehicle()
{
    /////
    cout<<"============(update the vehicle information:)========="<<endl;
    int i;
    string num;
    cout<<"Enter the vehicle number:"<<endl;
    cin>>num;

    for(i=0;i<vehicles_list.size();i++)
    {
        if(vehicle_list[i].number==num)
        {
            cout<<"Enter the owner name:"<<endl;
            cin>>vehicle_list[i].owner;

            cout<<"Enter the model name:"<<endl;
            cin>>vehicle_list[i].model;

            cout<<"Enter the vehicle type:"<<endl;
            cin>>vehicle_list[i].vehicle_type;

            cout<<"Enter the manfacturing year:"<<endl;
            cin>>vehicle_list[i].manufacturing_year;

            return;
        }


    }

    cout<<"the vehicle not found:"<<endl;


}

void delete_vehicle()
{
    int i;
    string num;
    cout<<"Enter the vehicle num: "<<endl;
    cin>>num;

    for(i=0;i<vehicle_list.size();i++)
    {
        if(num==vehicle_list[i].number)
        {
            vehicle_list.erase(vehicle_list.begin()+i);
            cout<<"vehicle delete successfully: "<<endl;
            return;
        }

    }

    cout<<"vehicle not fout:"<<endl;
}

/*
string numbe;
    string service_type;
    string date;
    string machanic_name;
    int cost;

   Oil Change       → ₹2500
Brake Service    → ₹4000
Tyre Change      → ₹3000
Engine Service   → ₹8000
General Service  → ₹1500

*/

void add_service()
{

    service s;
    char op;

    cout << "=========( ADD SERVICE )=========" << endl;

    cout << "Enter the vehicle number: " << endl;
    cin >> s.number;

    cout << "Enter the service type:" << endl;
    cout << "a) Oil Change       - Rs.2500" << endl;
    cout << "b) Brake Service    - Rs.4000" << endl;
    cout << "c) Tyre Change      - Rs.3000" << endl;
    cout << "d) Engine Service   - Rs.8000" << endl;
    cout << "e) General Service  - Rs.1500" << endl;

    cout << "Enter the option: ";
    cin >> op;

    switch(op)
    {
        case 'a':
            s.service_type = "Oil Change";
            s.cost = 2500;
            break;

        case 'b':
            s.service_type = "Brake Service";
            s.cost = 4000;
            break;

        case 'c':
            s.service_type = "Tyre Change";
            s.cost = 3000;
            break;

        case 'd':
            s.service_type = "Engine Service";
            s.cost = 8000;
            break;

        case 'e':
            s.service_type = "General Service";
            s.cost = 1500;
            break;

        default:
            cout << "Invalid service option!" << endl;
            return;
    }

    cout << "Enter the date: ";
    cin >> s.date;

    cout << "Enter the mechanic name: ";
    cin >> s.machanic_name;

    service_list.push_back(s);

    cout << "Service added successfully!" << endl;



}

void dispaly_service()
{
    if(service_list.empty())
    {
        cout<<"no service record are available:"<<endl;
        return;
    }

    cout<<"==============(SERVICE LIST)============="<<endl;
    for(int i=0;i<service_list.size();i++)
    {
        cout<<"vehicle number: "<<service_list[i].number<<endl;
        cout << "Vehicle Number : " << service_list[i].number << endl;
        cout << "Service Type : " << service_list[i].service_type << endl;
        cout << "Date : " << service_list[i].date << endl;
        cout << "Mechanic Name : " << service_list[i].machanic_name << endl;
        cout << "Cost : Rs." << service_list[i].cost << endl;
    }
}

void search_service()
{
    string num;

    cout << "=========(SEARCH SERVICE)=========" << endl;

    cout << "Enter the vehicle number: ";
    cin >> num;

    for(int i = 0; i < service_list.size(); i++)
    {
        if(service_list[i].number == num)
        {
            cout << "Vehicle Number : " << service_list[i].number << endl;
            cout << "Service Type  : " << service_list[i].service_type << endl;
            cout << "Date : " << service_list[i].date << endl;
            cout << "Mechanic Name : " << service_list[i].machanic_name << endl;
            cout << "Cost : Rs." << service_list[i].cost << endl;

            return;
        }
    }

    cout <<"Service record not found"<< endl;
}






void update_service()
{
    string num;

    cout << "=========(UPDATE SERVICE)================" << endl;

    cout << "Enter the vehicle number: ";
    cin >> num;

    for(int i = 0; i < service_list.size(); i++)
    {
        if(service_list[i].number == num)
        {
            char op;

            cout<<"Select new service type:"<<endl;
            cout<<"a) Oil Change  rs.2500"<<endl;
            cout<<"b) Brake Service  rs.4000"<<endl;
            cout<<"c) Tyre Change  rs.3000"<<endl;
            cout<<"d) Engine Service   rs.8000"<<endl;
            cout<<"e) General Service rs.1500"<<endl;

            cout << "Enter option: ";
            cin >> op;

            switch(op)
            {
                case 'a':
                    service_list[i].service_type="Oil Change";
                    service_list[i].cost=2500;
                    break;

                case 'b':
                    service_list[i].service_type="Brake Service";
                    service_list[i].cost=4000;
                    break;

                case 'c':
                    service_list[i].service_type="Tyre Change";
                    service_list[i].cost = 3000;
                    break;

                case 'd':
                    service_list[i].service_type="Engine Service:";
                    service_list[i].cost = 8000;
                    break;

                case 'e':
                    service_list[i].service_type="General Service:";
                    service_list[i].cost = 1500;
                    break;

                default:
                    cout<<"Invalid option"<<endl;
                    return;
            }

            cout<<"Enter new date:";
            cin>>service_list[i].date;

            cout<<"Enter new mechanic name:";
            cin>>service_list[i].machanic_name;

            cout<<"Service updated successfully"<<endl;

            return;
        }
    }

    cout<<"Service record not found" << endl;
}
void delete_service()
{
    string num;

    cout<<"delete service record using vehicle num:"<<endl;

    cout<<"Enter the vehicle number:"<<endl;
    cin>>num;

    for(int i=0;i < service_list.size(); i++)
    {
        if(service_list[i].number==num)
        {
            service_list.erase(service_list.begin() + i);

            cout<<"Service deleted successfully"<<endl;
            return;
        }
    }

   // cout << "Service record not found."<<endl;
}


void calculate_bill()
{
    string num;
    int total=0;

    cout<<"Enter vehicle number: ";
    cin>>num;

    for(int i=0;i<service_list.size();i++)
    {
        if(service_list[i].number==num)
        {
            cout<<"Service type: "<<service_list[i].service_type<<endl;
            cout<<"Cost: "<<service_list[i].cost<<endl;

            total=total+service_list[i].cost;
        }
    }

    cout<<"Total bill: "<<total<<endl;
}

void save_vehicle()
{
    
    ofstream fout("vehicle.txt");

    for(int i=0;i<vehicles_list.size();i++)
    {
        fout<<vehicles_list[i].number<<" ";
        fout<<vehicles_list[i].owner<<" ";
        fout<<vehicles_list[i].model<<" ";
        fout<<vehicles_list[i].vehicle_type<<" ";
        fout<<vehicles_list[i].manufacturing_year<<endl;
    }

    fout.close();

    cout<<"vehicle data saved successfully saved in file:(* *)"<<endl;
}

int main()
{

    cout<<"=================(V25BE9V1)==============="<<endl;
    int choice;

    while(1)
    {
        cout<<"==========(VEHICLE SERVICE MANAGEMENT)=========="<<endl;
        cout<<"1 Add Vehicle"<<endl;

        cout<<"2 Display Vehicle"<<endl;

        cout<<"3 Search Vehicle"<<endl;


        cout<<"4 Update Vehicle"<<endl;


        cout<<"5 Delete Vehicle"<<endl;

        cout<<"6 Add Service"<<endl;

        cout<<"7 Display Service"<<endl;

        cout<<"8 Search Service"<<endl;

        cout<<"9 Update Service"<<endl;

        cout<<"10 Delete Service"<<endl;

        cout<<"11 Calculate Bill"<<endl;

        cout<<"12 Save Vehicle"<<endl;

        cout<<"13 Save Service"<<endl;

        cout<<"14 Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                add_vehicle();
                break;

            case 2:
                dispaly_vehicle();
                break;

            case 3:
                searh_vechicle();
                break;

            case 4:
                updatevehicle();
                break;

            case 5:
                delete_vehicle();
                break;

            case 6:
                add_service();
                break;

            case 7:
                display_service();
                break;

            case 8:
                search_service();
                break;

            case 9:
                update_service();
                break;

            case 10:
                delete_service();
                break;

            case 11:
                calculate_bill();
                break;

            case 12:
                save_vehicle();
                break;

            case 13:
                save_service();
                break;

            case 14:
                cout<<"Thank you!"<<endl;
                return 0;

            default:
                cout<<"Invalid choice"<<endl;
        }
    }

    return 0;
}
