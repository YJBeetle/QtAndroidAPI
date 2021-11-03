#include "../graphics/Bitmap.hpp"
#include "./MediaMetadata.hpp"
#include "./Rating.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./MediaMetadata_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaMetadata_Builder::MediaMetadata_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaMetadata_Builder::MediaMetadata_Builder()
		: JObject(
			"android.media.MediaMetadata$Builder",
			"()V"
		) {}
	MediaMetadata_Builder::MediaMetadata_Builder(android::media::MediaMetadata arg0)
		: JObject(
			"android.media.MediaMetadata$Builder",
			"(Landroid/media/MediaMetadata;)V",
			arg0.object()
		) {}
	
	// Methods
	android::media::MediaMetadata MediaMetadata_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaMetadata;"
		);
	}
	android::media::MediaMetadata_Builder MediaMetadata_Builder::putBitmap(JString arg0, android::graphics::Bitmap arg1)
	{
		return callObjectMethod(
			"putBitmap",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;)Landroid/media/MediaMetadata$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::media::MediaMetadata_Builder MediaMetadata_Builder::putLong(JString arg0, jlong arg1)
	{
		return callObjectMethod(
			"putLong",
			"(Ljava/lang/String;J)Landroid/media/MediaMetadata$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::media::MediaMetadata_Builder MediaMetadata_Builder::putRating(JString arg0, android::media::Rating arg1)
	{
		return callObjectMethod(
			"putRating",
			"(Ljava/lang/String;Landroid/media/Rating;)Landroid/media/MediaMetadata$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::media::MediaMetadata_Builder MediaMetadata_Builder::putString(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"putString",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/MediaMetadata$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::media::MediaMetadata_Builder MediaMetadata_Builder::putText(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"putText",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Landroid/media/MediaMetadata$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::media

