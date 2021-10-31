#include "./Paint_Cap.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Paint_Cap::BUTT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Cap",
			"BUTT",
			"Landroid/graphics/Paint$Cap;"
		);
	}
	QAndroidJniObject Paint_Cap::ROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Cap",
			"ROUND",
			"Landroid/graphics/Paint$Cap;"
		);
	}
	QAndroidJniObject Paint_Cap::SQUARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Cap",
			"SQUARE",
			"Landroid/graphics/Paint$Cap;"
		);
	}
	
	Paint_Cap::Paint_Cap(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Paint_Cap::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Cap",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Cap;",
			arg0
		);
	}
	jarray Paint_Cap::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Cap",
			"values",
			"()[Landroid/graphics/Paint$Cap;"
		).object<jarray>();
	}
} // namespace android::graphics

