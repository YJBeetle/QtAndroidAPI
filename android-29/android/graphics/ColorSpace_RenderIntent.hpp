#pragma once

#ifndef ANDROID_GRAPHICS_COLORSPACE_RENDERINTENT
#define ANDROID_GRAPHICS_COLORSPACE_RENDERINTENT

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class ColorSpace_RenderIntent : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject PERCEPTUAL();
		static QAndroidJniObject RELATIVE();
		static QAndroidJniObject SATURATION();
		static QAndroidJniObject ABSOLUTE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject ColorSpace_RenderIntent::PERCEPTUAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"PERCEPTUAL",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	QAndroidJniObject ColorSpace_RenderIntent::RELATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"RELATIVE",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	QAndroidJniObject ColorSpace_RenderIntent::SATURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"SATURATION",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	QAndroidJniObject ColorSpace_RenderIntent::ABSOLUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"ABSOLUTE",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	
	// Constructors
	void ColorSpace_RenderIntent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$RenderIntent",
			"(V)V");
	}
	
	// Methods
	jarray ColorSpace_RenderIntent::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$RenderIntent",
			"values",
			"()[Landroid/graphics/ColorSpace$RenderIntent;"
		).object<jarray>();
	}
	QAndroidJniObject ColorSpace_RenderIntent::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$RenderIntent",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$RenderIntent;",
			arg0
		);
	}
	QAndroidJniObject ColorSpace_RenderIntent::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$RenderIntent",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$RenderIntent;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ColorSpace_RenderIntent : public __jni_impl::android::graphics::ColorSpace_RenderIntent
	{
	public:
		ColorSpace_RenderIntent(QAndroidJniObject obj) { __thiz = obj; }
		ColorSpace_RenderIntent()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COLORSPACE_RENDERINTENT

