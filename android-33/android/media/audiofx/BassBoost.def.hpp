#pragma once

#include "./AudioEffect.def.hpp"

namespace android::media::audiofx
{
	class BassBoost_Settings;
}

namespace android::media::audiofx
{
	class BassBoost : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_STRENGTH();
		static jint PARAM_STRENGTH_SUPPORTED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BassBoost(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		BassBoost(QAndroidJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
		
		// Constructors
		BassBoost(jint arg0, jint arg1);
		
		// Methods
		android::media::audiofx::BassBoost_Settings getProperties() const;
		jshort getRoundedStrength() const;
		jboolean getStrengthSupported() const;
		void setParameterListener(JObject arg0) const;
		void setProperties(android::media::audiofx::BassBoost_Settings arg0) const;
		void setStrength(jshort arg0) const;
	};
} // namespace android::media::audiofx

