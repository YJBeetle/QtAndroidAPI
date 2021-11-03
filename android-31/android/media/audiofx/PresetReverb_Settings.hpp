#pragma once

#include "../../../JObject.hpp"


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
		PresetReverb_Settings(jstring arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::media::audiofx

