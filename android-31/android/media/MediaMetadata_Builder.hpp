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
class JString;
class JString;

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
		android::media::MediaMetadata build() const;
		android::media::MediaMetadata_Builder putBitmap(JString arg0, android::graphics::Bitmap arg1) const;
		android::media::MediaMetadata_Builder putLong(JString arg0, jlong arg1) const;
		android::media::MediaMetadata_Builder putRating(JString arg0, android::media::Rating arg1) const;
		android::media::MediaMetadata_Builder putString(JString arg0, JString arg1) const;
		android::media::MediaMetadata_Builder putText(JString arg0, JString arg1) const;
		android::media::MediaMetadata_Builder setBitmapDimensionLimit(jint arg0) const;
	};
} // namespace android::media

