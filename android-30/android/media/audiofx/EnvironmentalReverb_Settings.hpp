#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class EnvironmentalReverb_Settings : public __JniBaseClass
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
		template<typename ...Ts> explicit EnvironmentalReverb_Settings(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EnvironmentalReverb_Settings(QAndroidJniObject obj);
		
		// Constructors
		EnvironmentalReverb_Settings();
		EnvironmentalReverb_Settings(jstring arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::media::audiofx

