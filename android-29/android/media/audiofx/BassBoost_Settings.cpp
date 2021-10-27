#include "./BassBoost_Settings.hpp"

namespace android::media::audiofx
{
	// Fields
	jshort BassBoost_Settings::strength()
	{
		return __thiz.getField<jshort>(
			"strength"
		);
	}
	
	BassBoost_Settings::BassBoost_Settings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BassBoost_Settings::BassBoost_Settings()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.BassBoost$Settings",
			"()V"
		);
	}
	BassBoost_Settings::BassBoost_Settings(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.BassBoost$Settings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	BassBoost_Settings::BassBoost_Settings(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.BassBoost$Settings",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring BassBoost_Settings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

