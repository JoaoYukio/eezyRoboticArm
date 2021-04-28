# eezyRoboticArm
Um braço robótico com 3 graus de liberdade usando três motores de passo simples, controlados via WiFi usando Blynk.

# Créditos
Esse [braço robótico](https://www.thingiverse.com/thing:2838859) foi feito usando uma impressora 3d e filamentos PLA branco e laranja, as juntas foram lubrificadas com graxa para corrente e ligadas com parafusos.

Os [motores de passo](https://www.google.com/search?q=28byj-48&rlz=1C1CHZL_pt-BRBR752BR752&sxsrf=ALeKk02jGt79GIGxNbMXJ6-rKToEl2Rurw%3A1619569600855&ei=wKuIYK_UM4mz5OUP4OOOgAc&oq=28byj-48&gs_lcp=Cgdnd3Mtd2l6EAMyBAgjECcyBAgjECcyBggjECcQEzICCAAyAggAMgIIADICCAAyBQgAEMsBMgIIADICCAA6BwgjELADECc6BwgAEEcQsAM6BwgAELADEENQhAtYiQxgpw1oAXACeACAAYABiAHmApIBAzAuM5gBAKABAaoBB2d3cy13aXrIAQrAAQE&sclient=gws-wiz&ved=0ahUKEwivtP311p_wAhWJGbkGHeCxA3AQ4dUDCA4&uact=5) são bem baratos e simples de serem usados, eles consomem uma quantidade considerável de corrente( 500mA por motor), por isso foi usada uma fonte de 9V com capacidade para até 2A, pode-se usar uma fonte de 5V com capacidade de 2A evitando dissipação desnecessária de energia pelo motor.

Foi usada a biblioteca [TinyStepper](https://github.com/jasonacox/TinyStepper) usando 1/2 passo e desta forma aumentando o torque e a precisão dos motores. 

Existem dois códigos que foram usados para testar o braço, um usando um Arduino Nano para testar se as juntas estavam lubrificadas o suficiente e se algum ajuste era necessário. O outro código foi feito para um Esp32 e usa o app Blynk para controlar a posição dos motores( ainda em desenvolvimento).
