#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioAttributes;
}

namespace android::media
{
	class AudioAttributes_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		AudioAttributes_Builder(QAndroidJniObject obj);
		// Constructors
		AudioAttributes_Builder();
		AudioAttributes_Builder(android::media::AudioAttributes arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAllowedCapturePolicy(jint arg0);
		QAndroidJniObject setContentType(jint arg0);
		QAndroidJniObject setFlags(jint arg0);
		QAndroidJniObject setHapticChannelsMuted(jboolean arg0);
		QAndroidJniObject setLegacyStreamType(jint arg0);
		QAndroidJniObject setUsage(jint arg0);
	};
} // namespace android::media

