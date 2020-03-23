#pragma once

#ifndef ANDROID_GRAPHICS_BITMAPFACTORY
#define ANDROID_GRAPHICS_BITMAPFACTORY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::util
{
	class TypedValue;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class BitmapFactory_Options;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}

namespace __jni_impl::android::graphics
{
	class BitmapFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject decodeResourceStream(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::util::TypedValue arg1, __jni_impl::java::io::InputStream arg2, __jni_impl::android::graphics::Rect arg3, __jni_impl::android::graphics::BitmapFactory_Options arg4);
		static QAndroidJniObject decodeResource(__jni_impl::android::content::res::Resources arg0, jint arg1);
		static QAndroidJniObject decodeResource(__jni_impl::android::content::res::Resources arg0, jint arg1, __jni_impl::android::graphics::BitmapFactory_Options arg2);
		static QAndroidJniObject decodeFileDescriptor(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::BitmapFactory_Options arg2);
		static QAndroidJniObject decodeFileDescriptor(__jni_impl::java::io::FileDescriptor arg0);
		static QAndroidJniObject decodeStream(__jni_impl::java::io::InputStream arg0);
		static QAndroidJniObject decodeStream(__jni_impl::java::io::InputStream arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::BitmapFactory_Options arg2);
		static QAndroidJniObject decodeByteArray(jbyteArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::BitmapFactory_Options arg3);
		static QAndroidJniObject decodeByteArray(jbyteArray arg0, jint arg1, jint arg2);
		static QAndroidJniObject decodeFile(jstring arg0, __jni_impl::android::graphics::BitmapFactory_Options arg1);
		static QAndroidJniObject decodeFile(jstring arg0);
	};
} // namespace __jni_impl::android::graphics

#include "Bitmap.hpp"
#include "../content/res/Resources.hpp"
#include "../util/TypedValue.hpp"
#include "../../java/io/InputStream.hpp"
#include "Rect.hpp"
#include "BitmapFactory_Options.hpp"
#include "../../java/io/FileDescriptor.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void BitmapFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BitmapFactory",
			"()V");
	}
	
	// Methods
	QAndroidJniObject BitmapFactory::decodeResourceStream(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::util::TypedValue arg1, __jni_impl::java::io::InputStream arg2, __jni_impl::android::graphics::Rect arg3, __jni_impl::android::graphics::BitmapFactory_Options arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeResourceStream",
			"(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	QAndroidJniObject BitmapFactory::decodeResource(__jni_impl::android::content::res::Resources arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeResource",
			"(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject BitmapFactory::decodeResource(__jni_impl::android::content::res::Resources arg0, jint arg1, __jni_impl::android::graphics::BitmapFactory_Options arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeResource",
			"(Landroid/content/res/Resources;ILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject BitmapFactory::decodeFileDescriptor(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::BitmapFactory_Options arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFileDescriptor",
			"(Ljava/io/FileDescriptor;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject BitmapFactory::decodeFileDescriptor(__jni_impl::java::io::FileDescriptor arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFileDescriptor",
			"(Ljava/io/FileDescriptor;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BitmapFactory::decodeStream(__jni_impl::java::io::InputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeStream",
			"(Ljava/io/InputStream;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BitmapFactory::decodeStream(__jni_impl::java::io::InputStream arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::BitmapFactory_Options arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeStream",
			"(Ljava/io/InputStream;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject BitmapFactory::decodeByteArray(jbyteArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::BitmapFactory_Options arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeByteArray",
			"([BIILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	QAndroidJniObject BitmapFactory::decodeByteArray(jbyteArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeByteArray",
			"([BII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject BitmapFactory::decodeFile(jstring arg0, __jni_impl::android::graphics::BitmapFactory_Options arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFile",
			"(Ljava/lang/String;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject BitmapFactory::decodeFile(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFile",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap;",
			arg0);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class BitmapFactory : public __jni_impl::android::graphics::BitmapFactory
	{
	public:
		BitmapFactory(QAndroidJniObject obj) { __thiz = obj; }
		BitmapFactory()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_BITMAPFACTORY

