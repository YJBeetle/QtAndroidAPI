#pragma once

#ifndef ANDROID_GRAPHICS_BITMAP_COMPRESSFORMAT
#define ANDROID_GRAPHICS_BITMAP_COMPRESSFORMAT

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Bitmap_CompressFormat : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject JPEG();
		static QAndroidJniObject PNG();
		static QAndroidJniObject WEBP();
		
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
	QAndroidJniObject Bitmap_CompressFormat::JPEG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"JPEG",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	QAndroidJniObject Bitmap_CompressFormat::PNG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"PNG",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	QAndroidJniObject Bitmap_CompressFormat::WEBP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"WEBP",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	
	// Constructors
	void Bitmap_CompressFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Bitmap$CompressFormat",
			"(V)V");
	}
	
	// Methods
	jarray Bitmap_CompressFormat::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap$CompressFormat",
			"values",
			"()[Landroid/graphics/Bitmap$CompressFormat;"
		).object<jarray>();
	}
	QAndroidJniObject Bitmap_CompressFormat::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap$CompressFormat",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap$CompressFormat;",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Bitmap_CompressFormat : public __jni_impl::android::graphics::Bitmap_CompressFormat
	{
	public:
		Bitmap_CompressFormat(QAndroidJniObject obj) { __thiz = obj; }
		Bitmap_CompressFormat()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_BITMAP_COMPRESSFORMAT

