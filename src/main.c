 #include <stdio.h>

    //função para exibir saldos das contas bancárias 
    void exibirSaldos(int *contaA, int *contaB) {
        printf("Saldo da Conta A: %d\n", *contaA);
        printf("Saldo da Conta B: %d\n", *contaB);
    }
    
    //função para trocar os saldos entre duas contas usando ponteiros
    void trocarSaldos(int *contaA, int *contaB) {
        int temp = *contaA;
        *contaA = *contaB;
        *contaB = temp;
    }
    
    void atualizarSaldo(int **conta, int novoSaldo) {
        **conta = novoSaldo;
    }
    
    int main() {
        //iniciando saldos das contas a e b 
        int contaA = 1000;
        int contaB = 500;
        
        //exibindo saldos iniciais
        printf("# Saldos Iniciais: \n");
        exibirSaldos(&contaA, &contaB);
        
        //trocando valores de saldos entre conta a e b
        printf("\n- Trocando Saldos...");
        trocarSaldos(&contaA, &contaB);
        
        //exibindo saldos saldos novos 
        printf("\n# Saldos Atualizados:\n");
        exibirSaldos(&contaA, &contaB);
        
        //ponteiro to ponteiro: modificando saldos
        int *pConta = &contaA;
        printf("\n- Atualizando Saldo...");
        atualizarSaldo(&pConta, 2000);
        
        //exibindo saldos finais
        printf("\n# Saldos Finais:\n");
        exibirSaldos(&contaA, &contaB);
        
        return 0;
    }