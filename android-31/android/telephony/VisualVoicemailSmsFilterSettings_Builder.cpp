#include "./VisualVoicemailSmsFilterSettings.hpp"
#include "./VisualVoicemailSmsFilterSettings_Builder.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	VisualVoicemailSmsFilterSettings_Builder::VisualVoicemailSmsFilterSettings_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	VisualVoicemailSmsFilterSettings_Builder::VisualVoicemailSmsFilterSettings_Builder()
		: JObject(
			"android.telephony.VisualVoicemailSmsFilterSettings$Builder",
			"()V"
		) {}
	
	// Methods
	android::telephony::VisualVoicemailSmsFilterSettings VisualVoicemailSmsFilterSettings_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/VisualVoicemailSmsFilterSettings;"
		);
	}
	android::telephony::VisualVoicemailSmsFilterSettings_Builder VisualVoicemailSmsFilterSettings_Builder::setClientPrefix(jstring arg0)
	{
		return callObjectMethod(
			"setClientPrefix",
			"(Ljava/lang/String;)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0
		);
	}
	android::telephony::VisualVoicemailSmsFilterSettings_Builder VisualVoicemailSmsFilterSettings_Builder::setDestinationPort(jint arg0)
	{
		return callObjectMethod(
			"setDestinationPort",
			"(I)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0
		);
	}
	android::telephony::VisualVoicemailSmsFilterSettings_Builder VisualVoicemailSmsFilterSettings_Builder::setOriginatingNumbers(JObject arg0)
	{
		return callObjectMethod(
			"setOriginatingNumbers",
			"(Ljava/util/List;)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0.object()
		);
	}
} // namespace android::telephony

