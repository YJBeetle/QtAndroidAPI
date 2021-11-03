#include "./PresetReverb_Settings.hpp"

namespace android::media::audiofx
{
	// Fields
	jshort PresetReverb_Settings::preset()
	{
		return getField<jshort>(
			"preset"
		);
	}
	
	// QAndroidJniObject forward
	PresetReverb_Settings::PresetReverb_Settings(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PresetReverb_Settings::PresetReverb_Settings()
		: JObject(
			"android.media.audiofx.PresetReverb$Settings",
			"()V"
		) {}
	PresetReverb_Settings::PresetReverb_Settings(jstring arg0)
		: JObject(
			"android.media.audiofx.PresetReverb$Settings",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring PresetReverb_Settings::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

