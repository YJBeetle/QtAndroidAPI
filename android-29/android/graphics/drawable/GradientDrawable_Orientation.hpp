#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_ORIENTATION
#define ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_ORIENTATION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics::drawable
{
	class GradientDrawable_Orientation : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject TOP_BOTTOM();
		static QAndroidJniObject TR_BL();
		static QAndroidJniObject RIGHT_LEFT();
		static QAndroidJniObject BR_TL();
		static QAndroidJniObject BOTTOM_TOP();
		static QAndroidJniObject BL_TR();
		static QAndroidJniObject LEFT_RIGHT();
		static QAndroidJniObject TL_BR();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::graphics::drawable


namespace __jni_impl::android::graphics::drawable
{
	// Fields
	QAndroidJniObject GradientDrawable_Orientation::TOP_BOTTOM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"TOP_BOTTOM",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;");
	}
	QAndroidJniObject GradientDrawable_Orientation::TR_BL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"TR_BL",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;");
	}
	QAndroidJniObject GradientDrawable_Orientation::RIGHT_LEFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"RIGHT_LEFT",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;");
	}
	QAndroidJniObject GradientDrawable_Orientation::BR_TL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"BR_TL",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;");
	}
	QAndroidJniObject GradientDrawable_Orientation::BOTTOM_TOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"BOTTOM_TOP",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;");
	}
	QAndroidJniObject GradientDrawable_Orientation::BL_TR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"BL_TR",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;");
	}
	QAndroidJniObject GradientDrawable_Orientation::LEFT_RIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"LEFT_RIGHT",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;");
	}
	QAndroidJniObject GradientDrawable_Orientation::TL_BR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"TL_BR",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;");
	}
	
	// Constructors
	void GradientDrawable_Orientation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject GradientDrawable_Orientation::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"values",
			"()[Landroid/graphics/drawable/GradientDrawable$Orientation;");
	}
	QAndroidJniObject GradientDrawable_Orientation::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/drawable/GradientDrawable$Orientation;",
			arg0);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class GradientDrawable_Orientation : public __jni_impl::android::graphics::drawable::GradientDrawable_Orientation
	{
	public:
		GradientDrawable_Orientation(QAndroidJniObject obj) { __thiz = obj; }
		GradientDrawable_Orientation()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_ORIENTATION

