#pragma once

#ifndef ANDROID_GRAPHICS_COLORSPACE_NAMED
#define ANDROID_GRAPHICS_COLORSPACE_NAMED

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class ColorSpace_Named : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject SRGB();
		static QAndroidJniObject LINEAR_SRGB();
		static QAndroidJniObject EXTENDED_SRGB();
		static QAndroidJniObject LINEAR_EXTENDED_SRGB();
		static QAndroidJniObject BT709();
		static QAndroidJniObject BT2020();
		static QAndroidJniObject DCI_P3();
		static QAndroidJniObject DISPLAY_P3();
		static QAndroidJniObject NTSC_1953();
		static QAndroidJniObject SMPTE_C();
		static QAndroidJniObject ADOBE_RGB();
		static QAndroidJniObject PRO_PHOTO_RGB();
		static QAndroidJniObject ACES();
		static QAndroidJniObject ACESCG();
		static QAndroidJniObject CIE_XYZ();
		static QAndroidJniObject CIE_LAB();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject ColorSpace_Named::SRGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::LINEAR_SRGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"LINEAR_SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::EXTENDED_SRGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"EXTENDED_SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::LINEAR_EXTENDED_SRGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"LINEAR_EXTENDED_SRGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::BT709()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"BT709",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::BT2020()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"BT2020",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::DCI_P3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"DCI_P3",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::DISPLAY_P3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"DISPLAY_P3",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::NTSC_1953()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"NTSC_1953",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::SMPTE_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"SMPTE_C",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::ADOBE_RGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"ADOBE_RGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::PRO_PHOTO_RGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"PRO_PHOTO_RGB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::ACES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"ACES",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::ACESCG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"ACESCG",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::CIE_XYZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"CIE_XYZ",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	QAndroidJniObject ColorSpace_Named::CIE_LAB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$Named",
			"CIE_LAB",
			"Landroid/graphics/ColorSpace$Named;"
		);
	}
	
	// Constructors
	void ColorSpace_Named::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Named",
			"(V)V");
	}
	
	// Methods
	jarray ColorSpace_Named::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Named",
			"values",
			"()[Landroid/graphics/ColorSpace$Named;"
		).object<jarray>();
	}
	QAndroidJniObject ColorSpace_Named::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$Named",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$Named;",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ColorSpace_Named : public __jni_impl::android::graphics::ColorSpace_Named
	{
	public:
		ColorSpace_Named(QAndroidJniObject obj) { __thiz = obj; }
		ColorSpace_Named()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COLORSPACE_NAMED

