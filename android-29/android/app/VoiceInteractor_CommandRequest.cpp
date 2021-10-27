#include "../os/Bundle.hpp"
#include "./VoiceInteractor_CommandRequest.hpp"

namespace android::app
{
	// Fields
	
	VoiceInteractor_CommandRequest::VoiceInteractor_CommandRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VoiceInteractor_CommandRequest::VoiceInteractor_CommandRequest(jstring &arg0, android::os::Bundle &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$CommandRequest",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	VoiceInteractor_CommandRequest::VoiceInteractor_CommandRequest(const QString &arg0, android::os::Bundle &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$CommandRequest",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void VoiceInteractor_CommandRequest::onCommandResult(jboolean arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onCommandResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::app

