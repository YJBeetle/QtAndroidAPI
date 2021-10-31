#include "../graphics/Bitmap.hpp"
#include "./MediaMetadata.hpp"
#include "./Rating.hpp"
#include "./MediaMetadata_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaMetadata_Builder::MediaMetadata_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaMetadata_Builder::MediaMetadata_Builder()
		: __JniBaseClass(
			"android.media.MediaMetadata$Builder",
			"()V"
		) {}
	MediaMetadata_Builder::MediaMetadata_Builder(android::media::MediaMetadata arg0)
		: __JniBaseClass(
			"android.media.MediaMetadata$Builder",
			"(Landroid/media/MediaMetadata;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject MediaMetadata_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaMetadata;"
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putBitmap(jstring arg0, android::graphics::Bitmap arg1)
	{
		return callObjectMethod(
			"putBitmap",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putLong(jstring arg0, jlong arg1)
	{
		return callObjectMethod(
			"putLong",
			"(Ljava/lang/String;J)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putRating(jstring arg0, android::media::Rating arg1)
	{
		return callObjectMethod(
			"putRating",
			"(Ljava/lang/String;Landroid/media/Rating;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putString(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"putString",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putText(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"putText",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::media

