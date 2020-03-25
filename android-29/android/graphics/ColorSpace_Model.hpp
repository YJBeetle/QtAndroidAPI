#pragma once

#ifndef ANDROID_GRAPHICS_COLORSPACE_MODEL
#define ANDROID_GRAPHICS_COLORSPACE_MODEL

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class ColorSpace_Model : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject RGB();
		static QAndroidJniObject XYZ();
		static QAndroidJniObject LAB();
		static QAndroidJniObject CMYK();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
		jint getComponentCount();
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject ColorSpace_Model::RGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"RGB",
			"Landroid/graphics/ColorSpace$Model;");
	}
	QAndroidJniObject ColorSpace_Model::XYZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"XYZ",
			"Landroid/graphics/ColorSpace$Model;");
	}
	QAndroidJniObject ColorSpace_Model::LAB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"LAB",
			"Landroid/graphics/ColorSpace$Model;");
	}
	QAndroidJniObject ColorSpace_Model::CMYK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Model",
			"CMYK",
			"Landroid/graphics/ColorSpace$Model;");
	}
	
	// Constructors
	void ColorSpace_Model::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Model",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ColorSpace_Model::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Model",
			"values",
			"()[Landroid/graphics/ColorSpace$Model;");
	}
	QAndroidJniObject ColorSpace_Model::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Model",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Model;",
			arg0);
	}
	jint ColorSpace_Model::getComponentCount()
	{
		return __thiz.callMethod<jint>(
			"getComponentCount",
			"()I");
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ColorSpace_Model : public __jni_impl::android::graphics::ColorSpace_Model
	{
	public:
		ColorSpace_Model(QAndroidJniObject obj) { __thiz = obj; }
		ColorSpace_Model()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COLORSPACE_MODEL

