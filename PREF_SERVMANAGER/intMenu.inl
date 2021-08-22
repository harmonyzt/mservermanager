enum _:attributes
{
    dmg, speed, lifesteal, sl_leashstack, sl_leashstolen
};

enum _:classes
{
    none, sl, pg
};
new attribute[128][attributes];
new class[128][classes];

public class_change(id){
    new menu = menu_create( "\rServer Manager", "menu_handler" );
    menu_additem( menu, "\wChoose 1", "", 0 );
    menu_additem( menu, "\wChoose 2", "", 0 );
    menu_setprop( menu, MPROP_EXIT, MEXIT_ALL );
    menu_display( id, menu, 0 );
 }

 public menu_handler(id, menu, item)
 {
    switch(item)
    {
        case 0:
        {
         	menu_destroy(menu);
         	return PLUGIN_HANDLED;
        }
        case 1:
        {
        	menu_destroy(menu);
         	return PLUGIN_HANDLED;
        }
        case MENU_EXIT:
        {
        	menu_destroy(menu);
         	return PLUGIN_HANDLED;
        }
    }
	menu_destroy( menu );
    return PLUGIN_HANDLED;
 }