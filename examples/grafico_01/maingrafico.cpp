// GUIE: https://home.cs.colorado.edu/~main/bgi/dev-c++/

#include "../../graphic/bgi/graphics.h"
#include "../../graphic/bgi/dibutil.h"
#include "../../graphic/bgi/winbgi.h"
#include "../../graphic/bgi/winbgim.h"
#include "../../graphic/bgi/winbgitypes.h"

#include "../../graphic/bgi/bgiout.cxx"
#include "../../graphic/bgi/dibutil.cxx"
#include "../../graphic/bgi/drawing.cxx"
#include "../../graphic/bgi/file.cxx"
#include "../../graphic/bgi/main.cxx"
#include "../../graphic/bgi/misc.cxx"
#include "../../graphic/bgi/mouse.cxx"
#include "../../graphic/bgi/palette.cxx"
#include "../../graphic/bgi/text.cxx"
#include "../../graphic/bgi/winbgi.cxx"
#include "../../graphic/bgi/winthread.cxx"


/*
#include <dibutil.h>
#include <winbgi.h>
#include <winbgim.h>
#include <winbgitype.h>
*/

using namespace std;

int main( ){
        initwindow( 700 , 700 , "MY First Program");
        circle(200, 200, 150);
        getch();
        return 0;
}