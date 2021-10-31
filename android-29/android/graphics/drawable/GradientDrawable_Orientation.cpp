#include "./GradientDrawable_Orientation.hpp"

namespace android::graphics::drawable
{
	// Fields
	QAndroidJniObject GradientDrawable_Orientation::BL_TR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"BL_TR",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	QAndroidJniObject GradientDrawable_Orientation::BOTTOM_TOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"BOTTOM_TOP",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	QAndroidJniObject GradientDrawable_Orientation::BR_TL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"BR_TL",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	QAndroidJniObject GradientDrawable_Orientation::LEFT_RIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"LEFT_RIGHT",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	QAndroidJniObject GradientDrawable_Orientation::RIGHT_LEFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"RIGHT_LEFT",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	QAndroidJniObject GradientDrawable_Orientation::TL_BR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"TL_BR",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	QAndroidJniObject GradientDrawable_Orientation::TOP_BOTTOM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"TOP_BOTTOM",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	QAndroidJniObject GradientDrawable_Orientation::TR_BL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"TR_BL",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	
	// QAndroidJniObject forward
	GradientDrawable_Orientation::GradientDrawable_Orientation(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject GradientDrawable_Orientation::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/drawable/GradientDrawable$Orientation;",
			arg0
		);
	}
	jarray GradientDrawable_Orientation::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"values",
			"()[Landroid/graphics/drawable/GradientDrawable$Orientation;"
		).object<jarray>();
	}
} // namespace android::graphics::drawable

