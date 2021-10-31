#include "./VisualVoicemailSmsFilterSettings.hpp"
#include "./VisualVoicemailSmsFilterSettings_Builder.hpp"

namespace android::telephony
{
	// Fields
	
	VisualVoicemailSmsFilterSettings_Builder::VisualVoicemailSmsFilterSettings_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VisualVoicemailSmsFilterSettings_Builder::VisualVoicemailSmsFilterSettings_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.VisualVoicemailSmsFilterSettings$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/telephony/VisualVoicemailSmsFilterSettings;"
		);
	}
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::setClientPrefix(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setClientPrefix",
			"(Ljava/lang/String;)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::setDestinationPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setDestinationPort",
			"(I)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::setOriginatingNumbers(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setOriginatingNumbers",
			"(Ljava/util/List;)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telephony

