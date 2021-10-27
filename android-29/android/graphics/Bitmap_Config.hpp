#pragma once

#ifndef ANDROID_GRAPHICS_BITMAP_CONFIG
#define ANDROID_GRAPHICS_BITMAP_CONFIG

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Bitmap_Config : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALPHA_8();
		static QAndroidJniObject ARGB_4444();
		static QAndroidJniObject ARGB_8888();
		static QAndroidJniObject HARDWARE();
		static QAndroidJniObject RGBA_F16();
		static QAndroidJniObject RGB_565();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject Bitmap_Config::ALPHA_8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ALPHA_8",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject Bitmap_Config::ARGB_4444()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ARGB_4444",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject Bitmap_Config::ARGB_8888()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ARGB_8888",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject Bitmap_Config::HARDWARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"HARDWARE",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject Bitmap_Config::RGBA_F16()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"RGBA_F16",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject Bitmap_Config::RGB_565()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"RGB_565",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	
	// Constructors
	void Bitmap_Config::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Bitmap$Config",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Bitmap_Config::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap$Config",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap$Config;",
			arg0
		);
	}
	QAndroidJniObject Bitmap_Config::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap$Config",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap$Config;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Bitmap_Config::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap$Config",
			"values",
			"()[Landroid/graphics/Bitmap$Config;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Bitmap_Config : public __jni_impl::android::graphics::Bitmap_Config
	{
	public:
		Bitmap_Config(QAndroidJniObject obj) { __thiz = obj; }
		Bitmap_Config()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_BITMAP_CONFIG

