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
		return getStaticObjectField(
			"android.telecom.InCallService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	InCallService::InCallService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	InCallService::InCallService()
		: android::app::Service(
			"android.telecom.InCallService",
			"()V"
		) {}
	
	// Methods
	jboolean InCallService::canAddCall()
	{
		return callMethod<jboolean>(
			"canAddCall",
			"()Z"
		);
	}
	android::telecom::CallAudioState InCallService::getCallAudioState()
	{
		return callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;"
		);
	}
	__JniBaseClass InCallService::getCalls()
	{
		return callObjectMethod(
			"getCalls",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass InCallService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void InCallService::onBringToForeground(jboolean arg0)
	{
		callMethod<void>(
			"onBringToForeground",
			"(Z)V",
			arg0
		);
	}
	void InCallService::onCallAdded(android::telecom::Call arg0)
	{
		callMethod<void>(
			"onCallAdded",
			"(Landroid/telecom/Call;)V",
			arg0.object()
		);
	}
	void InCallService::onCallAudioStateChanged(android::telecom::CallAudioState arg0)
	{
		callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	void InCallService::onCallRemoved(android::telecom::Call arg0)
	{
		callMethod<void>(
			"onCallRemoved",
			"(Landroid/telecom/Call;)V",
			arg0.object()
		);
	}
	void InCallService::onCanAddCallChanged(jboolean arg0)
	{
		callMethod<void>(
			"onCanAddCallChanged",
			"(Z)V",
			arg0
		);
	}
	void InCallService::onConnectionEvent(android::telecom::Call arg0, jstring arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"onConnectionEvent",
			"(Landroid/telecom/Call;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void InCallService::onSilenceRinger()
	{
		callMethod<void>(
			"onSilenceRinger",
			"()V"
		);
	}
	jboolean InCallService::onUnbind(android::content::Intent arg0)
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	void InCallService::requestBluetoothAudio(android::bluetooth::BluetoothDevice arg0)
	{
		callMethod<void>(
			"requestBluetoothAudio",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
	void InCallService::setAudioRoute(jint arg0)
	{
		callMethod<void>(
			"setAudioRoute",
			"(I)V",
			arg0
		);
	}
	void InCallService::setMuted(jboolean arg0)
	{
		callMethod<void>(
			"setMuted",
			"(Z)V",
			arg0
		);
	}
} // namespace android::telecom

