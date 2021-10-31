#include "./PathDashPathEffect_Style.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::PathDashPathEffect_Style PathDashPathEffect_Style::MORPH()
	{
		return getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"MORPH",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	android::graphics::PathDashPathEffect_Style PathDashPathEffect_Style::ROTATE()
	{
		return getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"ROTATE",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	android::graphics::PathDashPathEffect_Style PathDashPathEffect_Style::TRANSLATE()
	{
		return getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"TRANSLATE",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	
	// QJniObject forward
	PathDashPathEffect_Style::PathDashPathEffect_Style(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::PathDashPathEffect_Style PathDashPathEffect_Style::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.PathDashPathEffect$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/PathDashPathEffect$Style;",
			arg0
		);
	}
	jarray PathDashPathEffect_Style::values()
	{
		return callStaticObjectMethod(
			"android.graphics.PathDashPathEffect$Style",
			"values",
			"()[Landroid/graphics/PathDashPathEffect$Style;"
		).object<jarray>();
	}
} // namespace android::graphics

