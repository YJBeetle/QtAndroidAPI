#pragma once

#ifndef ANDROID_GRAPHICS_COLORSPACE_ADAPTATION
#define ANDROID_GRAPHICS_COLORSPACE_ADAPTATION

#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class ColorSpace_Adaptation : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BRADFORD();
		static QAndroidJniObject VON_KRIES();
		static QAndroidJniObject CIECAT02();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject ColorSpace_Adaptation::BRADFORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"BRADFORD",
			"Landroid/graphics/ColorSpace$Adaptation;");
	}
	QAndroidJniObject ColorSpace_Adaptation::VON_KRIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"VON_KRIES",
			"Landroid/graphics/ColorSpace$Adaptation;");
	}
	QAndroidJniObject ColorSpace_Adaptation::CIECAT02()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Adaptation",
			"CIECAT02",
			"Landroid/graphics/ColorSpace$Adaptation;");
	}
	
	// Constructors
	void ColorSpace_Adaptation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Adaptation",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ColorSpace_Adaptation::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Adaptation",
			"values",
			"()[Landroid/graphics/ColorSpace$Adaptation;");
	}
	QAndroidJniObject ColorSpace_Adaptation::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Adaptation",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Adaptation;",
			arg0);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ColorSpace_Adaptation : public __jni_impl::android::graphics::ColorSpace_Adaptation
	{
	public:
		ColorSpace_Adaptation(QAndroidJniObject obj) { __thiz = obj; }
		ColorSpace_Adaptation()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COLORSPACE_ADAPTATION

