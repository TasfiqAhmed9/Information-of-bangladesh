#include<stdio.h>
#include<math.h>
void division_district (void);
main()
{
    printf("\t\tTasfiq Ahmed\n\t\tROLL: 19300003\n\t\tDEPARTMENT OF COMPUTER SCIENCE AND EINGINEERING\n\t\tRANADA PROSHAD SAHA UNIVERSITY\n===============================================================================\n\n");
    printf("'WELCOME TO BANGLADESH'\nThere are seven division in Bangladesh.They are:- \n");
    printf("1. DHAKA\n2. CHITTAGONG\n3. RAJSHAHI\n4. RANGPUR\n5. KHULNA\n6. BARISAL\n7. SHYLET\n");
    division_district();

}
void division_district (void)
{
    int number,dist_number;
    printf("For details, please inter the number of Division from 1 to 7:\n");
    again:
    scanf("%d",&number);
    if(number >7 || number <1)
    {
        printf("You have entered wrong number. please try again");
    }
    if(number == 1)
    {
        printf("\\nDHAKA DIVISION\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
        printf("\nDhaka division has established in 1829. The extension of Dhaka division is 31,199 square K.M. The population of Dhaka division is 4,93,21,688. There are seventeen districts in Dhaka vivision.\n");
        printf("\n\n\nplease inter the number from 1 to 17 for the district of Dhaka division. \n");
        scanf("%d",&dist_number);
        switch(dist_number)
    {
            case 1:
            printf("1. DHAKA DISTRICT\n---------------------\n");
            printf("\n\n\nDhaka is the capital of bangladesh. Dhaka district has established in 1772. The extension of Dhaka district is 1464 square K.M. It is a large populated district and it has many attractive place.\n");
            break;
        case 2:
            printf("\nGAZIPUR DISTRICT\n----------------------\n");
            printf("\n\n\nGazipur district has established in 1984. The extension of Gazipur district is 1800 square K.M. The rivers of Gazipur district are TURAG,BALU,BANAR and SHITALAKKHA.\n");
            break;
        case 3:
            printf("\n\nNARAYANGANJ DISTRICT\n-------------------\n");
            printf("\n\n\nIt is about three thousands years old. It has established in 1984. The extension of the district is 760 square K.M. It is the smallest district of Bangladesh.\n ");
            break;
        case 4:
            printf("\n\nNORSHINGDI DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 1141 square K.M. The rivers of the district are MEGHNA, ARIAL KHA.\n ");
            break;
        case 5:
            printf("\n\nMUNSHIGANJ DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 955 square K.M. The rivers of the district are DHOLESSHORI, PADMA and MEGHNA.\n");
            break;
        case 6:
            printf("\n\nMANIKGANJ DISTRICT\n-------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 1379 square K.M. The rivers of the district are MEGHNA, JAMUNA and DHOLESSHORI.\n ");
            break;
        case 7:

            printf("\n\nTANGAIL DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1969. The extension of the district is 3424 square K.M. The rivers of the district are  JAMUNA, DHOLESSHORI and BANGSHI.\n ");
            break;
        case 8:
            printf("\n\nMOYMENSHING DISTRICT\n--------------------\n");
            printf("\n\n\nIt has established in 1 May 1787. The extension of the district is 4363 square K.M. The rivers of the district are BANAR, MAHURI NODI.\n ");
            break;
        case 9:
            printf("\n\nJAMALPUR DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 26 December 1978. The extension of the district is 2032 square K.M. The rivers of the district are BANAR, PURATAN BRAMMAPUTRA.\n ");
            break;
        case 10:
            printf("\n\nSHERPUR DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 1364 square K.M. The rivers of the district are PURATAN BRAMMAPUTRA, BATAINODI, KANGSHO, MALIJHI NODI.\n ");
            break;
        case 11:
            printf("\n\nNETROKONA DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1 February 1984. The extension of the district is 2810 square K.M. The rivers of the district are NITAI, MAGRA, PATKURA, DHONU, KANGSHO, BAULAI NODI.\n ");
            break;
        case 12:
            printf("\n\nKISHORGANJ DISTRICT\n--------------------\n");
            printf("\n\n\nIt has established in 1 February 1984. The extension of the district is 2689 square K.M. The rivers of the district are BRAMMAPUTRO, MEGHNA, DHOLESSHORI, KALONI, DHONU, BAULAI NODI.\n ");
            break;
        case 13:
            printf("\n\nSHARIATPUR DISTRICT\n--------------------\n");
            printf("\n\n\nMy hometown is Shariatpur. It is a beautiful district in Bangladesh. It has established in 1984. The extension of the district is 1182 square K.M. The rivers of the district are PADMA, MEGHNA, PALONG.\n ");
            break;
        case 14:
            printf("\n\nMADARIPUR DISTRICT\n---------------------\n");
            printf("\n\n\nIt has established in 1 March 1984. The extension of the district is 1145 square K.M. The rivers of the district are PADMA, ARIAL KHA, PURATAN KUMAR.\n ");
            break;
        case 15:
            printf("\n\nGOPALGANJ DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 1490 square K.M. The rivers of the district are MADHUMATI, KUMAR NODI.\n ");
            break;
        case 16:
            printf("\n\nFARIDPUR DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1815. The extension of the district is 2073 square K.M. The rivers of the district are PADMA, MADHUMATI, KUMAR, ARIAL KHA NODI.\n ");
            break;
        case 17:
            printf("\n\nRAJBARI DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1 March 1984. The extension of the district is 1119 square K.M. The rivers of the district are PADMA, CHANDANA NODI.\n ");
            break;

        }
    }
    else if(number == 2)
    {
        printf("\n\nCHITTAGONG DIVISION\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n\n\nIn size Chittagong is the biggest division in Bangladesh. The extension of Chittagong division is 33,771 square K.M. The population of Chittagong division is 2,95,53,857. There are 11 districts in Chittagong division.\n");
        printf("\n\nplease inter the number from 1 to 11 for the district of Chittagong division. \n");
        scanf("%d",&dist_number);
        switch(dist_number)
        {
        case 1:
            printf("\n\nCHITTAGONG DISTRICT\n------------------------\n");
            printf("\n\n\nIt has established in 1666. The extension of the district is 5283 square K.M. The rivers of the district are KARNAFULI,HALDA,FENI.\n ");
            break;
        case 2:
            printf("\n\nCOXBAZAR DISTRICT\n---------------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 2492 square K.M. The rivers of the district are NAF,MATAMUHURI.\n ");
            break;
        case 3:
            printf("\n\nBRAMMANBARIA DISTRICT\n------------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 1927 square K.M. The rivers of the district are TITAS,SALDA,MEGHNA.\n ");
            break;
        case 4:
            printf("\n\nFENI DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 928 square K.M. The rivers of the district are FENI,MUHURI,SELONAI NODI.\n ");
            break;
        case 5:
            printf("\n\nNOAKHALI DISTRICT\n------------------\n");
            printf("\n\n\nIt has established 1821 in the name of VULUA and it named NOAKHALI in 1868. The extension of the district is 3601 square K.M. The rivers of the district are MEGHNA,DAKATIA,FENI.\n ");
            break;
         case 6:
            printf("\n\nLAKKHIPUR DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 1456 square K.M. The rivers of the district are MEGHNA,DAKATIA.\n ");
            break;
         case 7:
            printf("\n\nCHADPUR DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 1704 square K.M. The rivers of the district are MEGHNA,DAKATIA.\n ");
            break;
        case 8:
            printf("\n\nCUMILLA DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1960. The extension of the district is 3085 square K.M. The rivers of the district are MEGHNA,GOMATI,SALDA.\n ");
            break;
        case 9:
            printf("\n\nBANDARBAN DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 4479 square K.M. The rivers of the district are MEGHNA,DAKATIA.\n ");
            break;
        case 10:
            printf("\n\nRANGAMATI DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1983. The extension of the district is 6116 square K.M. The rivers of the district are SANKHA NODI,KASALONG,KARNAFULI.\n ");
            break;
        case 11:
            printf("\n\nKHAGRACHARI DISTRICT\n------------------\n");
            printf("\n\n\nIt has established in 1984. The extension of the district is 2700 square K.M. The rivers of the district are KARNAFULI,CHINGRI.\n ");
            break;
        }
    }
    else if(number == 3)
    {
        printf("\n\nRAJSHAHI DIVISION\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\nRajshahi division has established in 1772. The extension of Rajshahi division is 14691 square K.M. There are 8 districts in Rajshahi division.\n");
        printf("\n\nplease inter the number from 1 to 8 for the district of Rajshahi division. \n");
        scanf("%d",&dist_number);
        switch(dist_number)
        {
        case 1:
            printf("\nRAJSHAHI DISTRICT\n------------------------\n\n\n");
            printf("It has established in 1772. The extension of the district is 2407 square K.M. The rivers of the district are PADMA,MAHANANDA.\n ");
            break;
        case 2:
            printf("\nCHAPAINABABGANG DISTRICT\n------------------\n\n\n");
            printf("It has established in 1 March 1984. The extension of the district is 1703 square K.M. The rivers of the district are PADMA,MAHANANDA.\n ");
            break;
        case 3:
            printf("\n\nNAOGA DISTRICT\n------------------\n");
            printf("\n\nIt has established in 1984. The extension of the district is 3436 square K.M. The rivers of the district are JAMUNA,TULSI.\n ");
            break;
        case 4:
            printf("\n\nNATOR DISTRICT\n------------------\n");
            printf("\n\nIt has established in 1984. The extension of the district is 1896 square K.M. The rivers of the district are BORAL,TULSI.\n ");
            break;
        case 5:
            printf("\n\nPABNA DISTRICT\n------------------\n");
            printf("\n\nIt has established in 1832. The extension of the district is 2372 square K.M. The rivers of the district are ICHAMOTI,JAMUNA.\n ");
            break;
        case 6:
            printf("\n\nSHIRAJGONJ DISTRICT\n------------------\n");
            printf("\n\nIt has established in 1984. The extension of the district is 2498 square K.M. The rivers of the district are JAMUNA,BORAL.\n ");
            break;
        case 7:
            printf("\n\nBOGURA DISTRICT\n------------------\n");
            printf("\n\nIt has established in 1821. The extension of the district is 2920 square K.M. The rivers of the district are JAMUNA,KARTOA.\n ");
            break;
        case 8:
            printf("\n\nJOYPURHAT DISTRICT\n------------------\n");
            printf("\n\nIt has established in 1984. The extension of the district is 965 square K.M. The rivers of the district are JAMUNA,HARABATI.\n ");
            break;
        }
    }
    else if(number == 4)
    {
        printf("\n\nRANGPUR DIVISION\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n\nRangpur division has established in 25 January 2010. The extension of Rangpur division is 16317 square k.m. There are 8 districts in Rangpur division\n");
        printf("\n\nplease inter the number from 1 to 8 for the district of RANGPUR division. \n");
        scanf("%d",&dist_number);
        switch(dist_number)
        {
        case 1:
            printf("\n\nRANGPUR DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 16 December 1869. The extension of the district is 2308 square K.M. The rivers of the district are TISTA,GHAGHAT.\n ");
            break;
        case 2:
            printf("\n\nGAIBANDHA DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1984. The extension of the district is 2179 square K.M. The rivers of the district are TISTA,GHAGHAT.\n ");
            break;
        case 3:
            printf("\n\nKURIGRAM DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 23 January 1984. The extension of the district is 2308 square K.M. The rivers of the district are TISTA,BRAMMAPUTRO.\n ");
            break;
        case 4:
            printf("\n\nLALMONIRHAT DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1 February 1984. The extension of the district is 1241 square K.M. The rivers of the district are TISTA,DHORLA.\n ");
            break;
        case 5:
            printf("\n\nNILFAMARI DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1984. The extension of the district is 1581 square K.M. The rivers of the district are TISTA,GHAGHAT.\n ");
            break;
        case 6:
            printf("\n\nDINAJPUR DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1984. The extension of the district is 3438 square K.M. The rivers of the district are JAMUNA,DIPA.\n ");
            break;
        case 7:
            printf("\n\nTHAKURGAON DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1 February 1984. The extension of the district is 1810 square K.M. The rivers of the district are NAGOR,KULIC NODI.\n ");
            break;
        case 8:
            printf("\n\nPANCHAGAR DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1February 1984. The extension of the district is 1405 square K.M. The rivers of the district are JAMUNA,GHAGHAT.\n ");
            break;
        }
    }
    else if(number == 5)
    {
        printf("\n\nKHULNA DIVISION\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n\nThe extension of khulna division is 22274 square k.m. There are 10 districts in Khulna division\n");
        printf("\n\nplease inter the number from 1 to 10 for the district of KHULNA division. \n");
        scanf("%d",&dist_number);
        switch(dist_number)
        {
        case 1:
            printf("\n\nKHULNA DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1 June 1982. The extension of the district is 4394 square K.M. The rivers of the district are KAPOTAKKHO,RUPSHA.\n ");
            break;
        case 2:
            printf("\n\nSHATKHIRA DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 25 February 1984. The extension of the district is 3858 square K.M. The rivers of the district are KALINANDI.\n ");
            break;
        case 3:
            printf("\n\nBAGHERHAT DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 23 February 1984. The extension of the district is 3959 square K.M. The rivers of the district are MONGLA,MADHUMATI.\n ");
            break;
        case 4:
            printf("\n\nNARAIL DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1 March 1984. The extension of the district is 990 square K.M. The rivers of the district are KUMAR,CHITRA.\n ");
            break;
        case 5:
            printf("\n\nJOSORE DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1781. The extension of the district is 2567 square K.M. The rivers of the district are VOIROB,KAPOTAKKHO.\n ");
            break;
        case 6:
            printf("\n\nJHINAIDAHA DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 23 February 1984. The extension of the district is 1961 square K.M. The rivers of the district are CHITRA,VOIROB,KUMAR.\n ");
            break;
        case 7:
            printf("\n\nMAGURA DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1 March 1984. The extension of the district is 1049 square K.M. The rivers of the district are ICHAMOTI,BEGBOTI.\n ");
            break;
        case 8:
            printf("\n\nCHUADANGA DISTRICT\n------------------------\n");
            printf("It has established in 1984. The extension of the district is 1177 square K.M. The rivers of the district are NOBOGANGA,ICHAMOTI.\n ");
            break;
       case 9:
            printf("\n\nKUSTIA DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1947. The extension of the district is 1601 square K.M. The rivers of the district are KUMAR,GARAI.\n ");
            break;
        case 10:
            printf("\n\nMEHERPUR DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 24 February 1984. The extension of the district is 716 square K.M. The rivers of the district are ICHAMOTI.\n ");
            break;
        }
    }
    else if(number == 6)
    {
        printf("\n\nBARISAL DIVISION\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n\nBarisal division has established in 1 January 1993. The extension of Barisal division is 13297 square k.m. There are 6 districts in Barisal division\n");
        printf("\n\nplease inter the number from 1 to 6 for the district of BARISAL division. \n");
        scanf("%d",&dist_number);
        switch(dist_number)
        {
        case 1:
            printf("\n\nBARISAL DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1797. The extension of the district is 4394 square K.M. The rivers of the district are KIRTONKHOLA.\n ");
            break;
        case 2:
            printf("\n\nJHALOKATI DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1984. The extension of the district is 749 square K.M. The rivers of the district are BISHKHALI,GAZALIA.\n ");
            break;
        case 3:
            printf("\n\nPIROJPUR DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1984. The extension of the district is 1308 square K.M. The rivers of the district are DHALESSORI,MADHUMATI.\n ");
            break;
        case 4:
            printf("\n\nBARGUNA DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 28 February 1984. The extension of the district is 1831 square K.M. The rivers of the district are PAYRA,BISHKHALI.\n ");
            break;
        case 5:
            printf("\n\nPATUAKHALI DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1 January 1969. The extension of the district is 3221 square K.M. The rivers of the district are GOLACHIPA,TETULIA.\n ");
            break;
        case 6:
            printf("\n\nVOLA DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1984. The extension of the district is 3403 square K.M. The rivers of the district are MEGHNA,ILSHA,BOALIA.\n ");
            break;
        }
    }
    else if(number == 7)
    {
        printf("\n\nSHYLET DIVISION\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n\nShylet division has established in 1 Agaust 1995. The extension of Shylet division is 12596 square k.m. There are 4 districts in Shylet division\n");
        printf("\n\nplease inter the number from 1 to 4 for the district of SHYLLET division. \n");
        scanf("%d",&dist_number);
        switch(dist_number)
        {
        case 1:
            printf("\n\nSHYLET DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 3 January 1782. The extension of the district is 3490 square K.M. The rivers of the district are SURMA,SONAI.\n ");
            break;
        case 2:
            printf("\n\nMOULOVIBAZZAR DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 22 February 1984. The extension of the district is 2799 square K.M. The rivers of the district are DHALAI,MONU.\n ");
            break;
        case 3:
            printf("\n\nHOBIGONJ DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1 March 1984. The extension of the district is 2637 square K.M. The rivers of the district are GOPAL,SUTANG,MADHUMATI.\n ");
            break;
        case 4:
            printf("\n\nSUNAMGONJ DISTRICT\n------------------------\n");
            printf("\n\nIt has established in 1984. The extension of the district is 3670 square K.M. The rivers of the district are PURATON SURMA, BOLAI.\n ");
            break;
        }
    }
    printf("\n");
    printf("~~~~~~~~~~~~If you want to know another please enter any division number again:\n");
    goto again;
    getch();
}