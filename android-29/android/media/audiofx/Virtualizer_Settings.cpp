#include "./Virtualizer_Settings.hpp"

namespace android::media::audiofx
{
	// Fields
	jshort Virtualizer_Settings::strength()
	{
		return __thiz.getField<jshort>(
			"strength"
		);
	}
	
	Virtualizer_Settings::Virtualizer_Settings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Virtualizer_Settings::Virtualizer_Settings()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Virtualizer$Settings",
			"()V"
		);
	}
	Virtualizer_Settings::Virtualizer_Settings(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Virtualizer$Settings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	jstring Virtualizer_Settings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

