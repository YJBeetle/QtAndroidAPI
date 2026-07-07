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
		static jint SECURITY_MODEL_MEMORY_SAFE();
		static jint SECURITY_MODEL_SANDBOXED();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getCanonicalName() const;
		android::media::MediaCodecInfo_CodecCapabilities getCapabilitiesForType(JString arg0) const;
		JString getName() const;
		jint getSecurityModel() const;
		JArray getSupportedTypes() const;
		jboolean isAlias() const;
		jboolean isEncoder() const;
		jboolean isHardwareAccelerated() const;
		jboolean isSoftwareOnly() const;
		jboolean isVendor() const;
	};
} // namespace android::media

