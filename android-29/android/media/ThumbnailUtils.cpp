#include "../graphics/Bitmap.hpp"
#include "../os/CancellationSignal.hpp"
#include "../util/Size.hpp"
#include "../../java/io/File.hpp"
#include "./ThumbnailUtils.hpp"

namespace android::media
{
	// Fields
	jint ThumbnailUtils::OPTIONS_RECYCLE_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ThumbnailUtils",
			"OPTIONS_RECYCLE_INPUT"
		);
	}
	
	ThumbnailUtils::ThumbnailUtils(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ThumbnailUtils::ThumbnailUtils()
	{
		__thiz = QAndroidJniObject(
			"android.media.ThumbnailUtils",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ThumbnailUtils::createAudioThumbnail(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createAudioThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ThumbnailUtils::createAudioThumbnail(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createAudioThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject ThumbnailUtils::createAudioThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createAudioThumbnail",
			"(Ljava/io/File;Landroid/util/Size;Landroid/os/CancellationSignal;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ThumbnailUtils::createImageThumbnail(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createImageThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ThumbnailUtils::createImageThumbnail(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createImageThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject ThumbnailUtils::createImageThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createImageThumbnail",
			"(Ljava/io/File;Landroid/util/Size;Landroid/os/CancellationSignal;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ThumbnailUtils::createVideoThumbnail(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createVideoThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ThumbnailUtils::createVideoThumbnail(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createVideoThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject ThumbnailUtils::createVideoThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createVideoThumbnail",
			"(Ljava/io/File;Landroid/util/Size;Landroid/os/CancellationSignal;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ThumbnailUtils::extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"extractThumbnail",
			"(Landroid/graphics/Bitmap;II)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ThumbnailUtils::extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"extractThumbnail",
			"(Landroid/graphics/Bitmap;III)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media

