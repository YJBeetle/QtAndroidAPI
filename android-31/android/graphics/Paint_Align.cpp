#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Paint_Align.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Paint_Align Paint_Align::CENTER()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Align",
			"CENTER",
			"Landroid/graphics/Paint$Align;"
		);
	}
	android::graphics::Paint_Align Paint_Align::LEFT()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Align",
			"LEFT",
			"Landroid/graphics/Paint$Align;"
		);
	}
	android::graphics::Paint_Align Paint_Align::RIGHT()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Align",
			"RIGHT",
			"Landroid/graphics/Paint$Align;"
		);
	}
	
	// QAndroidJniObject forward
	Paint_Align::Paint_Align(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Paint_Align Paint_Align::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Align;",
			arg0.object<jstring>()
		);
	}
	JArray Paint_Align::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"values",
			"()[Landroid/graphics/Paint$Align;"
		);
	}
} // namespace android::graphics

