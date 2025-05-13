class MioThread extends Thread {
    @Override
    public void run() {
        System.out.println("Esecuzione del thread tramite ereditarietà" + getName());
        // Codice da eseguire nel thread
    } 
    MioThread(String nome) {
        super(nome);
    }
}

class MioRunnable implements Runnable {
    @Override
    public void run() {
        System.out.println("Il thread è in esecuzione!");
        // Codice da eseguire nel thread
    }
}


public class es01 {
    public static void main(String[] args) {
        // Creazione di un thread tramite ereditarietà
        MioThread thread = new MioThread();
        Thread thread1 = new Thread(runnable);
        thread.start();

        // Creazione di un thread tramite interfaccia Runnable
        MioRunnable runnable = new MioRunnable();
        Thread thread1 = new Thread(runnable);
        thread1.start(); // Avvia il thread

        // Creazione di un thread tramite lambda
        
    }
}
