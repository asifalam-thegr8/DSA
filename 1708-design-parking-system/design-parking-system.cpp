class ParkingSystem {
private:
    vector<int> slots;
public:
    ParkingSystem(int big, int medium, int small) {
        slots = {0, big, medium, small};
    }
    
    bool addCar(int carType) {
        if(slots[carType]>0){
            slots[carType]--;
            return true;
        }        
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */