#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaCodecInfo_CodecCapabilities;
}

namespace android::media
{
	class MediaCodecInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::MediaCodecInfo_CodecCapabilities getCapabilitiesForType(jstring arg0);
		jstring getName();
		jarray getSupportedTypes();
		jboolean isEncoder();
	};
} // namespace android::media

