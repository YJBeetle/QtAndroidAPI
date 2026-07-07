#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaCodec;
}
namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class LoudnessCodecController : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LoudnessCodecController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LoudnessCodecController(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::LoudnessCodecController create(jint arg0);
		static android::media::LoudnessCodecController create(jint arg0, JObject arg1, JObject arg2);
		jboolean addMediaCodec(android::media::MediaCodec arg0) const;
		void close() const;
		android::os::Bundle getLoudnessCodecParams(android::media::MediaCodec arg0) const;
		void removeMediaCodec(android::media::MediaCodec arg0) const;
	};
} // namespace android::media

