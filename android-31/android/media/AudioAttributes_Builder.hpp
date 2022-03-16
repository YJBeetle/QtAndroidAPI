#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioAttributes;
}

namespace android::media
{
	class AudioAttributes_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioAttributes_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioAttributes_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AudioAttributes_Builder();
		AudioAttributes_Builder(android::media::AudioAttributes arg0);
		
		// Methods
		android::media::AudioAttributes build() const;
		android::media::AudioAttributes_Builder setAllowedCapturePolicy(jint arg0) const;
		android::media::AudioAttributes_Builder setContentType(jint arg0) const;
		android::media::AudioAttributes_Builder setFlags(jint arg0) const;
		android::media::AudioAttributes_Builder setHapticChannelsMuted(jboolean arg0) const;
		android::media::AudioAttributes_Builder setLegacyStreamType(jint arg0) const;
		android::media::AudioAttributes_Builder setUsage(jint arg0) const;
	};
} // namespace android::media

