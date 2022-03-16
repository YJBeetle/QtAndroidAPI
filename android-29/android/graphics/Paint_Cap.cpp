#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Paint_Cap.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Paint_Cap Paint_Cap::BUTT()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Cap",
			"BUTT",
			"Landroid/graphics/Paint$Cap;"
		);
	}
	android::graphics::Paint_Cap Paint_Cap::ROUND()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Cap",
			"ROUND",
			"Landroid/graphics/Paint$Cap;"
		);
	}
	android::graphics::Paint_Cap Paint_Cap::SQUARE()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Cap",
			"SQUARE",
			"Landroid/graphics/Paint$Cap;"
		);
	}
	
	// Constructors
	
	// Methods
	android::graphics::Paint_Cap Paint_Cap::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Cap",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Cap;",
			arg0.object<jstring>()
		);
	}
	JArray Paint_Cap::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Cap",
			"values",
			"()[Landroid/graphics/Paint$Cap;"
		);
	}
} // namespace android::graphics

