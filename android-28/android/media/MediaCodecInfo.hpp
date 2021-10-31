#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaCodecInfo_CodecCapabilities;
}

namespace android::media
{
	class MediaCodecInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::MediaCodecInfo_CodecCapabilities getCapabilitiesForType(jstring arg0);
		jstring getName();
		jarray getSupportedTypes();
		jboolean isEncoder();
	};
} // namespace android::media

