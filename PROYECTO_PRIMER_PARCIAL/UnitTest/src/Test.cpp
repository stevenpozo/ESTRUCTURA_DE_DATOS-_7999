#include "../ext/googletest/googletest./include/gtest/gtest.h"
#include "../include/validarFechaPago.h"
#include "../include/Egresos.h"
#include "../include/Validaciones.hp"
#include "../include/Empleado.h"
#include "../include/Ingresos.h"

TEST(Suma, Pruba){
    EXPECT_EQ(2, sum(1,1));
    EXPECT_EQ(5, sum(2,3));

}
TEST(Resta, Pruba){
    EXPECT_EQ(0, rest(1,1));
    EXPECT_EQ(1, rest(2,1));
}


TEST(Validacion, Pruba){
    EXPECT_EQ(1, Validacion::validarNumero("1"));
    EXPECT_EQ(0, Validacion::validarNumero("a"));
}
