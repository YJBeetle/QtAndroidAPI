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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioTrack_MetricsConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioTrack_MetricsConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

