#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Paint_Style.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Paint_Style Paint_Style::FILL()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Style",
			"FILL",
			"Landroid/graphics/Paint$Style;"
		);
	}
	android::graphics::Paint_Style Paint_Style::FILL_AND_STROKE()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Style",
			"FILL_AND_STROKE",
			"Landroid/graphics/Paint$Style;"
		);
	}
	android::graphics::Paint_Style Paint_Style::STROKE()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Style",
			"STROKE",
			"Landroid/graphics/Paint$Style;"
		);
	}
	
	// QAndroidJniObject forward
	Paint_Style::Paint_Style(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Paint_Style Paint_Style::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Style;",
			arg0.object<jstring>()
		);
	}
	JArray Paint_Style::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Style",
			"values",
			"()[Landroid/graphics/Paint$Style;"
		);
	}
} // namespace android::graphics

