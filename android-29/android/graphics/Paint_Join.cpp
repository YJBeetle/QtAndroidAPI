#include "./Paint_Join.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Paint_Join::BEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"BEVEL",
			"Landroid/graphics/Paint$Join;"
		);
	}
	QAndroidJniObject Paint_Join::MITER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"MITER",
			"Landroid/graphics/Paint$Join;"
		);
	}
	QAndroidJniObject Paint_Join::ROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"ROUND",
			"Landroid/graphics/Paint$Join;"
		);
	}
	
	Paint_Join::Paint_Join(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Paint_Join::valueOf(jstring arg0)
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

