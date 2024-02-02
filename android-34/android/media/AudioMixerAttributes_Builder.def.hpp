#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioFormat;
}
namespace android::media
{
	class AudioMixerAttributes;
}

namespace android::media
{
	class AudioMixerAttributes_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioMixerAttributes_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioMixerAttributes_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AudioMixerAttributes_Builder(android::media::AudioFormat arg0);
		
		// Methods
		android::media::AudioMixerAttributes build() const;
		android::media::AudioMixerAttributes_Builder setMixerBehavior(jint arg0) const;
	};
} // namespace android::media

