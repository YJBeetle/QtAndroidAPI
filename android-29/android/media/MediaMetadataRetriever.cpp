#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "./MediaDataSource.hpp"
#include "./MediaMetadataRetriever_BitmapParams.hpp"
#include "../net/Uri.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "./MediaMetadataRetriever.hpp"

namespace android::media
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
	
	MediaMetadataRetriever::MediaMetadataRetriever(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaMetadataRetriever::MediaMetadataRetriever()
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
	QAndroidJniObject MediaMetadataRetriever::getFrameAtIndex(jint arg0, android::media::MediaMetadataRetriever_BitmapParams arg1)
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
	QAndroidJniObject MediaMetadataRetriever::getFramesAtIndex(jint arg0, jint arg1, android::media::MediaMetadataRetriever_BitmapParams arg2)
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
	QAndroidJniObject MediaMetadataRetriever::getImageAtIndex(jint arg0, android::media::MediaMetadataRetriever_BitmapParams arg1)
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
	QAndroidJniObject MediaMetadataRetriever::getPrimaryImage(android::media::MediaMetadataRetriever_BitmapParams arg0)
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
	void MediaMetadataRetriever::setDataSource(android::media::MediaDataSource arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaMetadataRetriever::setDataSource(java::io::FileDescriptor arg0)
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
	void MediaMetadataRetriever::setDataSource(android::content::Context arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaMetadataRetriever::setDataSource(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaMetadataRetriever::setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace android::media

