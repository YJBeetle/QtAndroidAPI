#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class Equalizer_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshortArray bandLevels();
		jshort curPreset();
		jshort numBands();
		
		Equalizer_Settings(QAndroidJniObject obj);
		// Constructors
		Equalizer_Settings();
		Equalizer_Settings(jstring arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::media::audiofx

