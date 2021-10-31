#include "./Paint_Align.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Paint_Align Paint_Align::CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"CENTER",
			"Landroid/graphics/Paint$Align;"
		);
	}
	android::graphics::Paint_Align Paint_Align::LEFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"LEFT",
			"Landroid/graphics/Paint$Align;"
		);
	}
	android::graphics::Paint_Align Paint_Align::RIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"RIGHT",
			"Landroid/graphics/Paint$Align;"
		);
	}
	
	// QAndroidJniObject forward
	Paint_Align::Paint_Align(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Paint_Align Paint_Align::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Align;",
			arg0
		);
	}
	jarray Paint_Align::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"values",
			"()[Landroid/graphics/Paint$Align;"
		).object<jarray>();
	}
} // namespace android::graphics

