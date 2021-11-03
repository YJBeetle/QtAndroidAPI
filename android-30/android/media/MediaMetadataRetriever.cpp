#include "../../JByteArray.hpp"
#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "./MediaDataSource.hpp"
#include "./MediaMetadataRetriever_BitmapParams.hpp"
#include "../net/Uri.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../JString.hpp"
#include "./MediaMetadataRetriever.hpp"

namespace android::media
{
	// Fields
	jint MediaMetadataRetriever::METADATA_KEY_ALBUM()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_ALBUM"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_ALBUMARTIST()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_ALBUMARTIST"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_ARTIST()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_ARTIST"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_AUTHOR()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_AUTHOR"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_BITRATE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_BITRATE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_CAPTURE_FRAMERATE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_CAPTURE_FRAMERATE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_CD_TRACK_NUMBER()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_CD_TRACK_NUMBER"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_COLOR_RANGE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_COLOR_RANGE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_COLOR_STANDARD()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_COLOR_STANDARD"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_COLOR_TRANSFER()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_COLOR_TRANSFER"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_COMPILATION()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_COMPILATION"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_COMPOSER()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_COMPOSER"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_DATE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_DATE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_DISC_NUMBER()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_DISC_NUMBER"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_DURATION()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_DURATION"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_EXIF_LENGTH()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_EXIF_LENGTH"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_EXIF_OFFSET()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_EXIF_OFFSET"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_GENRE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_GENRE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_HAS_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_HAS_AUDIO"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_HAS_IMAGE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_HAS_IMAGE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_HAS_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_HAS_VIDEO"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_IMAGE_COUNT()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_COUNT"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_IMAGE_HEIGHT()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_HEIGHT"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_IMAGE_PRIMARY()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_PRIMARY"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_IMAGE_ROTATION()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_ROTATION"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_IMAGE_WIDTH()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_WIDTH"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_LOCATION()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_LOCATION"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_MIMETYPE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_MIMETYPE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_NUM_TRACKS()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_NUM_TRACKS"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_TITLE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_TITLE"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_VIDEO_FRAME_COUNT()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_FRAME_COUNT"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_VIDEO_HEIGHT()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_HEIGHT"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_VIDEO_ROTATION()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_ROTATION"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_VIDEO_WIDTH()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_WIDTH"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_WRITER()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_WRITER"
		);
	}
	jint MediaMetadataRetriever::METADATA_KEY_YEAR()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_YEAR"
		);
	}
	jint MediaMetadataRetriever::OPTION_CLOSEST()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_CLOSEST"
		);
	}
	jint MediaMetadataRetriever::OPTION_CLOSEST_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_CLOSEST_SYNC"
		);
	}
	jint MediaMetadataRetriever::OPTION_NEXT_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_NEXT_SYNC"
		);
	}
	jint MediaMetadataRetriever::OPTION_PREVIOUS_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_PREVIOUS_SYNC"
		);
	}
	
	// QJniObject forward
	MediaMetadataRetriever::MediaMetadataRetriever(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaMetadataRetriever::MediaMetadataRetriever()
		: JObject(
			"android.media.MediaMetadataRetriever",
			"()V"
		) {}
	
	// Methods
	void MediaMetadataRetriever::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JString MediaMetadataRetriever::extractMetadata(jint arg0)
	{
		return callObjectMethod(
			"extractMetadata",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JByteArray MediaMetadataRetriever::getEmbeddedPicture()
	{
		return callObjectMethod(
			"getEmbeddedPicture",
			"()[B"
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getFrameAtIndex(jint arg0)
	{
		return callObjectMethod(
			"getFrameAtIndex",
			"(I)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getFrameAtIndex(jint arg0, android::media::MediaMetadataRetriever_BitmapParams arg1)
	{
		return callObjectMethod(
			"getFrameAtIndex",
			"(ILandroid/media/MediaMetadataRetriever$BitmapParams;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.object()
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getFrameAtTime()
	{
		return callObjectMethod(
			"getFrameAtTime",
			"()Landroid/graphics/Bitmap;"
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getFrameAtTime(jlong arg0)
	{
		return callObjectMethod(
			"getFrameAtTime",
			"(J)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getFrameAtTime(jlong arg0, jint arg1)
	{
		return callObjectMethod(
			"getFrameAtTime",
			"(JI)Landroid/graphics/Bitmap;",
			arg0,
			arg1
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getFrameAtTime(jlong arg0, jint arg1, android::media::MediaMetadataRetriever_BitmapParams arg2)
	{
		return callObjectMethod(
			"getFrameAtTime",
			"(JILandroid/media/MediaMetadataRetriever$BitmapParams;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	JObject MediaMetadataRetriever::getFramesAtIndex(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getFramesAtIndex",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	JObject MediaMetadataRetriever::getFramesAtIndex(jint arg0, jint arg1, android::media::MediaMetadataRetriever_BitmapParams arg2)
	{
		return callObjectMethod(
			"getFramesAtIndex",
			"(IILandroid/media/MediaMetadataRetriever$BitmapParams;)Ljava/util/List;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getImageAtIndex(jint arg0)
	{
		return callObjectMethod(
			"getImageAtIndex",
			"(I)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getImageAtIndex(jint arg0, android::media::MediaMetadataRetriever_BitmapParams arg1)
	{
		return callObjectMethod(
			"getImageAtIndex",
			"(ILandroid/media/MediaMetadataRetriever$BitmapParams;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.object()
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getPrimaryImage()
	{
		return callObjectMethod(
			"getPrimaryImage",
			"()Landroid/graphics/Bitmap;"
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getPrimaryImage(android::media::MediaMetadataRetriever_BitmapParams arg0)
	{
		return callObjectMethod(
			"getPrimaryImage",
			"(Landroid/media/MediaMetadataRetriever$BitmapParams;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getScaledFrameAtTime(jlong arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"getScaledFrameAtTime",
			"(JIII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	android::graphics::Bitmap MediaMetadataRetriever::getScaledFrameAtTime(jlong arg0, jint arg1, jint arg2, jint arg3, android::media::MediaMetadataRetriever_BitmapParams arg4)
	{
		return callObjectMethod(
			"getScaledFrameAtTime",
			"(JIIILandroid/media/MediaMetadataRetriever$BitmapParams;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void MediaMetadataRetriever::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaMetadataRetriever::setDataSource(android::media::MediaDataSource arg0)
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.object()
		);
	}
	void MediaMetadataRetriever::setDataSource(java::io::FileDescriptor arg0)
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void MediaMetadataRetriever::setDataSource(JString arg0)
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void MediaMetadataRetriever::setDataSource(android::content::Context arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaMetadataRetriever::setDataSource(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaMetadataRetriever::setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2)
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace android::media

