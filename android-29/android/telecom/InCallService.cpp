#include "../bluetooth/BluetoothDevice.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "./Call.hpp"
#include "./CallAudioState.hpp"
#include "./InCallService.hpp"

namespace android::telecom
{
	// Fields
	jstring InCallService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.InCallService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	InCallService::InCallService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InCallService::InCallService()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.InCallService",
			"()V"
		);
	}
	
	// Methods
	jboolean InCallService::canAddCall()
	{
		return __thiz.callMethod<jboolean>(
			"canAddCall",
			"()Z"
		);
	}
	QAndroidJniObject InCallService::getCallAudioState()
	{
		return __thiz.callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;"
		);
	}
	QAndroidJniObject InCallService::getCalls()
	{
		return __thiz.callObjectMethod(
			"getCalls",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject InCallService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void InCallService::onBringToForeground(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onBringToForeground",
			"(Z)V",
			arg0
		);
	}
	void InCallService::onCallAdded(android::telecom::Call arg0)
	{
		__thiz.callMethod<void>(
			"onCallAdded",
			"(Landroid/telecom/Call;)V",
			arg0.__jniObject().object()
		);
	}
	void InCallService::onCallAudioStateChanged(android::telecom::CallAudioState arg0)
	{
		__thiz.callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.__jniObject().object()
		);
	}
	void InCallService::onCallRemoved(android::telecom::Call arg0)
	{
		__thiz.callMethod<void>(
			"onCallRemoved",
			"(Landroid/telecom/Call;)V",
			arg0.__jniObject().object()
		);
	}
	void InCallService::onCanAddCallChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onCanAddCallChanged",
			"(Z)V",
			arg0
		);
	}
	void InCallService::onConnectionEvent(android::telecom::Call arg0, jstring arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onConnectionEvent",
			"(Landroid/telecom/Call;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void InCallService::onConnectionEvent(android::telecom::Call arg0, const QString &arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onConnectionEvent",
			"(Landroid/telecom/Call;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void InCallService::onSilenceRinger()
	{
		__thiz.callMethod<void>(
			"onSilenceRinger",
			"()V"
		);
	}
	jboolean InCallService::onUnbind(android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	void InCallService::requestBluetoothAudio(android::bluetooth::BluetoothDevice arg0)
	{
		__thiz.callMethod<void>(
			"requestBluetoothAudio",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.__jniObject().object()
		);
	}
	void InCallService::setAudioRoute(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioRoute",
			"(I)V",
			arg0
		);
	}
	void InCallService::setMuted(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMuted",
			"(Z)V",
			arg0
		);
	}
} // namespace android::telecom

