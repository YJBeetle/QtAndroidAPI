#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::media
{
	class MediaDataSource;
}
namespace __jni_impl::android::media
{
	class MediaMetadataRetriever_BitmapParams;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}

namespace __jni_impl::android::media
{
	class MediaMetadataRetriever : public __JniBaseClass
	{
	public:
		// Fields
		static jint METADATA_KEY_ALBUM();
		static jint METADATA_KEY_ALBUMARTIST();
		static jint METADATA_KEY_ARTIST();
		static jint METADATA_KEY_AUTHOR();
		static jint METADATA_KEY_BITRATE();
		static jint METADATA_KEY_CAPTURE_FRAMERATE();
		static jint METADATA_KEY_CD_TRACK_NUMBER();
		static jint METADATA_KEY_COMPILATION();
		static jint METADATA_KEY_COMPOSER();
		static jint METADATA_KEY_DATE();
		static jint METADATA_KEY_DISC_NUMBER();
		static jint METADATA_KEY_DURATION();
		static jint METADATA_KEY_EXIF_LENGTH();
		static jint METADATA_KEY_EXIF_OFFSET();
		static jint METADATA_KEY_GENRE();
		static jint METADATA_KEY_HAS_AUDIO();
		static jint METADATA_KEY_HAS_IMAGE();
		static jint METADATA_KEY_HAS_VIDEO();
		static jint METADATA_KEY_IMAGE_COUNT();
		static jint METADATA_KEY_IMAGE_HEIGHT();
		static jint METADATA_KEY_IMAGE_PRIMARY();
		static jint METADATA_KEY_IMAGE_ROTATION();
		static jint METADATA_KEY_IMAGE_WIDTH();
		static jint METADATA_KEY_LOCATION();
		static jint METADATA_KEY_MIMETYPE();
		static jint METADATA_KEY_NUM_TRACKS();
		static jint METADATA_KEY_TITLE();
		static jint METADATA_KEY_VIDEO_FRAME_COUNT();
		static jint METADATA_KEY_VIDEO_HEIGHT();
		static jint METADATA_KEY_VIDEO_ROTATION();
		static jint METADATA_KEY_VIDEO_WIDTH();
		static jint METADATA_KEY_WRITER();
		static jint METADATA_KEY_YEAR();
		static jint OPTION_CLOSEST();
		static jint OPTION_CLOSEST_SYNC();
		static jint OPTION_NEXT_SYNC();
		static jint OPTION_PREVIOUS_SYNC();
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		jstring extractMetadata(jint arg0);
		jbyteArray getEmbeddedPicture();
		QAndroidJniObject getFrameAtIndex(jint arg0);
		QAndroidJniObject getFrameAtIndex(jint arg0, __jni_impl::android::media::MediaMetadataRetriever_BitmapParams arg1);
		QAndroidJniObject getFrameAtTime();
		QAndroidJniObject getFrameAtTime(jlong arg0);
		QAndroidJniObject getFrameAtTime(jlong arg0, jint arg1);
		QAndroidJniObject getFramesAtIndex(jint arg0, jint arg1);
		QAndroidJniObject getFramesAtIndex(jint arg0, jint arg1, __jni_impl::android::media::MediaMetadataRetriever_BitmapParams arg2);
		QAndroidJniObject getImageAtIndex(jint arg0);
		QAndroidJniObject getImageAtIndex(jint arg0, __jni_impl::android::media::MediaMetadataRetriever_BitmapParams arg1);
		QAndroidJniObject getPrimaryImage();
		QAndroidJniObject getPrimaryImage(__jni_impl::android::media::MediaMetadataRetriever_BitmapParams arg0);
		QAndroidJniObject getScaledFrameAtTime(jlong arg0, jint arg1, jint arg2, jint arg3);
		void release();
		void setDataSource(__jni_impl::android::media::MediaDataSource arg0);
		void setDataSource(__jni_impl::java::io::FileDescriptor arg0);
		void setDataSource(jstring arg0);
		void setDataSource(const QString &arg0);
		void setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		void setDataSource(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void setDataSource(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void setDataSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2);
	};
} // namespace __jni_impl::android::media

#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "MediaDataSource.hpp"
#include "MediaMetadataRetriever_BitmapParams.hpp"
#include "../net/Uri.hpp"
#include "../../java/io/FileDescriptor.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaMetadataRetriever::METADATA_KEY_ALBUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_ALBUM"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_ALBUMARTIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_ALBUMARTIST"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_ARTIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_ARTIST"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_AUTHOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_AUTHOR"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_BITRATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_BITRATE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_CAPTURE_FRAMERATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_CAPTURE_FRAMERATE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_CD_TRACK_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_CD_TRACK_NUMBER"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_COMPILATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_COMPILATION"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_COMPOSER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_COMPOSER"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_DATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_DATE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_DISC_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_DISC_NUMBER"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_DURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_DURATION"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_EXIF_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_EXIF_LENGTH"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_EXIF_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_EXIF_OFFSET"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_GENRE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_GENRE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_HAS_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_HAS_AUDIO"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_HAS_IMAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_HAS_IMAGE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_HAS_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_HAS_VIDEO"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_IMAGE_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_COUNT"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_IMAGE_HEIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_HEIGHT"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_IMAGE_PRIMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_PRIMARY"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_IMAGE_ROTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_ROTATION"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_IMAGE_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_WIDTH"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_LOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_LOCATION"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_MIMETYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_MIMETYPE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_NUM_TRACKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_NUM_TRACKS"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_TITLE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_VIDEO_FRAME_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_FRAME_COUNT"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_VIDEO_HEIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_HEIGHT"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_VIDEO_ROTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_ROTATION"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_VIDEO_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_WIDTH"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_WRITER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_WRITER"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_YEAR"
		);
	}
	jint MediaMetadataRetriever::OPTION_CLOSEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_CLOSEST"
		);
	}
	jint MediaMetadataRetriever::OPTION_CLOSEST_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_CLOSEST_SYNC"
		);
	}
	jint MediaMetadataRetriever::OPTION_NEXT_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_NEXT_SYNC"
		);
	}
	jint MediaMetadataRetriever::OPTION_PREVIOUS_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_PREVIOUS_SYNC"
		);
	}
	
	// Constructors
	void MediaMetadataRetriever::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMetadataRetriever",
			"()V"
		);
	}
	
	// Methods
	void MediaMetadataRetriever::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jstring MediaMetadataRetriever::extractMetadata(jint arg0)
	{
		return __thiz.callObjectMethod(
			"extractMetadata",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jbyteArray MediaMetadataRetriever::getEmbeddedPicture()
	{
		return __thiz.callObjectMethod(
			"getEmbeddedPicture",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject MediaMetadataRetriever::getFrameAtIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getFrameAtIndex",
			"(I)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	QAndroidJniObject MediaMetadataRetriever::getFrameAtIndex(jint arg0, __jni_impl::android::media::MediaMetadataRetriever_BitmapParams arg1)
	{
		return __thiz.callObjectMethod(
			"getFrameAtIndex",
			"(ILandroid/media/MediaMetadataRetriever$BitmapParams;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaMetadataRetriever::getFrameAtTime()
	{
		return __thiz.callObjectMethod(
			"getFrameAtTime",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject MediaMetadataRetriever::getFrameAtTime(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"getFrameAtTime",
			"(J)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	QAndroidJniObject MediaMetadataRetriever::getFrameAtTime(jlong arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getFrameAtTime",
			"(JI)Landroid/graphics/Bitmap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaMetadataRetriever::getFramesAtIndex(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getFramesAtIndex",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaMetadataRetriever::getFramesAtIndex(jint arg0, jint arg1, __jni_impl::android::media::MediaMetadataRetriever_BitmapParams arg2)
	{
		return __thiz.callObjectMethod(
			"getFramesAtIndex",
			"(IILandroid/media/MediaMetadataRetriever$BitmapParams;)Ljava/util/List;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MediaMetadataRetriever::getImageAtIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getImageAtIndex",
			"(I)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	QAndroidJniObject MediaMetadataRetriever::getImageAtIndex(jint arg0, __jni_impl::android::media::MediaMetadataRetriever_BitmapParams arg1)
	{
		return __thiz.callObjectMethod(
			"getImageAtIndex",
			"(ILandroid/media/MediaMetadataRetriever$BitmapParams;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaMetadataRetriever::getPrimaryImage()
	{
		return __thiz.callObjectMethod(
			"getPrimaryImage",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject MediaMetadataRetriever::getPrimaryImage(__jni_impl::android::media::MediaMetadataRetriever_BitmapParams arg0)
	{
		return __thiz.callObjectMethod(
			"getPrimaryImage",
			"(Landroid/media/MediaMetadataRetriever$BitmapParams;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaMetadataRetriever::getScaledFrameAtTime(jlong arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"getScaledFrameAtTime",
			"(JIII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void MediaMetadataRetriever::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaMetadataRetriever::setDataSource(__jni_impl::android::media::MediaDataSource arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaMetadataRetriever::setDataSource(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaMetadataRetriever::setDataSource(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaMetadataRetriever::setDataSource(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaMetadataRetriever::setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaMetadataRetriever::setDataSource(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaMetadataRetriever::setDataSource(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaMetadataRetriever::setDataSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaMetadataRetriever : public __jni_impl::android::media::MediaMetadataRetriever
	{
	public:
		MediaMetadataRetriever(QAndroidJniObject obj) { __thiz = obj; }
		MediaMetadataRetriever()
		{
			__constructor();
		}
	};
} // namespace android::media

