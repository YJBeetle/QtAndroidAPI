#include "./VisualVoicemailSmsFilterSettings.hpp"
#include "./VisualVoicemailSmsFilterSettings_Builder.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	VisualVoicemailSmsFilterSettings_Builder::VisualVoicemailSmsFilterSettings_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VisualVoicemailSmsFilterSettings_Builder::VisualVoicemailSmsFilterSettings_Builder()
		: __JniBaseClass(
			"android.telephony.VisualVoicemailSmsFilterSettings$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/VisualVoicemailSmsFilterSettings;"
		);
	}
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::setClientPrefix(jstring arg0)
	{
		return callObjectMethod(
			"setClientPrefix",
			"(Ljava/lang/String;)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::setDestinationPort(jint arg0)
	{
		return callObjectMethod(
			"setDestinationPort",
			"(I)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::setOriginatingNumbers(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setOriginatingNumbers",
			"(Ljava/util/List;)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0.object()
		);
	}
} // namespace android::telephony
