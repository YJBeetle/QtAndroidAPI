#include "../content/res/Resources.hpp"
#include "./Bitmap.hpp"
#include "./BitmapFactory_Options.hpp"
#include "./Rect.hpp"
#include "../util/TypedValue.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "./BitmapFactory.hpp"

namespace android::graphics
{
	// Fields
	
	BitmapFactory::BitmapFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BitmapFactory::BitmapFactory()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BitmapFactory",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject BitmapFactory::decodeByteArray(jbyteArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeByteArray",
			"([BII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject BitmapFactory::decodeByteArray(jbyteArray arg0, jint arg1, jint arg2, android::graphics::BitmapFactory_Options arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeByteArray",
			"([BIILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject BitmapFactory::decodeFile(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFile",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	QAndroidJniObject BitmapFactory::decodeFile(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFile",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject BitmapFactory::decodeFile(jstring arg0, android::graphics::BitmapFactory_Options arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFile",
			"(Ljava/lang/String;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BitmapFactory::decodeFile(const QString &arg0, android::graphics::BitmapFactory_Options arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFile",
			"(Ljava/lang/String;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BitmapFactory::decodeFileDescriptor(java::io::FileDescriptor arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFileDescriptor",
			"(Ljava/io/FileDescriptor;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BitmapFactory::decodeFileDescriptor(java::io::FileDescriptor arg0, android::graphics::Rect arg1, android::graphics::BitmapFactory_Options arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFileDescriptor",
			"(Ljava/io/FileDescriptor;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject BitmapFactory::decodeResource(android::content::res::Resources arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeResource",
			"(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject BitmapFactory::decodeResource(android::content::res::Resources arg0, jint arg1, android::graphics::BitmapFactory_Options arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeResource",
			"(Landroid/content/res/Resources;ILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject BitmapFactory::decodeResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, android::graphics::Rect arg3, android::graphics::BitmapFactory_Options arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeResourceStream",
			"(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject BitmapFactory::decodeStream(java::io::InputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeStream",
			"(Ljava/io/InputStream;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BitmapFactory::decodeStream(java::io::InputStream arg0, android::graphics::Rect arg1, android::graphics::BitmapFactory_Options arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeStream",
			"(Ljava/io/InputStream;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::graphics

