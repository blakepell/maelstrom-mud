#include <stdio.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <CUnit/Automated.h>
#include <CUnit/Console.h>
#include <CUnit/TestDB.h>
#include "../merc.h"

#define MAX_TEST_SUITES 1024
#define MAX_UNIT_TESTS  1024

/* globals */
CHAR_DATA *mock_supermob;

/* da main */
int main ( void );
int initialize_suite(void);

/* mock data */
void setup_mocks(void);
void reset_mocks(void);

/* test.act_info.c */
void test_check_blind(void);
void test_add_money(void);
void test_sub_money(void);
void test_spend_money(void);
void test_money_string(void);

/* test.act_wiz.c */
void test_do_doubleexp(void);