#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "./MediaMetadata.def.hpp"
#include "./Rating.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./MediaMetadata_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaMetadata_Builder::MediaMetadata_Builder()
		: JObject(
			"android.media.MediaMetadata$Builder",
			"()V"
		) {}
	inline MediaMetadata_Builder::MediaMetadata_Builder(android::media::MediaMetadata arg0)
		: JObject(
			"android.media.MediaMetadata$Builder",
			"(Landroid/media/MediaMetadata;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::media::MediaMetadata MediaMetadata_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaMetadata;"
		);
	}
	inline android::media::MediaMetadata_Builder MediaMetadata_Builder::putBitmap(JString arg0, android::graphics::Bitmap arg1) const
	{
		return callObjectMethod(
			"putBitmap",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;)Landroid/media/MediaMetadata$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::media::MediaMetadata_Builder MediaMetadata_Builder::putLong(JString arg0, jlong arg1) const
	{
		return callObjectMethod(
			"putLong",
			"(Ljava/lang/String;J)Landroid/media/MediaMetadata$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::media::MediaMetadata_Builder MediaMetadata_Builder::putRating(JString arg0, android::media::Rating arg1) const
	{
		return callObjectMethod(
			"putRating",
			"(Ljava/lang/String;Landroid/media/Rating;)Landroid/media/MediaMetadata$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::media::MediaMetadata_Builder MediaMetadata_Builder::putString(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"putString",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/MediaMetadata$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::media::MediaMetadata_Builder MediaMetadata_Builder::putText(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"putText",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Landroid/media/MediaMetadata$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::media

// Base class headers

