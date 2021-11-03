#include "../../../JString.hpp"
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
	
	// QJniObject forward
	Virtualizer_Settings::Virtualizer_Settings(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Virtualizer_Settings::Virtualizer_Settings()
		: JObject(
			"android.media.audiofx.Virtualizer$Settings",
			"()V"
		) {}
	Virtualizer_Settings::Virtualizer_Settings(JString arg0)
		: JObject(
			"android.media.audiofx.Virtualizer$Settings",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString Virtualizer_Settings::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

