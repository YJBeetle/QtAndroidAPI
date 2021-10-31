#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioPlaybackCaptureConfiguration;
}
namespace android::media::projection
{
	class MediaProjection;
}

namespace android::media
{
	class AudioPlaybackCaptureConfiguration_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioPlaybackCaptureConfiguration_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioPlaybackCaptureConfiguration_Builder(QAndroidJniObject obj);
		
		// Constructors
		AudioPlaybackCaptureConfiguration_Builder(android::media::projection::MediaProjection arg0);
		
		// Methods
		QAndroidJniObject addMatchingUid(jint arg0);
		QAndroidJniObject addMatchingUsage(jint arg0);
		QAndroidJniObject build();
		QAndroidJniObject excludeUid(jint arg0);
		QAndroidJniObject excludeUsage(jint arg0);
	};
} // namespace android::media

