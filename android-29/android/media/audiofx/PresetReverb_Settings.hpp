#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class PresetReverb_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshort preset();
		
		// QJniObject forward
		template<typename ...Ts> explicit PresetReverb_Settings(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PresetReverb_Settings(QJniObject obj);
		
		// Constructors
		PresetReverb_Settings();
		PresetReverb_Settings(jstring arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::media::audiofx

