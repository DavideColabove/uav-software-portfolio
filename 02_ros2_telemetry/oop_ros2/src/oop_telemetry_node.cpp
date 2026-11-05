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

    // Applichiamo la Rule of Delete studiata per proteggere le risorse
    TelemetryNode(const TelemetryNode&) = delete;
    TelemetryNode& operator=(const TelemetryNode&) = delete;

    void run() {
        // TODO 1: Inizializza qui i due thread (producer e consumer)
        // Ricorda la sintassi: std::thread t(&Classe::Metodo, this);
        
        // TODO 2: Fai la join dei thread per attendere la loro terminazione
    }

private:
    std::mutex mtx_;
    std::condition_variable cv_;
    std::queue<float> telemetry_queue_;
    const float CONST_MULTIPLIER = 3.14;

    void sensorReader() {
        // TODO 3: Inserisci la logica del Produttore (ciclo for, lock_guard su mtx_, push su telemetry_queue_, notify_one)
        // Usa direttamente le variabili private (hanno il suffisso '_')
    }

    void flightController() {
        // TODO 4: Inserisci la logica del Consumatore (ciclo for, unique_lock, cv_.wait)
        // Attenzione alla lambda nel wait: devi catturare [this] per poter leggere telemetry_queue_.empty()
    }
};

int main() {
    TelemetryNode node;
    node.run();
    return 0;
}