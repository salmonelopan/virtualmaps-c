

void raan (void);
void raas (void);
void rio_s (void);
void segunda_pagina (void);
void chon(void);
void boaco (void);
void mata(void);
void jino(void);
void segovia(void);
void madriz(void);
void esteli(void);
void chinan(void);
void leon(void);
void carazo(void);
void granada(void);
void masaya2 (void);
void Managua2 (void);
void rivas (void);
void flecha (void);
void fin(void);
void flecha (void) {
setcolor(WHITE);

line(567,69,568,66);
line(576,74,578,72);
line(582,83,585,82);
line(582,104,585,105);
line(576,114,578,116);
line(567,119,569,122);
line(546,119,545,122);
line(534,115,537,113);
line(529,106,532,104);
line(529,82,532,83);
line(535,73,537,75);
line(544,67,545,69);
rectangle(544,122,544,124);
rectangle(528,105,526,106);
rectangle(529,81,526,81);
rectangle(546,65,544,63);
rectangle(569,66,568,63);
rectangle(586,83,587,81);
rectangle(585,107,587,106);
rectangle(568,123,569,124);
line(545,88,569,100);
line(569,88,545,100);
line(551,81,563,106);
line(551,106,563,82);
line(538,75,575,112);
line(538,113,575,75);
line(520,94,593,94);
line(557,57,557,131);
circle(557,94,28);
circle(557,94,30);
line(551,81,557,57);
line(538,75,551,81);
line(545,88,538,75);
line(520,94,545,88);
line(545,100,520,94);
line(538,113,545,100);
line(551,106,538,113);
line(557,131,551,106);
line(563,106,557,131);
line(575,112,563,106);
line(569,100,575,112);
line(593,94,569,100);
line(569,88,593,94);
line(575,75,569,88);
line(563,82,575,75);
line(557,57,563,82);
settextstyle(4,0,3);
outtextxy(550,25,"N");
outtextxy(550,125,"S");
outtextxy(600,75,"E");
outtextxy(500,75,"O");
}

void raan(void)

   {

	
int contorno_raan[214] = {
100, 184,108, 174,111, 171,113, 171,113, 162,112, 160,114, 158,114, 150,126, 147,138, 142,145, 146,167, 111,169, 90,159, 85,155, 81,153, 80
,154, 78,154, 73,155, 70,155, 67,152, 68,152, 60,150, 60,149, 56,149, 53,149, 47,155, 44,158, 44,164, 38,169, 36,175, 36
,176, 42,177, 42,174, 47,181, 48,190, 52,198, 52,201, 56,203, 56,206, 57,213, 54,216, 49,220, 49,220, 51,220, 52,226, 52,226, 46
,230, 43,233, 47,241, 44,241, 40,245, 38,247, 41,258, 40,264, 38,278, 31,280, 31,291, 27,297, 20,305, 15,310, 14,317, 15,324, 15,333, 16
,337, 18,332, 21,324, 39,324, 50,335, 78,333, 92,326, 105,314, 118,308, 135,302, 154,297, 172,297, 186,300, 205
,301, 216,297, 219,289, 219,291, 217,289, 214,279, 207,278, 208,274, 209,275, 200,257, 195,241, 194,231, 196,216, 197,203, 199,187, 202,177, 203,172, 207
,162, 207,153, 207,152, 209,150, 209,142, 205,134, 207,125, 208,114, 198,110, 194,108, 194,102, 188,100, 184,100, 184};


segunda_pagina();
setfillstyle(1,YELLOW);
drawpoly(107,contorno_raan);
fillpoly(107,contorno_raan);
settextstyle(0,0,1);
setcolor(RED);
outtextxy(10,250,"LA REGION AUTONOMA DEL ATLANTICO NORTE, A VECES"); 
outtextxy(10,265,"ABREVIADA COMO RAAN,SU CAPITAL ES LA CIUDAD DE");
outtextxy(10,280,"BILWI, CABECERA DEL TERMINO MUNICIPAL DE PUERTO ");
outtextxy(10,295,"CABEZAS.ENTRE LOS SITIOS DE INTERES TURISTICO ");
outtextxy(10,310,"ENCONTRAMOS: BALNEARIOS COMO LA BELLA LAGUNA DE");
outtextxy(10,325,"PAHARA,LA COMUNIDAD DE HAOLUVER, RESERVAS");
outtextxy(10,340,"NATURALES COMO LOS CAYOS MISKITOS Y LA RESERVA");
outtextxy(10,355,"DE BIOSFERA DE BOSAWAS,ETC. LA POBLACI�N SE ");
outtextxy(10,370,"DISTRIBUYE DE LA SIGUIENTE FORMA: MISKITO,");
outtextxy(10,385,"MESTIZO,CREOLE, MAYAGNA. SE HABLA EL CREOLE,");
outtextxy(10,400,"INGLES, ESPA�OL Y MISKITO.");


}

/* void segunda pagina---------------*/
void segunda_pagina(){

setfillstyle(1,LIGHTBLUE);
bar(0,0,450,430);
setfillstyle(1,DARKGRAY);
bar(450,0,640,480);
setfillstyle(1,LIGHTGRAY);
bar(0,230,450,480);
setcolor(WHITE);
rectangle(0,0,450,230);
rectangle(450,0,640,480);
rectangle(0,230,450,480);
flecha();
setfillstyle(1,LIGHTGRAY);
bar(520,420,590,440); /*boton salir*/
setcolor(BLACK);
rectangle(520,420,590,440);/*boton salir*/
/*sombra boton salir*/
setcolor(WHITE);
line(521,421,589,421);
line(521,421,521,439);
line(522,421,522,439);
setcolor(DARKGRAY);
line(589,421,589,439);
line(588,421,588,439);
line(521,439,589,439);
setcolor(BLUE);
settextstyle(0,0,1);
outtextxy(532,428,"SALIR");
botony();
ret();

setcolor(15);
settextstyle(4,0,3);
setcolor(CYAN);
outtextxy(460,5,"Ver Imagen");/*vinculo*/

}


void raas (void){

int Contorno[258] = {53, 65,76, 67,86, 71,85, 77,88, 79,99, 85,105, 86,123, 110,137, 128,136, 139,162, 145,168, 147,163, 152
,172, 158,169, 161,169, 165,174, 171,171, 179,172, 192,179, 192,191, 197,202, 192,208, 208,217, 206,230, 210,238, 218,246, 222,251, 222,258, 221
,264, 221,266, 224,283, 221,287, 224,304, 224,306, 222,297, 215,295, 210,292, 204,289, 201,288, 197,293, 190,304, 182,305, 176,314, 171,322, 165
,322, 156,316, 148,305, 135,304, 151,300, 149,292, 147,292, 143,299, 135,297, 130,306, 121,308, 124,308, 126,313, 127,311, 112,311, 110,310, 107
,310, 105,312, 103,312, 99,312, 97,310, 96,308, 96,305, 98,301, 97,300, 97,299, 89,298, 86,291, 81,291, 79,302, 76,309, 74,316, 70
,316, 65,314, 62,311, 60,309, 58,309, 56,310, 51,312, 50,318, 50,321, 58,322, 64,322, 72,318, 74,314, 75,313, 84,317, 88,321, 93
,332, 92,339, 86,339, 81,339, 77,334, 73,329, 66,327, 26,322, 25,317, 28,303, 22,288, 19,272, 6,246, 8,238, 5,203, 7,197, 8
,189, 12,188, 12,161, 14,151, 15,141, 17,124, 18,113, 27,113, 29,108, 29,106, 28,100, 26,88, 28,80, 30,71, 30,63, 34,66, 41,60, 47,51, 50,53, 67,53, 65

};




segunda_pagina();
setcolor(BLACK);
setfillstyle(1,GREEN);
fillpoly(129,Contorno);
settextstyle(0,0,1);
setcolor(YELLOW);

outtextxy(10,250,"LA REGI�N AUTONOMA DEL ATLANTICO SUR, A VECES"); 
outtextxy(10,265,"ABREVIADA COMO RAAS, ES UNA REGION AUTONOMA");  
outtextxy(10,280,"DE NICARAGUA.SU POBLACI�N PLURICULTURAL Y "); 
outtextxy(10,295,"MULTILING�E, ES DESCENDIENTE DE PUEBLOS");  
outtextxy(10,310,"INDIGENAS, INMIGRANTES AFROACARIBE�OS"); 
outtextxy(10,325,"CONSTITUYENDOLA PRINCIPALMENTE MESTIZOS,"); 
outtextxy(10,340,"CREOLES MISKITOS, SUMUS , GAR�FUNAS Y RAMAS."); 
outtextxy(10,355,"LAS PRIMERAS COLONIAS INGLESAS SURGEN");  
outtextxy(10,370,"ESPECIALMENTE EN BLUEFIELDS Y CABO GRACIAS"); 
outtextxy(10,385,"A DIOS, COMPUESTAS DE UNOS POCOS BLANCOS,"); 
outtextxy(10,400,"INDIOS Y NEGROS EN SU MAYORIA."); 

}


void rio_s (void){
int Contorno[288] = {85, 46,96, 39,101, 36,104, 35,109, 35,113, 34,115, 30,117, 27,124, 21,131, 21,138, 19,143, 13,151, 11
,155, 4,187, 6,192, 8,193, 11,202, 11,204, 11,211, 16,211, 21,216, 27,214, 34,212, 37,222, 46,222, 52,214, 60,216, 67,215, 75
,219, 78,227, 78,231, 82,241, 86,244, 91,248, 95,252, 93,257, 93,260, 97,261, 101,259, 107,261, 111,266, 113,274, 110,282, 113,290, 117
,298, 123,299, 130,308, 134,319, 135,328, 138,332, 136,335, 140,338, 144,353, 140,360, 140,368, 136,370, 142,369, 145,370, 151,393, 149,401, 163
,410, 167,417, 172,419, 174,422, 178,425, 181,419, 183,424, 189,425, 192,423, 195,413, 193,403, 197,394, 197,390, 198,389, 202,381, 205,379, 209
,364, 209,353, 207,349, 203,340, 194,335, 198,325, 198,325, 199,322, 201,310, 196,298, 196,290, 190,294, 188,293, 182,290, 179,286, 177,276, 178
,269, 171,263, 167,263, 163,265, 163,260, 159,249, 162,245, 166,236, 162,230, 158,219, 156,208, 150,203, 150,190, 148,184, 143,129, 168,69, 150
,66, 142,70, 138,76, 139,79, 143,84, 143,87, 142,95, 143,102, 146,104, 145,109, 145,115, 149,121, 151,122, 148,130, 150,140, 150,147, 149
,157, 146,163, 138,162, 131,162, 119,164, 118,159, 114,155, 106,145, 102,145, 101,140, 101,142, 97,133, 93,132, 82,132, 81,122, 80,118, 74
,108, 66,99, 59,85, 46};



segunda_pagina();
setcolor(BLACK);
setfillstyle(1,LIGHTCYAN);
fillpoly(144,Contorno);
drawpoly(144,Contorno);
settextstyle(0,0,1);
setcolor(YELLOW);

outtextxy(10,250,"RIO SAN JUAN DE NICARAGUA ES UN DEPARTAMENTO");  
outtextxy(10,265,"DE NICARAGUA. SE CONSTITUYO EN 1957, DE"); 
outtextxy(10,280,"TERRITORIO DE CHONTALES Y ZELAYA.EL "); 
outtextxy(10,295,"DEPARTAMENTO TAMBIEN INCLUYE EL ARCHIPIELAGO"); 
outtextxy(10,310,"DE SOLENTINAME Y EL RIO SAN JUAN, DEL QUE "); 
outtextxy(10,325,"TOMA NOMBRE.EL 13 DE JUNIO DE 1949 SE DECLARA"); 
outtextxy(10,340,"LA CREACION DEL DEPARTAMENTO DE RIO SAN JUAN"); 
outtextxy(10,355,"OCUPA LA ESQUINA SURESTE DE NICARAGUA,");  
outtextxy(10,370,"LIMITANDO AL NORTE CON CHONTALES, AL SUR CON");  
outtextxy(10,385,"COSTA RICA, AL ESTE CON LA RAAS Y EL MAR"); 
outtextxy(10,400,"CARIBE, Y AL OESTE CON EL COCIBOLCA Y RIVAS."); 

}
void chon(void)
{
int contorno[164] = {100, 61,106, 66,112, 64,119, 64,124, 67,129, 72,137, 72,141, 72,148, 71,156, 67,165, 65,177, 63,185, 60
,190, 60,197, 51,208, 45,213, 49,215, 49,217, 44,224, 46,229, 46,231, 46,238, 42,238, 38,244, 34,247, 31,250, 29,247, 22,259, 11,269, 9,278, 15,279, 19,288, 31,292, 33,292, 43,292, 51,300, 61
,310, 69,312, 76,306, 82,314, 89,318, 97,324, 115,328, 129,336, 133,348, 138,359, 143,372, 159,355, 155,330, 155,309, 157,291, 164,276, 172
,258, 185,249, 190,239, 191,231, 199,221, 200,216, 189,206, 187,206, 179,192, 174,174, 169,170, 161,153, 151,142, 154,137, 154,120, 142,113, 135,109, 129,105, 122,87, 121,80, 122,76, 114,81, 104,86, 102,89, 102,89, 94,92, 88,94, 80,97, 66,100, 61};

segunda_pagina();
setcolor(BLACK);
setfillstyle(1,GREEN);
fillpoly(82,contorno);
drawpoly(82,contorno);
settextstyle(0,0,1);
setcolor(YELLOW);
outtextxy(10,250,"CHONTALES,DEPARTAMENTO DE NICARAGUA. SU");
outtextxy(10,265,"CABECERA ES LA CIUDAD DE JUIGALPA.NO EXISTE");
outtextxy(10,280,"UN REGISTRO OFICIAL SOBRE LA FUNDACION DEL");
outtextxy(10,295,"DEPARTAMENTO DE CHONTALES. LA CIUDAD DE ");
outtextxy(10,310,"JUIGALPA, PRESENTA UN REGISTRO HISTORICO DE");
outtextxy(10,325,"MUCHOS SIGLOS, Y AUNQUE ESTA POBLACI�N YA ");
outtextxy(10,340,"EXISTIA COMO UN ASENTAMIENTO INDIGENA.COMALAPA");
outtextxy(10,355,"ES UNO DE LOS PUEBLOS MAS ANTIGUO DE LA");
outtextxy(10,370,"REPUBLICA, ABORIGEN; NO SE HA LOGRADO");
outtextxy(10,385,"ENCONTRAR NINGUNA LEY RELACIONADA CON LA");
outtextxy(10,400,"CREACION DEL MUNICIPIO.");

}

void boaco(void)
{
int contorno[166] = {298, 5,308, 10,319, 22,321, 33,330, 39,331, 46,325, 52,321, 58,314, 76,306, 86,297, 96,291, 91
,272, 99,259, 117,247, 115,242, 118,230, 126,209, 126,202, 128,194, 125,187, 125,178, 119,175, 132,175, 153,175, 168,166, 188,167, 193,166, 197
,159, 191,142, 180,131, 173,133, 163,130, 148,134, 142,121, 137,108, 129,104, 125,104, 121,103, 116,106, 114,98, 108,92, 95,90, 80,94, 75
,100, 73,110, 66,111, 54,116, 54,131, 52,136, 52,150, 48,162, 48,166, 47,177, 43,185, 41,185, 38,192, 33,197, 33,203, 31,210, 34
,214, 28,222, 24,232, 30,236, 33,241, 32,245, 33,247, 35,252, 37,252, 40,255, 42,258, 42,261, 42,265, 44,263, 47,269, 47,274, 49
,278, 44,280, 42,282, 37,279, 30,288, 21,287, 13,298, 5};


segunda_pagina();
setcolor(BLACK);
setfillstyle(1,GREEN);
fillpoly(83,contorno);
drawpoly(83,contorno);
settextstyle(0,0,1);
setcolor(YELLOW);
outtextxy(10,250,"BOACO,CIUDAD DE NICARAGUA, CAPITAL");
outtextxy(10,265,"DEL DEPARTAMENTO DE BOACO, SE LE DENOMINA"); 
outtextxy(10,280,"LA CIUDAD DE DOS PISOS', POR LOS ACCIDENTES");
outtextxy(10,295,"GEOGRAFICOS QUE SE EXTIENDEN POR TODO EL");
outtextxy(10,310,"TERRITORIO DONDE SE UBICA LA CIUDAD,ESTA ");
outtextxy(10,325,"RODEADA DE MONTA�AS Y SE ENCUENTRA SITUADA");
outtextxy(10,340,"EN UNA MESETA, DESARROLLANDOSE LA PARTE ");
outtextxy(10,355,"NUEVA EN LAS LADERAS DE LA MESETA Y EN VALLES");
outtextxy(10,370,"EXISTENTES.EN IDIOMA NAHUATL, BOACO SIGNIFICA");
outtextxy(10,385,"�TIERRA DE ENCANTADORES�. EN SUMO SIGNIFICA"); 
outtextxy(10,400,"LUGAR DE LOS BOA, TRIBU AUTOCTONA DE LA ZONA.");


}
void mata(void)
{
int contorno[198] = {125, 210
,126, 207,133, 204,129, 201,135, 201,139, 199,144, 188,147, 185,154, 184,159, 182,162, 184,165, 184,173, 180,177, 178,188, 179,200, 175,198, 171
,203, 173,212, 165,219, 165,228, 163,231, 166,234, 163,241, 157,248, 157,251, 163,256, 161,268, 171,269, 177,272, 174,280, 182,286, 184,290, 183
,293, 177,293, 175,300, 177,296, 169,296, 164,302, 156,307, 152,302, 143,298, 138,289, 87,289, 83,298, 79,307, 72,307, 65,313, 52,298, 47
,289, 49,284, 51,274, 53,268, 52,261, 48,257, 42,250, 40,242, 36,232, 24,229, 18,221, 13,210, 9,195, 9,192, 16,187, 20,182, 29
,176, 38,173, 40,161, 45,160, 55,156, 57,151, 66,145, 73,135, 79,135, 89,121, 89,121, 93,113, 97,111, 91,103, 85,94, 85,88, 93
,92, 104,85, 106,69, 112,60, 120,60, 154,59, 164,59, 176,59, 184,65, 181,72, 189,79, 188,84, 197,90, 200,100, 200,106, 200,111, 204
,116, 204,125, 210};




segunda_pagina();
setfillstyle(1,GREEN);
setcolor(0);
fillpoly(99,contorno);
drawpoly(99,contorno);
settextstyle(0,0,1);
setcolor(YELLOW);
outtextxy(10,250,"LA CIUDAD DE MATAGALPA CONOCIDA COMO LA PERLA"); 
outtextxy(10,265,"DEL SEPTENTRION, DEBIDO A SUS CARACTERISTICAS");
outtextxy(10,280,"NATURALES Y TAMBIEN COMO LA CAPITAL DE LA");
outtextxy(10,295,"PRODUCCION,POR SU VARIADA ACTIVIDAD ");
outtextxy(10,310,"AGROPECUARIA Y COMERCIAL.LOS MATAGALPAS SE ");
outtextxy(10,325,"DESTACARON POR SER LOS PRIMEROS EN DAR COMBATE");
outtextxy(10,340,"FRONTAL A LOS ESPA�OLES CUANDO HERNANDEZ DE"); 
outtextxy(10,355,"CORDOBA Y HERNANDO DE SOTO Y SUS TROPAS");
outtextxy(10,370,"QUISIERON PENETRAR EN 1525 A SU TERRITORIO EN");
outtextxy(10,385,"JOANA MOSTEGA, A 13 LEGUAS AL NORESTE DE TELICA.");

}

void jino(void)
{
int contorno[186] = {306, 0,316, 1,312, 8,320, 13,318, 21,317, 25,320, 31,326, 36,345, 35,342, 52,337, 57,335, 66,340, 75
,337, 83,324, 92,304, 106,300, 111,284, 106,275, 110,260, 117,248, 117,243, 123,237, 125,239, 131,240, 138,242, 143,230, 151,224, 152,221, 162
,209, 165,202, 163,195, 170,187, 172,182, 173,178, 182,163, 191,150, 194,148, 202,129, 205,121, 202,109, 198,103, 189,97, 190,87, 181,89, 174
,84, 166,92, 154,104, 148,110, 146,128, 143,130, 139,139, 143,148, 143,152, 140,160, 139,162, 139,163, 128,163, 118,168, 113,168, 103,177, 100
,179, 93,178, 90,178, 82,178, 79,186, 78,190, 80,191, 74,199, 74,199, 73,211, 70,219, 70,223, 64,234, 64,245, 60,241, 56,244, 52
,252, 46,267, 44,278, 45,285, 39,282, 33,277, 30,273, 28,282, 21,280, 15,286, 13,286, 6,289, 1,294, 1,294, 4,302, 4,306, 0
};


segunda_pagina();
setfillstyle(1,GREEN);
setcolor(0);
fillpoly(93,contorno);
drawpoly(93,contorno);
settextstyle(0,0,1);
setcolor(YELLOW);
outtextxy(10,250,"JINOTEGA,CIUDAD DE NICARAGUA.EL PUEBLO INDIO");
outtextxy(10,265,"DE JINOTEGA EXISTIA DESDE ANTES DE LA LLEGADA");
outtextxy(10,280,"DE LOS ESPA�OLES. EL PRIMER EUROPEO EN LLEGAR");
outtextxy(10,295,"A SUS CERCANIAS FUE EL MISIONERO MERCEDARIO");
outtextxy(10,310,"FRAY L�ZARO DE GUIDO HACIA 1530.A FINALES DE");
outtextxy(10,325,"1920, EL DEPARTAMENTO FUE EL ESCENARIO DE LA");
outtextxy(10,340,"GUERRA ENTRE LAS TROPAS ESTADOUNIDENSES Y LAS");
outtextxy(10,355,"TROPAS ANTIIMPERIALISTAS DE AUGUSTO C.SANDINO,");
outtextxy(10,370,"GUERRA QUE SE LLAMO 'LA GUERRA DEL");
outtextxy(10,385,"BANDOLERISMO'.");

}

void segovia(void)
{
int Contorno[208] = {32, 148,39, 140,31, 131,39, 119,49, 118,62, 119,71, 120,86, 114,91, 116,99, 115,103, 108,103, 99,105, 102
,109, 104,117, 111,123, 120,135, 120,140, 114,147, 117,147, 123,155, 123,167, 123,168, 116,178, 121,178, 122,190, 110,190, 111,197, 99,197, 89
,207, 82,217, 69,223, 69,231, 56,236, 49,234, 43,240, 42,244, 41,251, 33,248, 26,255, 18,268, 12,272, 15,280, 12,286, 8,293, 8
,294, 15,289, 22,289, 28,292, 38,297, 41,308, 46,311, 52,319, 59,329, 61,326, 63,333, 66,336, 64,340, 61,350, 62,356, 65,361, 80
,361, 80,347, 93,340, 103,330, 118,333, 131,330, 144,326, 160,326, 181,333, 200,338, 212,332, 216,329, 225,319, 216,308, 209,298, 205,292, 209
,280, 215,270, 208,267, 200,265, 193,255, 185,247, 168,236, 166,237, 177,223, 176,204, 182,186, 185,179, 190,176, 190,164, 181,150, 178,139, 178
,114, 183,96, 186,82, 172,78, 163,74, 159,65, 160,49, 151,41, 148,33, 151,28, 149,32, 148};




segunda_pagina();
setfillstyle(1,GREEN);
setcolor(0);
fillpoly(104,Contorno);
drawpoly(104,Contorno);
settextstyle(0,0,1);
setcolor(YELLOW);
outtextxy(10,250,"NUEVA SEGOVIA,DEPARTAMENTO DE NICARAGUA CUYA");
outtextxy(10,265,"CABECERA ES LA CIUDAD DE OCOTAL.ES UNA TIERRA");
outtextxy(10,280,"DE PINARES CUYA ECONOMIA SE BASA EN LA");
outtextxy(10,295,"PRODUCCION DE GRANOS BASICOS (MAIZ, FRIJOL),");
outtextxy(10,310,"CAFE, TABACO, GANADERIA Y  MADERA.");
outtextxy(10,325,"SEGOVIAS SON LOS CINCO DEPARTAMENTOS DEL ");
outtextxy(10,340,"NORTE DE NICARAGUA:MATAGALPA, JINOTEGA,");
outtextxy(10,355,"ESTELI, MADRIZ Y NUEVA SEGOVIA ESTE ULTIMO");
outtextxy(10,370,"FUE CREADO EN 1858; COMPRENDIA LOS ACTUALES");
outtextxy(10,385,"DEPARTAMENTOS DE MADRIZ Y NORTE DE ESTELI,");
outtextxy(10,400,"Y LA COMARCA DE BOCAY (MATAGALPA-JINOTEGA).");

}

void madriz(void)
{
int contorno[172] = {95, 202,109, 192,118, 182,128, 176,134, 166,140, 151,151, 129,162, 109,167, 106,180, 106,208, 116,208, 118,221, 118,241, 112,260, 107,277, 105,289, 110,295, 120,297, 126,308, 113,310, 105
,319, 103,337, 103,342, 98,351, 96,356, 85,357, 78,361, 78,346, 65,345, 54,315, 28,307, 31,300, 31,296, 36,295, 48,291, 58,278, 50,268, 41,261, 39,254, 39,247, 42,240, 42,232, 45,219, 39,204, 39,187, 36,172, 36
,158, 43,157, 45,147, 41,146, 45,127, 36,130, 22,123, 16,108, 13,100, 12,87, 10,76, 13,81, 20,78, 28,74, 33,74, 41,74, 49,79, 48,84, 55,84, 68,84, 80,90, 85,92, 96
,93, 105,93, 113,88, 114,85, 120,88, 126,91, 132,95, 132,98, 134,99, 154,101, 157,98, 166,91, 170,85, 174,91, 177,96, 177,98, 188
,95, 202};


segunda_pagina();

setfillstyle(1,GREEN);
setcolor(0);
fillpoly(86,contorno);
drawpoly(86,contorno);
settextstyle(0,0,1);
setcolor(YELLOW);

outtextxy(10,250,"MADRIZ, DEPARTAMENTO DE NICARAGUA.SU CABECERA");
outtextxy(10,265,"ES SOMOTO. EN LAS DECADAS PASADAS SU ");
outtextxy(10,280,"DESARROLLO SE VIO FAVORECIDO POR EL PASO DE LA");
outtextxy(10,295,"CARRETERA PANAMERICANA HACIA HONDURAS.EL RIO");
outtextxy(10,310,"COCO CRUZA EL DEPARTAMENTO FORMANDO UNA AMPLIA");
outtextxy(10,325,"S Y RECIBIENDO EN ESTA PARTE LAS AGUAS DE LOS");
outtextxy(10,340,"AFLUENTES TAPACALI,INALI, YARI, ESTELI,SAN ");
outtextxy(10,355,"JUAN Y YALI.LA REGION FORMABA PARTE DEL ");
outtextxy(10,370,"EXTENSO DEPARTAMENTO DE NUEVA SEGOVIA, DEL ");
outtextxy(10,385,"QUE SE SEGREGO EN 1936  ADOPTANDO EL NOMBRE");
outtextxy(10,400,"DEL ILUSTRE PRESIDENTE JOSE MADRIZ. "); 

}

void esteli(void)
{
int contorno[148] = {150, 4,160, 16,167, 19,172, 21,187, 14,208, 15,234, 9,246, 9,253, 5,260, 15,259, 22
,249, 27,248, 34,240, 43,238, 49,240, 56,236, 61,237, 71,240, 71,242, 77,238, 84,244, 95,256, 96,259, 98,278, 117
,285, 118,296, 124,298, 129,293, 130,289, 130,287, 133,284, 139,290, 149,285, 155,270, 162,254, 162,243, 166,239, 172,233, 177,230, 190,223, 193
,214, 189,203, 188,186, 184,173, 180,169, 176,168, 171,164, 170,179, 160,176, 149,168, 148,158, 127,150, 114,152, 110,146, 102,136, 107,119, 106
,104, 115,95, 116,88, 120,65, 116,58, 112,52, 106,50, 99,69, 86,82, 75,86, 71,92, 65,105, 56
,108, 45,115, 27,130, 12,146, 7,150, 4};



segunda_pagina();

setfillstyle(1,DARKGRAY);
setcolor(0);
fillpoly(74,contorno);
drawpoly(74,contorno);
settextstyle(0,0,1);
setcolor(YELLOW);

outtextxy(10,250,"LA VILLA DE SAN ANTONIO DE PAVIA DE ESTELI ");
outtextxy(10,265,"O ESTELI,DEPARTAMENTO  DE NICARAGUA,LA CIUDAD");
outtextxy(10,280,"HA TENIDO TRES ASENTAMIENTOS, EN LA REGION");
outtextxy(10,295,"ARQUEOLOGICA LAS PINTADAS, A ORILLAS DEL RIO");
outtextxy(10,310,"AGUESGUESPALA Y EL VALLE DE MICHIGUISTE.A ");
outtextxy(10,325,"PRINCIPIOS DE 1654 CIUDAD ANTIGUA ERA OCUPADA");
outtextxy(10,340,"POR LOS PIRATAS INGLESES Y LOS ESPA�OLES SE");
outtextxy(10,355,"VIERON OBLIGADOS A DEJAR SUS TIERRAS SURGIENDO");
outtextxy(10,370,"ASI ESTELI,CONDEGA Y PUEBLO NUEVO.EL 8 DE");
outtextxy(10,385,"DICIEMBRE DE 1891 SE CREA EL DEPARTAMENTO");
outtextxy(10,400,"DE ESTELI.");

}

void chinan(void)
{
int contorno[172] = {64, 64,83, 68,98, 78,99, 82,100, 88,108, 92,126, 97,137, 95,139, 90,128, 87,157, 79,170, 79,185, 77
,207, 72,224, 77,238, 79,239, 72,255, 67,259, 60,264, 58,270, 54,268, 45,270, 40,268, 34,260, 25,268, 23,270, 21,271, 12,285, 5
,297, 3,306, 4,317, 10,337, 20,333, 29,331, 35,324, 36,327, 43,328, 49,331, 64,329, 70,344, 81,346, 95,351, 106,351, 114,333, 128
,316, 128,303, 135,291, 148,280, 161,275, 164,274, 181,263, 185,256, 190,241, 194,219, 196,213, 197,214, 202,223, 208,219, 211,210, 206,205, 202
,197, 199,187, 199,185, 197,188, 192,187, 186,172, 177,155, 168,139, 164,133, 155,124, 144,107, 137,106, 131,102, 124,98, 118,84, 111,91, 121
,90, 122,74, 115,51, 105,37, 96,29, 89,42, 84,53, 74,57, 74,64, 64};



segunda_pagina();
setfillstyle(1,LIGHTRED);
setcolor(0);
fillpoly(86,contorno);
drawpoly(86,contorno);
settextstyle(0,0,1);
setcolor(YELLOW);

outtextxy(10,250,"CHINANDEGA,CIUDAD Y MUNICIPIO DE NICARAGUA.");
outtextxy(10,265,"ADEMAS, ES LA CABECERA DEPARTAMENTAL DEL");
outtextxy(10,280,"DEPARTAMENTO DEL MISMO NOMBRE EN LA REGION"); 
outtextxy(10,295,"OCCIDENTAL DEL PACIFICO DE ESTE PAIS");
outtextxy(10,310,"CENTROAMERICANO,ES LA REGION DE MAYOR FUERZA");
outtextxy(10,325,"ECONOMICA DESPUES DE LA CAPITAL MANAGUA.ES");
outtextxy(10,340,"CONOCIDA COMO CIUDAD DE LAS NARANJAS.");
outtextxy(10,355,"ESTE DEPARTAMENTO ES FAMOSO POR LA FERTILIDAD"); 
outtextxy(10,370,"DE SUS SUELOS Y SU ALTO NIVEL DE PRODUCCION ");
outtextxy(10,385,"AGRICOLA.EN EL PASADO,LO CONVIRTIERON EN UNO");
outtextxy(10,400,"DE LOS DEPARTAMENTOS MAS RICOS DEL PAIS.");
}

void leon(void)
{
int contorno[184] = {96, 145,120, 144,127, 144,136, 141,144, 136,150, 133,154, 126,156, 117,165, 112,171, 107,187, 98,190, 88,199, 93
,206, 88,214, 87,213, 92,227, 84,232, 80,232, 65,225, 55,228, 51,216, 41,217, 39,211, 35,210, 28,210, 22,219, 21,243, 19,245, 17
,254, 20,280, 20,287, 28,295, 37,299, 41,305, 49,304, 53,301, 58,304, 62,311, 63,318, 70,329, 66,345, 70,345, 81,346, 94,348, 102
,346, 110,346, 115,338, 115,327, 117,320, 124,319, 134,323, 142,298, 149,289, 149,287, 156,276, 158,258, 156,254, 153,250, 155,250, 170,254, 172
,270, 180,281, 181,286, 186,277, 191,274, 195,282, 197,282, 204,273, 207,267, 212,258, 214,254, 217,247, 217,244, 217,235, 220,237, 226,238, 232
,228, 233,222, 225,216, 225,210, 218,206, 207,199, 203,199, 195,186, 190,177, 187,161, 184,165, 180,136, 170,120, 161,109, 156,96, 145};



segunda_pagina();
setfillstyle(1,GREEN);
setcolor(0);
fillpoly(86,contorno);
drawpoly(86,contorno);
settextstyle(0,0,1);
setcolor(YELLOW);

outtextxy(10,250,"LEON SANTIAGO DE LOS CABALLEROS,CIUDAD Y");
outtextxy(10,265,"MUNICIPIO DE NICARAGUA, FUNDADA EN 1524 POR");
outtextxy(10,280,"FRANCISCO HERN�NDEZ DE C�RDOBA. LEON HA SIDO"); 
outtextxy(10,295,"LA SEDE INTELECTUAL DE LA NACI�N, CON UNA");
outtextxy(10,310,"UNIVERSIDAD FUNDADA EN 1813. FUE CAPITAL DEL");
outtextxy(10,325,"ESTADO DE NICARAGUA, LA CAPITAL CAMBIO");
outtextxy(10,340,"FRECUENTEMENTE ENTRE LEON Y GRANADA ESTA");
outtextxy(10,355,"SITUACION SE RESOLVIO CUANDO SE ESCOGIO UNA");
outtextxy(10,370,"TERCERA CIUDAD, MANAGUA, COMO CAPITAL DEL ");
outtextxy(10,385,"PAIS EN 1858.");

}

void carazo(void)
{
int contorno[146] = {264, 189,274, 186,275, 180,275, 176,279, 174,283, 173,286, 164,294, 160,300, 158,306, 152,304, 148
,291, 136,296, 128,294, 119,293, 115,291, 111,292, 109,298, 108,306, 108,311, 108,317, 102,315, 102,311, 96,307, 90,303, 80,304, 73,307, 70,315, 63,322, 62
,324, 63,329, 60,335, 56,325, 54,317, 57,309, 55,302, 53,295, 52,288, 48,281, 47,278, 44,278, 40,260, 31,256, 31,252, 21,235, 16
,227, 17,219, 14,201, 8,185, 22,174, 31,168, 39,158, 46,150, 58,146, 64,140, 73,124, 77,111, 83,113, 92,115, 100,114, 102,106, 104
,119, 115,130, 118,150, 133,162, 142,176, 149,192, 156,207, 163,220, 168,233, 172,249, 179,262, 189,264, 189};


segunda_pagina();
setfillstyle(1,GREEN);
setcolor(0);
fillpoly(73,contorno);
drawpoly(73,contorno);
settextstyle(0,0,1);
setcolor(YELLOW);

outtextxy(10,250,"CARAZO,DEPARTAMENTO DE NICARAGUA. SU CABECERA");
outtextxy(10,265,"DEPARTAMENTAL ES JINOTEPE.ES UNOS DE LOS");
outtextxy(10,280,"DEPARTAMENTOS M�S PEQUE�OS EN CUANTO A ");
outtextxy(10,295,"TERRITORIO DEL PA�S,CONOCIDO POR SUS BELLAS ");
outtextxy(10,310,"PLAYAS Y FESTIVIDADES RELIGIOSAS QUE SE DAN");
outtextxy(10,325,"CASI TODO EL A�O, LAS MAS IMPORTANTES SON LAS");
outtextxy(10,340,"FIESTAS PATRONALES DE SAN SEBASTIAN.");
outtextxy(10,355,"EL 24 DE JULIO SE REALIZA EL TOPE DE LOS");
outtextxy(10,370,"SANTOS CON LAS IMAGENES DE SAN SEBASTIAN Y"); 
outtextxy(10,385,"SAN MARCOS,EN EL PARTICIPA EL BAILE DE LOS");
outtextxy(10,400,"DIABLITOS DE JINOTEPE.");

}

void granada(void)
{
int contorno[200] = {297, 55,302, 53,301, 45,288, 47,284, 36,291, 28,277, 24,259, 21,242, 29,222, 35,211, 38,210, 44,220, 51
,240, 50,247, 54,225, 60,225, 68,216, 77,217, 86,211, 99,200, 106,198, 111,211, 118,210, 125,200, 125,187, 126,177, 141,179, 145,177, 154
,172, 159,174, 166,176, 179,170, 183,170, 192,162, 192,158, 202,159, 210,162, 215,174, 232,180, 228,189, 230,196, 230,200, 225
,210, 220,211, 218,223, 212,239, 206,247, 204,250, 203,253, 201,251, 195,243, 191,246, 184,249, 183,257, 180,258, 173,258, 172,258, 165,254, 153
,249, 139,243, 131,241, 124,251, 129,253, 133,255, 136,256, 133,252, 120,244, 119,238, 119,236, 104,239, 87,249, 74,258, 67,272, 61,280, 61
,289, 57,297, 57,299, 55,302, 55,298, 55,298, 55,296, 55,296, 55,300, 55,300, 55,296, 54,295, 54,296, 54,296, 54,297, 54,298, 57,299, 58,300, 54,298, 54,299, 54,299, 54,298, 54
,298, 54,297, 54,297, 55};


segunda_pagina();
setfillstyle(1,GREEN);
setcolor(0);
fillpoly(100,contorno);
drawpoly(100,contorno);
settextstyle(0,0,1);
setcolor(YELLOW);

outtextxy(10,250,"GRANADA ,CIUDAD DE NICARAGUA,TAMBIEN ES");
outtextxy(10,265,"CONOCIDA COMO: LA GRAN SULTANA POR SU");
outtextxy(10,280,"APARIENCIA MORISCA Y ANDALUZA .FUE FUNDADA");
outtextxy(10,295,"EN 1524 POR FRANCISCO HERNANDEZ DE CORDOBA Y");
outtextxy(10,310,"UNA DE LAS PRIMERAS CIUDADES EUROPEAS EN");
outtextxy(10,325,"TERRITORIO CONTINENTAL AMERICANO,ESTA SITUADA");
outtextxy(10,340,"EN LA RIBERA DEL LAGO COCIBOLCA.LAS ISLETAS");
outtextxy(10,355,"DE GRANADA, EN EL LAGO COCIBOLCA, SE ");
outtextxy(10,370,"ENCUENTRAN A POCA DISTANCIA DE LA CIUDAD Y");
outtextxy(10,385,"FORMAN UN ARCHIPIELAGO DE MAS DE 360 PEQUE�AS");
outtextxy(10,400,"ISLAS DE TAMA�O VARIADO Y DE FACIL ACCESO.");

}

void masaya2 (void){


int Contorno[98] = {69, 111,96, 126,110, 124,136, 115,135, 111,139, 104,143, 92,141, 78,125, 73,120, 67,131, 60,137, 51,149, 34
,160, 30,168, 29,180, 27,185, 26,196, 12,220, 15,270, 7,282, 20,302, 31,317, 38,317, 51,310, 105,290, 114,277, 127,267, 144,267, 159
,262, 175,241, 193,232, 201,223, 215,207, 210,176, 207,163, 200,163, 191,168, 177,159, 167,144, 158,135, 158,114, 154,85, 150,65, 144,56, 144
,56, 138,65, 133,68, 128,69, 111};



segunda_pagina();
setfillstyle(1,GREEN);
fillpoly(49,Contorno);
setcolor(0);
drawpoly(49,Contorno);
settextstyle(0,0,1);
setcolor(YELLOW);

outtextxy(10,250,"MASAYA,CIUDAD Y MUNICIPIO PERTENECIENTE AL");
outtextxy(10,265,"DEPARTAMENTO DEL MISMO NOMBRE EN LA REPUBLICA");
outtextxy(10,280,"DE NICARAGUA,ES CONOCIDA COMO 'CIUDAD DE LAS ");
outtextxy(10,295,"FLORES' Y 'CUNA DEL FOLKLORE NICARAG�ENSE'.");
outtextxy(10,310,"PEDRARIAS D�VILA INICIA LA CONQUISTA DE ESTAS"); 
outtextxy(10,325,"TIERRAS EN 1524 Y CREA LAS PRIMERAS ");
outtextxy(10,340,"ENCOMIENDAS.MASAYA ES LA EXPRESI�N MESTIZA");
outtextxy(10,355,"EMINENTEMENTE DESCOLLANTE: EL ENCUENTRO DE ");
outtextxy(10,370,"FRANCISCO HERNANDEZ DE CORDOBA CON UN ");
outtextxy(10,385,"CACIQUE NICARAO PACIFICO.EL BAILE DE NEGRAS");
outtextxy(10,400,"ES UN BAILE T�PICO MASAYENSE..");
}

void Managua2 (void){


int contorno[204] = {81, 53,87, 57,91, 59,100, 60,106, 61,113, 60,131, 43,144, 40,146, 40,150, 39,150, 35,141, 32,141, 26
,145, 17,149, 13,155, 9,158, 7,161, 5,171, 4,187, 2,196, 5,203, 8,211, 16,220, 15,230, 15,245, 23,250, 23,258, 23,258, 33
,263, 46,278, 57,272, 69,285, 77,290, 78,302, 85,313, 88,301, 105,295, 103,287, 100,280, 98,272, 100,277, 102,269, 108,254, 110,246, 112
,237, 112,233, 114,211, 115,213, 126,194, 132,202, 145,201, 148,194, 154,186, 154,177, 152,174, 150,168, 155,165, 164,160, 168,153, 174,152, 182
,145, 187,143, 193,141, 199,135, 199,126, 202,126, 206,132, 217,119, 209,112, 202,107, 200,101, 182,90, 180,86, 178,80, 174,74, 164,69, 155
,60, 147,66, 145,62, 129,71, 128,80, 129,86, 130,90, 123,96, 121,98, 114,103, 113,110, 109,105, 103,101, 104,102, 97,111, 92,113, 90
,115, 87,106, 84,95, 79,83, 78,79, 67,76, 63,79, 58,80, 53
,81, 53};



segunda_pagina();
setfillstyle(1,GREEN);
fillpoly(102,contorno);

setcolor(0);
drawpoly(102,contorno);
settextstyle(0,0,1);
setcolor(YELLOW);

outtextxy(10,250,"MANAGUA FUNDADA CON EL NOMBRE DE LEAL VILLA");
outtextxy(10,265,"DE SANTIAGO DE MANAGUA ES LA ACTUAL CAPITAL");
outtextxy(10,280,"DE NICARAGUA,ES UNA DE LAS CAPITALES MAS ");
outtextxy(10,295,"CALIDAS DE CENTROAMERICA QUE POR SU UBICACION");
outtextxy(10,310,"EN EL TROPICO Y A NO MUCHA ALTURA F�CILMENTE");
outtextxy(10,325,"ALCANZA EN EL D�A LOS 35 �C Y POR LA NOCHE");
outtextxy(10,340,"24 �C. ANTIGUAMENTE, LA CAPITALIDAD LA");
outtextxy(10,355,"COMPART�AN LAS CIUDADES DE LE�N Y GRANADA.");
outtextxy(10,370,"EN 1856 MANAGUA FUE OCUPADA POR LAS TROPAS DEL");
outtextxy(10,385,"FILIBUSTERO ESTADOUNIDENSE WILLIAM WALKER.LA");
outtextxy(10,400,"CIUDAD FUE DESTRUIDA DOS VECES, EN 1931 Y 1972");
}

void rivas (void){

int Contornoa[188] = {
99, 69,102, 67,107, 59,108, 53,108, 48,124, 36,132, 38,136, 37,141, 37,143, 37,151, 37,158, 30,162, 25,167, 22,173, 19,177, 19
,197, 9,205, 4,209, 4,217, 3,215, 17,222, 38,224, 48,233, 66,243, 79,242, 88,246, 100,250, 110,251, 116,258, 126,269, 138,278, 146,287, 157,294, 159,296, 164,305, 169
,312, 170,312, 170,312, 166,322, 170,331, 175,336, 179,350, 190,360, 191,364, 198,374, 201,381, 202,390, 202,402, 207,409, 207,419, 208,420, 213
,427, 214,433, 214,438, 217,447, 226,456, 222,463, 224,469, 229,471, 241,471, 243,442, 232,422, 224,407, 214,378, 216,352, 203,343, 201,328, 186
,311, 179,302, 198,281, 233,277, 234,260, 227,251, 223,244, 220,242, 211,239, 207,233, 194,199, 158,194, 149,188, 149,175, 132,168, 136,161, 128
,158, 126,150, 123,153, 119,140, 109,136, 106,123, 92,108, 89,99, 78,100, 74,99, 69};


segunda_pagina();

setcolor(0);
setfillstyle(1,GREEN);
fillpoly(94,Contornoa);
drawpoly(94,Contornoa);
settextstyle(0,0,1);
setcolor(YELLOW);

outtextxy(10,250,"RIVAS,CIUDAD FUNDADA EN EL SIGLO XVIII");
outtextxy(10,265,"CON EL NOMBRE DE LA VILLA DE LA PURISIMA");
outtextxy(10,280,"CONCEPCION DE RIVAS DE NICARAGUA.LAS ");
outtextxy(10,295,"PRINCIPALES ACTIVIDADES ECONOMICAS SON LA");
outtextxy(10,310,"AGRICULTURA Y LA GANADERIA.LA PRODUCCION DE");
outtextxy(10,325,"CARNE ES UTILIZADA PARA ELCONSUMO LOCALY EN");
outtextxy(10,340,"MAYOR PORCENTAJE LA COMERCIALIZACI�N CON ");
outtextxy(10,355,"OTRAS REGIONES DEL PAIS.EN RIVAS TUVIERON ");
outtextxy(10,370,"LUGAR DOS C�LEBRES BATALLAS DE LA GUERRA"); 
outtextxy(10,385,"CENTROAMERICANA CONTRA LOS FILIBUSTEROS DE");
outtextxy(10,400,"WILLIAM WALKER.");

}


void fin(void)
{

	int i;

	setfillstyle(1,WHITE);
         bar(0,0,640,480);
		for(i=0;i<=100;i++){
		setcolor(BLUE);

			outtextxy(0+i,50,"ESTE PROGRAMA FUE CREADO Y ELABORADO POR:");
			setcolor(15);
			outtextxy(0+i,50,"ESTE PROGRAMA FUE CREADO Y ELABORADO POR:");
		   }
	        setcolor(BLUE);
		outtextxy(i-1,50,"ESTE PROGRAMA FUE CREADO Y ELABORADO POR:");
		for(i=0;i<=100;i++){
			setcolor(RED);

			outtextxy(30+i,80,"*PEDRO JOSE TELLERIA GUERRERO");
			setcolor(15);
			outtextxy(30+i,80,"*PEDRO JOSE TELLERIA GUERRERO");
		   }
	        setcolor(RED);
		outtextxy(30+(i-1),80,"*PEDRO JOSE TELLERIA GUERRERO");

		for(i=0;i<=100;i++){
			setcolor(RED);

			outtextxy(30+i,90,"*BILLI ALEXANDER RAMIREZ OBREGON");
			setcolor(15);
			outtextxy(30+i,90,"*BILLI ALEXANDER RAMIREZ OBREGON");
		   }
	        setcolor(RED);
		outtextxy(30+(i-1),90,"*BILLI ALEXANDER RAMIREZ OBREGON");

                for(i=0;i<=100;i++){
			setcolor(RED);

			outtextxy(30+i,100,"*KEVIN EUCLIDES RAMIREZ DE ARELLANO");
			setcolor(15);
			outtextxy(30+i,100,"*KEVIN EUCLIDES RAMIREZ DE ARELLANO");
		   }
	        setcolor(RED);
		outtextxy(30+(i-1),100,"*KEVIN EUCLIDES RAMIREZ DE ARELLANO");
           
                
                for(i=0;i<=100;i++){
			setcolor(RED);

			outtextxy(30+i,110,"*ERICK ESTEVEN BERMUDEZ COLEMAN");
			setcolor(15);
			outtextxy(30+i,110,"*ERICK ESTEVEN BERMUDEZ COLEMAN");
		   }
	        setcolor(RED);
		outtextxy(30+(i-1),110,"*ERICK ESTEVEN BERMUDEZ COLEMAN");
           
            for(i=0;i<=100;i++){
			setcolor(RED);

			outtextxy(30+i,170,"*PROFESORA:ING. JACQUELINE LOPEZ");
			setcolor(15);
			outtextxy(30+i,170,"*PROFESORA:ING. JACQUELINE LOPEZ");
		   }
	        setcolor(RED);
		outtextxy(30+(i-1),170,"*PROFESORA:ING. JACQUELINE LOPEZ");  

  for(i=0;i<=50;i++){
			setcolor(BLUE);

			outtextxy(30+i,220,"ESTUDIATES DE INGENIERIA EN COMPUTACION GENERACION 2012 1M2-CO");


			setcolor(15);
			outtextxy(30+i,220,"ESTUDIATES DE INGENIERIA EN COMPUTACION GENERACION 2012 1M2-CO");
		   }
	        setcolor(BLUE);
		outtextxy(30+(i-1),220,"ESTUDIATES DE INGENIERIA EN COMPUTACION GENERACION 2012 1M2-CO");  


}


 