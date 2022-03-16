#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "../util/Size.def.hpp"
#include "../../java/io/File.def.hpp"
#include "../../JString.hpp"
#include "./ThumbnailUtils.def.hpp"

namespace android::media
{
	// Fields
	inline jint ThumbnailUtils::OPTIONS_RECYCLE_INPUT()
	{
		return getStaticField<jint>(
			"android.media.ThumbnailUtils",
			"OPTIONS_RECYCLE_INPUT"
		);
	}
	
	// Constructors
	inline ThumbnailUtils::ThumbnailUtils()
		: JObject(
			"android.media.ThumbnailUtils",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::Bitmap ThumbnailUtils::createAudioThumbnail(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createAudioThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::graphics::Bitmap ThumbnailUtils::createAudioThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createAudioThumbnail",
			"(Ljava/io/File;Landroid/util/Size;Landroid/os/CancellationSignal;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::graphics::Bitmap ThumbnailUtils::createImageThumbnail(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createImageThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::graphics::Bitmap ThumbnailUtils::createImageThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createImageThumbnail",
			"(Ljava/io/File;Landroid/util/Size;Landroid/os/CancellationSignal;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::graphics::Bitmap ThumbnailUtils::createVideoThumbnail(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createVideoThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::graphics::Bitmap ThumbnailUtils::createVideoThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createVideoThumbnail",
			"(Ljava/io/File;Landroid/util/Size;Landroid/os/CancellationSignal;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::graphics::Bitmap ThumbnailUtils::extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"extractThumbnail",
			"(Landroid/graphics/Bitmap;II)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::graphics::Bitmap ThumbnailUtils::extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"extractThumbnail",
			"(Landroid/graphics/Bitmap;III)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media

// Base class headers

