#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::media
{
	class MediaMetadata;
}
namespace android::media
{
	class Rating;
}

namespace android::media
{
	class MediaMetadata_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaMetadata_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaMetadata_Builder(QJniObject obj);
		
		// Constructors
		MediaMetadata_Builder();
		MediaMetadata_Builder(android::media::MediaMetadata arg0);
		
		// Methods
		android::media::MediaMetadata build();
		android::media::MediaMetadata_Builder putBitmap(jstring arg0, android::graphics::Bitmap arg1);
		android::media::MediaMetadata_Builder putLong(jstring arg0, jlong arg1);
		android::media::MediaMetadata_Builder putRating(jstring arg0, android::media::Rating arg1);
		android::media::MediaMetadata_Builder putString(jstring arg0, jstring arg1);
		android::media::MediaMetadata_Builder putText(jstring arg0, jstring arg1);
		android::media::MediaMetadata_Builder setBitmapDimensionLimit(jint arg0);
	};
} // namespace android::media

