#pragma once

#include "./AudioEffect.def.hpp"

class JIntArray;
namespace android::media::audiofx
{
	class Virtualizer_Settings;
}

namespace android::media::audiofx
{
	class Virtualizer : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_STRENGTH();
		static jint PARAM_STRENGTH_SUPPORTED();
		static jint VIRTUALIZATION_MODE_AUTO();
		static jint VIRTUALIZATION_MODE_BINAURAL();
		static jint VIRTUALIZATION_MODE_OFF();
		static jint VIRTUALIZATION_MODE_TRANSAURAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Virtualizer(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		Virtualizer(QAndroidJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
		
		// Constructors
		Virtualizer(jint arg0, jint arg1);
		
		// Methods
		jboolean canVirtualize(jint arg0, jint arg1) const;
		jboolean forceVirtualizationMode(jint arg0) const;
		android::media::audiofx::Virtualizer_Settings getProperties() const;
		jshort getRoundedStrength() const;
		jboolean getSpeakerAngles(jint arg0, jint arg1, JIntArray arg2) const;
		jboolean getStrengthSupported() const;
		jint getVirtualizationMode() const;
		void setParameterListener(JObject arg0) const;
		void setProperties(android::media::audiofx::Virtualizer_Settings arg0) const;
		void setStrength(jshort arg0) const;
	};
} // namespace android::media::audiofx

