#include "./Equalizer_Settings.hpp"

namespace android::media::audiofx
{
	// Fields
	jshortArray Equalizer_Settings::bandLevels()
	{
		return __thiz.getObjectField(
			"bandLevels",
			"[S"
		).object<jshortArray>();
	}
	jshort Equalizer_Settings::curPreset()
	{
		return __thiz.getField<jshort>(
			"curPreset"
		);
	}
	jshort Equalizer_Settings::numBands()
	{
		return __thiz.getField<jshort>(
			"numBands"
		);
	}
	
	Equalizer_Settings::Equalizer_Settings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Equalizer_Settings::Equalizer_Settings()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Equalizer$Settings",
			"()V"
		);
	}
	Equalizer_Settings::Equalizer_Settings(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Equalizer$Settings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Equalizer_Settings::Equalizer_Settings(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Equalizer$Settings",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring Equalizer_Settings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

