#pragma once

#include "../../../JObject.hpp"


namespace android::media::audiofx
{
	class Equalizer_Settings : public JObject
	{
	public:
		// Fields
		jshortArray bandLevels();
		jshort curPreset();
		jshort numBands();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Equalizer_Settings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Equalizer_Settings(QAndroidJniObject obj);
		
		// Constructors
		Equalizer_Settings();
		Equalizer_Settings(jstring arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::media::audiofx

