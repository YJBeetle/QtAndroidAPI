#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioRecord_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CHANNELS();
		static jstring ENCODING();
		static jstring LATENCY();
		static jstring SAMPLERATE();
		static jstring SOURCE();
		
		AudioRecord_MetricsConstants(QAndroidJniObject obj);
		// Constructors
		AudioRecord_MetricsConstants() = default;
		
		// Methods
	};
} // namespace android::media

