/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package index;

import java.util.*;


public class Index {

    /**
     * @param args the command line arguments
     */
    static int index;
    static String inputString;
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
        System.out.print("Ingrese una cadena a validar: ");
        inputString = sc.nextLine();

        index = 0;

        if (E()) {
            if (index == inputString.length()) {
                System.out.println("La cadena ingresada es válida.");
            } else {
                System.out.println("La cadena ingresada no es válida.");
            }
        } else {
            System.out.println("La cadena ingresada no es válida.");
        }
    }

    static boolean E() {
        int savedIndex = index;

        if (T()) {
            if (index < inputString.length() && inputString.charAt(index) == '+') {
                index++;
                if (E()) {
                    return true;
                }
            } else {
                return true;
            }
        }

        index = savedIndex;

        return false;
    }

    static boolean T() {
        int savedIndex = index;

        if (F()) {
            if (index < inputString.length() && inputString.charAt(index) == '*') {
                index++;
                if (T()) {
                    return true;
                }
            } else {
                return true;
            }
        }

        index = savedIndex;

        return false;
    }

    static boolean F() {
        int savedIndex = index;

        if (index < inputString.length() && inputString.charAt(index) == '(') {
            index++;
            if (E()) {
                if (index < inputString.length() && inputString.charAt(index) == ')') {
                    index++;
                    return true;
                }
            }
        }

        index = savedIndex;

        if (index < inputString.length() && inputString.charAt(index) == 'i') {
            index++;
            return true;
        }

        index = savedIndex;

        return false;
   
    }
    
}
