#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::audiofx
{
	class EnvironmentalReverb_Settings : public JObject
	{
	public:
		// Fields
		jshort decayHFRatio();
		jint decayTime();
		jshort density();
		jshort diffusion();
		jint reflectionsDelay();
		jshort reflectionsLevel();
		jint reverbDelay();
		jshort reverbLevel();
		jshort roomHFLevel();
		jshort roomLevel();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EnvironmentalReverb_Settings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EnvironmentalReverb_Settings(QAndroidJniObject obj);
		
		// Constructors
		EnvironmentalReverb_Settings();
		EnvironmentalReverb_Settings(JString arg0);
		
		// Methods
		JString toString();
	};
} // namespace android::media::audiofx

