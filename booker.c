/* Author: Mohammed Khalid Alnahdi
 * Email: mohammed.alnahdi1991@gmail.com
 * Copyright:
 * booker version 1.0.0, Copyright (C) 2022 Mohammed Alnahdi
 * comes with ABSOLITELY NO WARRANTY.
 * This is free software, and you are welcome to redistribute
 * it under certain conditions;
 */
#include<stdio.h>
#include<gtk/gtk.h>
#include"config.h"
static char tools[] = " &";
static void 
open_app_1(GtkWidget *Widget, gpointer data){
	char *command_shell = strcat(call_first_program, tools); 
	
	system(command_shell);

	gtk_main_quit();
}

static void 
open_app_2(GtkWidget *Widget, gpointer data){
	char *command_shell = strcat(call_second_program, tools); 
	
	system(command_shell);

	gtk_main_quit();
}

static void 
open_app_3(GtkWidget *Widget, gpointer data){
	char *command_shell = strcat(call_third_program, tools); 
	
	system(command_shell);

	gtk_main_quit();
}
static void 
open_app_4(GtkWidget *Widget, gpointer data){
	char *command_shell = strcat(call_fourth_program, tools); 
	
	system(command_shell);

	gtk_main_quit();
}
static void 
open_app_5(GtkWidget *Widget, gpointer data){
	char *command_shell = strcat(call_fifth_program, tools); 
	
	system(command_shell);

	gtk_main_quit();
}
static void 
open_app_6(GtkWidget *Widget, gpointer data){
	char *command_shell = strcat(call_sixth_program, tools); 
	
	system(command_shell);

	gtk_main_quit();
}
static void 
open_app_7(GtkWidget *Widget, gpointer data){
	char *command_shell = strcat(call_seventh_program, tools); 
	
	system(command_shell);

	gtk_main_quit();
}
static void 
open_app_8(GtkWidget *Widget, gpointer data){
	char *command_shell = strcat(call_eight_program, tools); 
	
	system(command_shell);

	gtk_main_quit();
}
static void 
open_app_9(GtkWidget *Widget, gpointer data){
	char *command_shell = strcat(call_nine_program, tools); 
	
	system(command_shell);

	gtk_main_quit();
}
int main(int argc, char *argv[])
{
	  GtkWidget *window;
	  GtkWidget *button1;
	  GtkWidget *button2;
	  GtkWidget *button3;
	  GtkWidget *button4;
	  GtkWidget *button5;
	  GtkWidget *button6;
	  GtkWidget *button7;
	  GtkWidget *button8;
	  GtkWidget *button9;
	  GtkWidget *fixed;

  gtk_init(&argc, &argv);
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "Booker");
  gtk_window_set_default_size(GTK_WINDOW(window), 300,100);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

  fixed = gtk_fixed_new();
  
  button1 = gtk_button_new_with_mnemonic(first_program_name);
  gtk_fixed_put(GTK_FIXED(fixed), button1, 2, 2);
 gtk_widget_set_size_request(button1, 100, 30);
  button2 = gtk_button_new_with_label(second_program_name);
  gtk_fixed_put(GTK_FIXED(fixed), button2, 120, 2);
  gtk_widget_set_size_request(button2, 100, 2);
  button3 = gtk_button_new_with_label(third_program_name);
  gtk_fixed_put(GTK_FIXED(fixed), button3, 230, 2);
  gtk_widget_set_size_request(button3, 100, 30);
  button4 = gtk_button_new_with_label(fourth_program_name);
  gtk_fixed_put(GTK_FIXED(fixed), button4, 2, 40);
  gtk_widget_set_size_request(button4, 100, 30);
  button5 = gtk_button_new_with_label(fifth_program_name);
  gtk_fixed_put(GTK_FIXED(fixed), button5, 120, 40);
  gtk_widget_set_size_request(button5, 100, 30);
  button6 = gtk_button_new_with_label(sixth_program_name);
  gtk_fixed_put(GTK_FIXED(fixed), button6, 230, 40);
  gtk_widget_set_size_request(button6, 100, 30);
  button7 = gtk_button_new_with_label(seventh_program_name);
  gtk_fixed_put(GTK_FIXED(fixed), button7, 2, 80);
  gtk_widget_set_size_request(button7, 100, 30);
  button8 = gtk_button_new_with_label(eight_program_name);
  gtk_fixed_put(GTK_FIXED(fixed), button8, 120, 80);
  gtk_widget_set_size_request(button8, 100, 30);
  button9 = gtk_button_new_with_label(nine_program_name);
  gtk_fixed_put(GTK_FIXED(fixed), button9, 230, 80);
  gtk_widget_set_size_request(button8, 100, 30);

  gtk_container_add(GTK_CONTAINER(window), fixed);
  gtk_container_add(GTK_CONTAINER(window), button1);
  gtk_container_add(GTK_CONTAINER(window), button2);
  gtk_container_add(GTK_CONTAINER(window), button3);
  gtk_container_add(GTK_CONTAINER(window), button4);
  gtk_container_add(GTK_CONTAINER(window), button5);
  gtk_container_add(GTK_CONTAINER(window), button7);
  gtk_container_add(GTK_CONTAINER(window), button8);
  gtk_container_add(GTK_CONTAINER(window), button9);
  gtk_widget_show_all(window);

  g_signal_connect(button1,"clicked",G_CALLBACK(open_app_1), NULL);
  g_signal_connect(button2,"clicked",G_CALLBACK(open_app_2), NULL);
  g_signal_connect(button3,"clicked",G_CALLBACK(open_app_3), NULL);
  g_signal_connect(button4,"clicked",G_CALLBACK(open_app_4), NULL);
  g_signal_connect(button5,"clicked",G_CALLBACK(open_app_5), NULL);
  g_signal_connect(button6,"clicked",G_CALLBACK(open_app_6), NULL);
  g_signal_connect(button7,"clicked",G_CALLBACK(open_app_7), NULL);
  g_signal_connect(button8,"clicked",G_CALLBACK(open_app_8), NULL);
  g_signal_connect(button9,"clicked",G_CALLBACK(open_app_9), NULL);

  g_signal_connect(window, "destroy",
      G_CALLBACK(gtk_main_quit), NULL);

  gtk_main();

  return 0;
}
