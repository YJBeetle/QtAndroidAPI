#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class PresetReverb_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshort preset();
		
		PresetReverb_Settings(QAndroidJniObject obj);
		// Constructors
		PresetReverb_Settings();
		PresetReverb_Settings(jstring &arg0);
		PresetReverb_Settings(const QString &arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::media::audiofx

