#include "../../../JString.hpp"
#include "./BassBoost_Settings.hpp"

namespace android::media::audiofx
{
	// Fields
	jshort BassBoost_Settings::strength()
	{
		return getField<jshort>(
			"strength"
		);
	}
	
	// QJniObject forward
	BassBoost_Settings::BassBoost_Settings(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BassBoost_Settings::BassBoost_Settings()
		: JObject(
			"android.media.audiofx.BassBoost$Settings",
			"()V"
		) {}
	BassBoost_Settings::BassBoost_Settings(JString arg0)
		: JObject(
			"android.media.audiofx.BassBoost$Settings",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString BassBoost_Settings::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

