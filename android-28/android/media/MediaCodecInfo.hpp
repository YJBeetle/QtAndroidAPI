#pragma once

#include "../../JObject.hpp"

class JArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::MediaCodecInfo_CodecCapabilities getCapabilitiesForType(JString arg0) const;
		JString getName() const;
		JArray getSupportedTypes() const;
		jboolean isEncoder() const;
	};
} // namespace android::media

