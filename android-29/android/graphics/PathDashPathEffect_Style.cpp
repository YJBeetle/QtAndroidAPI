#include "./PathDashPathEffect_Style.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject PathDashPathEffect_Style::MORPH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"MORPH",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	QAndroidJniObject PathDashPathEffect_Style::ROTATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"ROTATE",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	QAndroidJniObject PathDashPathEffect_Style::TRANSLATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"TRANSLATE",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	
	// QAndroidJniObject forward
	PathDashPathEffect_Style::PathDashPathEffect_Style(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject PathDashPathEffect_Style::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.PathDashPathEffect$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/PathDashPathEffect$Style;",
			arg0
		);
	}
	jarray PathDashPathEffect_Style::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.PathDashPathEffect$Style",
			"values",
			"()[Landroid/graphics/PathDashPathEffect$Style;"
		).object<jarray>();
	}
} // namespace android::graphics

