#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
int main(int argc, char *argv[]) {

  GtkWidget *window;

  gtk_init(&argc, &argv);

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_widget_show(window);
  
  g_signal_connect(window, "destroy",
      G_CALLBACK(gtk_main_quit), NULL);  

  gtk_main();
  printf("bla,just a change\n");

  return 0;
}
