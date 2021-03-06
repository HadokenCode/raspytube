#include "fonts/DejaVuSans.inc"
#include "fonts/Topaz.inc"
#include "fonts/TopazPlus.inc"
#include "fonts/StarAvenu.inc"
#include "fonts/PriceDown.inc"
#include "fonts/PacFont.inc"
#include "fonts/Gyparody.inc"
#include "fonts/HydrogenWhiskey.inc"
#include "fonts/RobotoRegular.inc"
#include "fonts/Arial.inc"
#include "fonts/Teletext.inc"
#include "fonts/Arrows.inc"
#include <stdbool.h>
#include "../gfxlib.h"

tFontDef fontDefs[] = 
{
	{    
	     
	     "DejaVu Sans",
	     DejaVuSans_glyphPoints, 
	     DejaVuSans_glyphPointIndices,
             DejaVuSans_glyphInstructions, 
	     DejaVuSans_glyphInstructionIndices,
             DejaVuSans_glyphInstructionCounts, 
	     DejaVuSans_glyphAdvances,
	     DejaVuSans_characterMap,
	     DejaVuSans_glyphCount,
             NULL
	},
	{   
	    "Topaz",
	     Topaz_glyphPoints, 
	     Topaz_glyphPointIndices,
             Topaz_glyphInstructions, 
	     Topaz_glyphInstructionIndices,
             Topaz_glyphInstructionCounts, 
	     Topaz_glyphAdvances,
	     Topaz_characterMap,
	     Topaz_glyphCount,
             NULL
	},	
	{   
	    "Topaz Plus",
	     TopazPlus_glyphPoints, 
	     TopazPlus_glyphPointIndices,
             TopazPlus_glyphInstructions, 
	     TopazPlus_glyphInstructionIndices,
             TopazPlus_glyphInstructionCounts, 
	     TopazPlus_glyphAdvances,
	     TopazPlus_characterMap,
	     TopazPlus_glyphCount,
             NULL
	},
	{   
	    "Arial",
	     Arial_glyphPoints, 
	     Arial_glyphPointIndices,
             Arial_glyphInstructions, 
	     Arial_glyphInstructionIndices,
             Arial_glyphInstructionCounts, 
	     Arial_glyphAdvances,
	     Arial_characterMap,
	     Arial_glyphCount,
             NULL
	},
	{   
	    "Teletext",
	     Teletext_glyphPoints, 
	     Teletext_glyphPointIndices,
             Teletext_glyphInstructions, 
	     Teletext_glyphInstructionIndices,
             Teletext_glyphInstructionCounts, 
	     Teletext_glyphAdvances,
	     Teletext_characterMap,
	     Teletext_glyphCount,
             NULL
	},
	{   
	    "Roboto",
	     RobotoRegular_glyphPoints, 
	     RobotoRegular_glyphPointIndices,
             RobotoRegular_glyphInstructions, 
	     RobotoRegular_glyphInstructionIndices,
             RobotoRegular_glyphInstructionCounts, 
	     RobotoRegular_glyphAdvances,
	     RobotoRegular_characterMap,
	     RobotoRegular_glyphCount,
             NULL
	},
	{    
	    "Star Avenu",
	     StarAvenu_glyphPoints, 
	     StarAvenu_glyphPointIndices,
             StarAvenu_glyphInstructions, 
	     StarAvenu_glyphInstructionIndices,
             StarAvenu_glyphInstructionCounts, 
	     StarAvenu_glyphAdvances,
             StarAvenu_characterMap,
	     StarAvenu_glyphCount,		
             NULL
	},
	
	{
	     "PriceDown",
	     PriceDown_glyphPoints, 
	     PriceDown_glyphPointIndices,
             PriceDown_glyphInstructions, 
	     PriceDown_glyphInstructionIndices,
             PriceDown_glyphInstructionCounts, 
	     PriceDown_glyphAdvances,
	     PriceDown_characterMap,
	     PriceDown_glyphCount,
             NULL
	},
	{
	     "Gyparody",
	     Gyparody_glyphPoints, 
	     Gyparody_glyphPointIndices,
             Gyparody_glyphInstructions, 
	     Gyparody_glyphInstructionIndices,
             Gyparody_glyphInstructionCounts, 
	     Gyparody_glyphAdvances,
	     Gyparody_characterMap,
	     Gyparody_glyphCount,
             NULL
	},
	{
	    "Hydrogen Whiskey",
	     HydrogenWhiskey_glyphPoints, 
	     HydrogenWhiskey_glyphPointIndices,
             HydrogenWhiskey_glyphInstructions, 
	     HydrogenWhiskey_glyphInstructionIndices,
             HydrogenWhiskey_glyphInstructionCounts, 
	     HydrogenWhiskey_glyphAdvances,
	     HydrogenWhiskey_characterMap,
	     HydrogenWhiskey_glyphCount,
             NULL
	},
	{
	     "Pacman", PacFont_glyphPoints, 
	     PacFont_glyphPointIndices,
	     PacFont_glyphInstructions, 
             PacFont_glyphInstructionIndices,
	     PacFont_glyphInstructionCounts, 
             PacFont_glyphAdvances,
 	     PacFont_characterMap, 
	     PacFont_glyphCount, NULL
	},
	{
	     "Arrows", Arrows_glyphPoints, 
	     Arrows_glyphPointIndices,
	     Arrows_glyphInstructions, 
             Arrows_glyphInstructionIndices,
	     Arrows_glyphInstructionCounts, 
             Arrows_glyphAdvances,
	     Arrows_characterMap, 
	     Arrows_glyphCount, NULL
	}
};
	
unsigned int fontCount = (sizeof(fontDefs) / sizeof(tFontDef));
