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
		return getStaticField<jint>(
			"android.media.ThumbnailUtils",
			"OPTIONS_RECYCLE_INPUT"
		);
	}
	
	// QAndroidJniObject forward
	ThumbnailUtils::ThumbnailUtils(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ThumbnailUtils::ThumbnailUtils()
		: __JniBaseClass(
			"android.media.ThumbnailUtils",
			"()V"
		) {}
	
	// Methods
	android::graphics::Bitmap ThumbnailUtils::createAudioThumbnail(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createAudioThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			arg0,
			arg1
		);
	}
	android::graphics::Bitmap ThumbnailUtils::createAudioThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2)
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
	android::graphics::Bitmap ThumbnailUtils::createImageThumbnail(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createImageThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			arg0,
			arg1
		);
	}
	android::graphics::Bitmap ThumbnailUtils::createImageThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2)
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
	android::graphics::Bitmap ThumbnailUtils::createVideoThumbnail(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createVideoThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			arg0,
			arg1
		);
	}
	android::graphics::Bitmap ThumbnailUtils::createVideoThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2)
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
	android::graphics::Bitmap ThumbnailUtils::extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2)
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
	android::graphics::Bitmap ThumbnailUtils::extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3)
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

