#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::util
{
	class Size;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::android::media
{
	class ThumbnailUtils : public __JniBaseClass
	{
	public:
		// Fields
		static jint OPTIONS_RECYCLE_INPUT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createAudioThumbnail(jstring arg0, jint arg1);
		static QAndroidJniObject createAudioThumbnail(const QString &arg0, jint arg1);
		static QAndroidJniObject createAudioThumbnail(__jni_impl::java::io::File arg0, __jni_impl::android::util::Size arg1, __jni_impl::android::os::CancellationSignal arg2);
		static QAndroidJniObject createImageThumbnail(jstring arg0, jint arg1);
		static QAndroidJniObject createImageThumbnail(const QString &arg0, jint arg1);
		static QAndroidJniObject createImageThumbnail(__jni_impl::java::io::File arg0, __jni_impl::android::util::Size arg1, __jni_impl::android::os::CancellationSignal arg2);
		static QAndroidJniObject createVideoThumbnail(jstring arg0, jint arg1);
		static QAndroidJniObject createVideoThumbnail(const QString &arg0, jint arg1);
		static QAndroidJniObject createVideoThumbnail(__jni_impl::java::io::File arg0, __jni_impl::android::util::Size arg1, __jni_impl::android::os::CancellationSignal arg2);
		static QAndroidJniObject extractThumbnail(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2);
		static QAndroidJniObject extractThumbnail(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::media

#include "../graphics/Bitmap.hpp"
#include "../os/CancellationSignal.hpp"
#include "../util/Size.hpp"
#include "../../java/io/File.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint ThumbnailUtils::OPTIONS_RECYCLE_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ThumbnailUtils",
			"OPTIONS_RECYCLE_INPUT"
		);
	}
	
	// Constructors
	void ThumbnailUtils::__constructor()
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
	QAndroidJniObject ThumbnailUtils::createAudioThumbnail(__jni_impl::java::io::File arg0, __jni_impl::android::util::Size arg1, __jni_impl::android::os::CancellationSignal arg2)
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
	QAndroidJniObject ThumbnailUtils::createImageThumbnail(__jni_impl::java::io::File arg0, __jni_impl::android::util::Size arg1, __jni_impl::android::os::CancellationSignal arg2)
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
	QAndroidJniObject ThumbnailUtils::createVideoThumbnail(__jni_impl::java::io::File arg0, __jni_impl::android::util::Size arg1, __jni_impl::android::os::CancellationSignal arg2)
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
	QAndroidJniObject ThumbnailUtils::extractThumbnail(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2)
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
	QAndroidJniObject ThumbnailUtils::extractThumbnail(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3)
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
} // namespace __jni_impl::android::media

namespace android::media
{
	class ThumbnailUtils : public __jni_impl::android::media::ThumbnailUtils
	{
	public:
		ThumbnailUtils(QAndroidJniObject obj) { __thiz = obj; }
		ThumbnailUtils()
		{
			__constructor();
		}
	};
} // namespace android::media

