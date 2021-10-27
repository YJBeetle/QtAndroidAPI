#include "./Paint_Align.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Paint_Align::CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"CENTER",
			"Landroid/graphics/Paint$Align;"
		);
	}
	QAndroidJniObject Paint_Align::LEFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"LEFT",
			"Landroid/graphics/Paint$Align;"
		);
	}
	QAndroidJniObject Paint_Align::RIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"RIGHT",
			"Landroid/graphics/Paint$Align;"
		);
	}
	
	Paint_Align::Paint_Align(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Paint_Align::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Align;",
			arg0
		);
	}
	QAndroidJniObject Paint_Align::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Align;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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

