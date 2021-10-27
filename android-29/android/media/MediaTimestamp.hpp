#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaTimestamp : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject TIMESTAMP_UNKNOWN();
		
		MediaTimestamp(QAndroidJniObject obj);
		// Constructors
		MediaTimestamp(jlong &arg0, jlong &arg1, jfloat &arg2);
		MediaTimestamp() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getAnchorMediaTimeUs();
		jlong getAnchorSystemNanoTime();
		jlong getAnchorSytemNanoTime();
		jfloat getMediaClockRate();
		jstring toString();
	};
} // namespace android::media

