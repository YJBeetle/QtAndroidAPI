#include "./Equalizer_Settings.hpp"

namespace android::media::audiofx
{
	// Fields
	jshortArray Equalizer_Settings::bandLevels()
	{
		return getObjectField(
			"bandLevels",
			"[S"
		).object<jshortArray>();
	}
	jshort Equalizer_Settings::curPreset()
	{
		return getField<jshort>(
			"curPreset"
		);
	}
	jshort Equalizer_Settings::numBands()
	{
		return getField<jshort>(
			"numBands"
		);
	}
	
	// QJniObject forward
	Equalizer_Settings::Equalizer_Settings(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Equalizer_Settings::Equalizer_Settings()
		: __JniBaseClass(
			"android.media.audiofx.Equalizer$Settings",
			"()V"
		) {}
	Equalizer_Settings::Equalizer_Settings(jstring arg0)
		: __JniBaseClass(
			"android.media.audiofx.Equalizer$Settings",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring Equalizer_Settings::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

