#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::audiofx
{
	class PresetReverb_Settings : public JObject
	{
	public:
		// Fields
		jshort preset();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PresetReverb_Settings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PresetReverb_Settings(QAndroidJniObject obj);
		
		// Constructors
		PresetReverb_Settings();
		PresetReverb_Settings(JString arg0);
		
		// Methods
		JString toString() const;
	};
} // namespace android::media::audiofx

