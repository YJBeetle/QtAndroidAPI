#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaTimestamp : public __JniBaseClass
	{
	public:
		// Fields
		static android::media::MediaTimestamp TIMESTAMP_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaTimestamp(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaTimestamp(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getAnchorMediaTimeUs();
		jlong getAnchorSytemNanoTime();
		jfloat getMediaClockRate();
		jstring toString();
	};
} // namespace android::media

