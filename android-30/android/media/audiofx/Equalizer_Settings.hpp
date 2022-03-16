#pragma once

#include "../../../JObject.hpp"

class JShortArray;
class JString;

namespace android::media::audiofx
{
	class Equalizer_Settings : public JObject
	{
	public:
		// Fields
		JShortArray bandLevels();
		jshort curPreset();
		jshort numBands();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Equalizer_Settings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Equalizer_Settings(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Equalizer_Settings();
		Equalizer_Settings(JString arg0);
		
		// Methods
		JString toString() const;
	};
} // namespace android::media::audiofx

