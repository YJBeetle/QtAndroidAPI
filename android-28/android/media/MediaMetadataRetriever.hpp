#pragma once

#include "../../JByteArray.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "./MediaDataSource.def.hpp"
#include "./MediaMetadataRetriever_BitmapParams.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "./MediaMetadataRetriever.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaMetadataRetriever::METADATA_KEY_ALBUM()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_ALBUM"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_ALBUMARTIST()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_ALBUMARTIST"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_ARTIST()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_ARTIST"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_AUTHOR()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_AUTHOR"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_BITRATE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_BITRATE"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_CAPTURE_FRAMERATE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_CAPTURE_FRAMERATE"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_CD_TRACK_NUMBER()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_CD_TRACK_NUMBER"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_COMPILATION()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_COMPILATION"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_COMPOSER()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_COMPOSER"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_DATE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_DATE"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_DISC_NUMBER()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_DISC_NUMBER"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_DURATION()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_DURATION"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_GENRE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_GENRE"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_HAS_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_HAS_AUDIO"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_HAS_IMAGE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_HAS_IMAGE"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_HAS_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_HAS_VIDEO"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_IMAGE_COUNT()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_COUNT"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_IMAGE_HEIGHT()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_HEIGHT"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_IMAGE_PRIMARY()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_PRIMARY"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_IMAGE_ROTATION()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_ROTATION"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_IMAGE_WIDTH()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_IMAGE_WIDTH"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_LOCATION()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_LOCATION"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_MIMETYPE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_MIMETYPE"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_NUM_TRACKS()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_NUM_TRACKS"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_TITLE()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_TITLE"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_VIDEO_FRAME_COUNT()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_FRAME_COUNT"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_VIDEO_HEIGHT()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_HEIGHT"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_VIDEO_ROTATION()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_ROTATION"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_VIDEO_WIDTH()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_VIDEO_WIDTH"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_WRITER()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_WRITER"
		);
	}
	inline jint MediaMetadataRetriever::METADATA_KEY_YEAR()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"METADATA_KEY_YEAR"
		);
	}
	inline jint MediaMetadataRetriever::OPTION_CLOSEST()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_CLOSEST"
		);
	}
	inline jint MediaMetadataRetriever::OPTION_CLOSEST_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_CLOSEST_SYNC"
		);
	}
	inline jint MediaMetadataRetriever::OPTION_NEXT_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_NEXT_SYNC"
		);
	}
	inline jint MediaMetadataRetriever::OPTION_PREVIOUS_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataRetriever",
			"OPTION_PREVIOUS_SYNC"
		);
	}
	
	// Constructors
	inline MediaMetadataRetriever::MediaMetadataRetriever()
		: JObject(
			"android.media.MediaMetadataRetriever",
			"()V"
		) {}
	
	// Methods
	inline JString MediaMetadataRetriever::extractMetadata(jint arg0) const
	{
		return callObjectMethod(
			"extractMetadata",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JByteArray MediaMetadataRetriever::getEmbeddedPicture() const
	{
		return callObjectMethod(
			"getEmbeddedPicture",
			"()[B"
		);
	}
	inline android::graphics::Bitmap MediaMetadataRetriever::getFrameAtIndex(jint arg0) const
	{
		return callObjectMethod(
			"getFrameAtIndex",
			"(I)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	inline android::graphics::Bitmap MediaMetadataRetriever::getFrameAtIndex(jint arg0, android::media::MediaMetadataRetriever_BitmapParams arg1) const
	{
		return callObjectMethod(
			"getFrameAtIndex",
			"(ILandroid/media/MediaMetadataRetriever$BitmapParams;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.object()
		);
	}
	inline android::graphics::Bitmap MediaMetadataRetriever::getFrameAtTime() const
	{
		return callObjectMethod(
			"getFrameAtTime",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline android::graphics::Bitmap MediaMetadataRetriever::getFrameAtTime(jlong arg0) const
	{
		return callObjectMethod(
			"getFrameAtTime",
			"(J)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	inline android::graphics::Bitmap MediaMetadataRetriever::getFrameAtTime(jlong arg0, jint arg1) const
	{
		return callObjectMethod(
			"getFrameAtTime",
			"(JI)Landroid/graphics/Bitmap;",
			arg0,
			arg1
		);
	}
	inline JObject MediaMetadataRetriever::getFramesAtIndex(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getFramesAtIndex",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	inline JObject MediaMetadataRetriever::getFramesAtIndex(jint arg0, jint arg1, android::media::MediaMetadataRetriever_BitmapParams arg2) const
	{
		return callObjectMethod(
			"getFramesAtIndex",
			"(IILandroid/media/MediaMetadataRetriever$BitmapParams;)Ljava/util/List;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline android::graphics::Bitmap MediaMetadataRetriever::getImageAtIndex(jint arg0) const
	{
		return callObjectMethod(
			"getImageAtIndex",
			"(I)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	inline android::graphics::Bitmap MediaMetadataRetriever::getImageAtIndex(jint arg0, android::media::MediaMetadataRetriever_BitmapParams arg1) const
	{
		return callObjectMethod(
			"getImageAtIndex",
			"(ILandroid/media/MediaMetadataRetriever$BitmapParams;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.object()
		);
	}
	inline android::graphics::Bitmap MediaMetadataRetriever::getPrimaryImage() const
	{
		return callObjectMethod(
			"getPrimaryImage",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline android::graphics::Bitmap MediaMetadataRetriever::getPrimaryImage(android::media::MediaMetadataRetriever_BitmapParams arg0) const
	{
		return callObjectMethod(
			"getPrimaryImage",
			"(Landroid/media/MediaMetadataRetriever$BitmapParams;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	inline android::graphics::Bitmap MediaMetadataRetriever::getScaledFrameAtTime(jlong arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void MediaMetadataRetriever::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void MediaMetadataRetriever::setDataSource(android::media::MediaDataSource arg0) const
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.object()
		);
	}
	inline void MediaMetadataRetriever::setDataSource(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void MediaMetadataRetriever::setDataSource(JString arg0) const
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaMetadataRetriever::setDataSource(android::content::Context arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaMetadataRetriever::setDataSource(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaMetadataRetriever::setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2) const
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

// Base class headers

