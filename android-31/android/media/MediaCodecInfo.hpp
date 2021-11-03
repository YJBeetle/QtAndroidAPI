#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::media
{
	class MediaCodecInfo_CodecCapabilities;
}
class JString;

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
		JString getCanonicalName();
		android::media::MediaCodecInfo_CodecCapabilities getCapabilitiesForType(JString arg0);
		JString getName();
		JArray getSupportedTypes();
		jboolean isAlias();
		jboolean isEncoder();
		jboolean isHardwareAccelerated();
		jboolean isSoftwareOnly();
		jboolean isVendor();
	};
} // namespace android::media

