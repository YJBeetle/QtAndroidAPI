#include "./Paint_Join.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Paint_Join Paint_Join::BEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"BEVEL",
			"Landroid/graphics/Paint$Join;"
		);
	}
	android::graphics::Paint_Join Paint_Join::MITER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"MITER",
			"Landroid/graphics/Paint$Join;"
		);
	}
	android::graphics::Paint_Join Paint_Join::ROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"ROUND",
			"Landroid/graphics/Paint$Join;"
		);
	}
	
	// QAndroidJniObject forward
	Paint_Join::Paint_Join(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Paint_Join Paint_Join::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Join",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Join;",
			arg0
		);
	}
	jarray Paint_Join::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Join",
			"values",
			"()[Landroid/graphics/Paint$Join;"
		).object<jarray>();
	}
} // namespace android::graphics

