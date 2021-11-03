#pragma once

#include "../../../JObject.hpp"
#include "./AudioEffect.hpp"

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
		Virtualizer(QAndroidJniObject obj);
		
		// Constructors
		Virtualizer(jint arg0, jint arg1);
		
		// Methods
		jboolean canVirtualize(jint arg0, jint arg1);
		jboolean forceVirtualizationMode(jint arg0);
		android::media::audiofx::Virtualizer_Settings getProperties();
		jshort getRoundedStrength();
		jboolean getSpeakerAngles(jint arg0, jint arg1, jintArray arg2);
		jboolean getStrengthSupported();
		jint getVirtualizationMode();
		void setParameterListener(JObject arg0);
		void setProperties(android::media::audiofx::Virtualizer_Settings arg0);
		void setStrength(jshort arg0);
	};
} // namespace android::media::audiofx

