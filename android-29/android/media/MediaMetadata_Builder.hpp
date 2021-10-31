#pragma once

#include "../../__JniBaseClass.hpp"

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
	class MediaMetadata_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaMetadata_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaMetadata_Builder(QAndroidJniObject obj);
		
		// Constructors
		MediaMetadata_Builder();
		MediaMetadata_Builder(android::media::MediaMetadata arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject putBitmap(jstring arg0, android::graphics::Bitmap arg1);
		QAndroidJniObject putLong(jstring arg0, jlong arg1);
		QAndroidJniObject putRating(jstring arg0, android::media::Rating arg1);
		QAndroidJniObject putString(jstring arg0, jstring arg1);
		QAndroidJniObject putText(jstring arg0, jstring arg1);
	};
} // namespace android::media

