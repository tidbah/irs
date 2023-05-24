import module1
import module2
import module3
import module4

def main():
    # Instancier les différents modules
    module1_instance = module1.Module1()
    module2_instance = module2.Module2()
    module3_instance = module3.Module3()
    module4_instance = module4.Module4()

    # Appeler les fonctions et méthodes appropriées des modules
    module1_instance.function1()
    module2_instance.function2()

    module3_instance.method1()
    module4_instance.method2()

if __name__ == "__main__":
    main()
