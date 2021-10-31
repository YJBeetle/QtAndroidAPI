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
	BassBoost_Settings::BassBoost_Settings(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BassBoost_Settings::BassBoost_Settings()
		: __JniBaseClass(
			"android.media.audiofx.BassBoost$Settings",
			"()V"
		) {}
	BassBoost_Settings::BassBoost_Settings(jstring arg0)
		: __JniBaseClass(
			"android.media.audiofx.BassBoost$Settings",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring BassBoost_Settings::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

