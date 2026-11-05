#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

class TelemetryNode {
public:
    TelemetryNode() {
        std::cout << "TelemetryNode inizializzato.\n";
    }

    void run() {
        // TODO: Inizializza qui i due thread (producer e consumer)
        // Ricorda la sintassi speciale per passare un metodo di classe a std::thread usando 'this'
        
        // TODO: Fai la join dei thread
    }

private:
    // Stato incapsulato del nodo
    std::mutex mtx_;
    std::condition_variable cv_;
    std::queue<float> telemetry_queue_;
    const float CONST_MULTIPLIER = 3.14;

    void sensorReader() {
        // TODO: Inserisci la logica del Produttore (ciclo for, lock_guard, push, notify)
        // Usa le variabili private con il suffisso '_'
    }

    void flightController() {
        // TODO: Inserisci la logica del Consumatore (ciclo for, unique_lock, wait con lambda, pop)
        // Ricorda di catturare 'this' nella lambda espressione per accedere a telemetry_queue_
    }
};

int main() {
    TelemetryNode node;
    node.run();
    return 0;
}