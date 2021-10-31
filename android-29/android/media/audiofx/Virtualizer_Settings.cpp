#include "./Virtualizer_Settings.hpp"

namespace android::media::audiofx
{
	// Fields
	jshort Virtualizer_Settings::strength()
	{
		return getField<jshort>(
			"strength"
		);
	}
	
	// QAndroidJniObject forward
	Virtualizer_Settings::Virtualizer_Settings(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Virtualizer_Settings::Virtualizer_Settings()
		: __JniBaseClass(
			"android.media.audiofx.Virtualizer$Settings",
			"()V"
		) {}
	Virtualizer_Settings::Virtualizer_Settings(jstring arg0)
		: __JniBaseClass(
			"android.media.audiofx.Virtualizer$Settings",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring Virtualizer_Settings::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

