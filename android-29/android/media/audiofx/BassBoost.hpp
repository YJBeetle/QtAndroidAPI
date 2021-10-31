#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AudioEffect.hpp"

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
		BassBoost(QAndroidJniObject obj);
		
		// Constructors
		BassBoost(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject getProperties();
		jshort getRoundedStrength();
		jboolean getStrengthSupported();
		void setParameterListener(__JniBaseClass arg0);
		void setProperties(android::media::audiofx::BassBoost_Settings arg0);
		void setStrength(jshort arg0);
	};
} // namespace android::media::audiofx

