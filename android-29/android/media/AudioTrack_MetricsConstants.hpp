#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioTrack_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CHANNELMASK();
		static jstring CONTENTTYPE();
		static jstring SAMPLERATE();
		static jstring STREAMTYPE();
		static jstring USAGE();
		
		AudioTrack_MetricsConstants(QAndroidJniObject obj);
		// Constructors
		AudioTrack_MetricsConstants() = default;
		
		// Methods
	};
} // namespace android::media

