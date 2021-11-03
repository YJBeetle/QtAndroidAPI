#include "../../../JArray.hpp"
#include "../../content/Intent.hpp"
#include "./MidiDeviceInfo.hpp"
#include "./MidiDeviceStatus.hpp"
#include "../../../JString.hpp"
#include "./MidiDeviceService.hpp"

namespace android::media::midi
{
	// Fields
	JString MidiDeviceService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	MidiDeviceService::MidiDeviceService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	MidiDeviceService::MidiDeviceService()
		: android::app::Service(
			"android.media.midi.MidiDeviceService",
			"()V"
		) {}
	
	// Methods
	android::media::midi::MidiDeviceInfo MidiDeviceService::getDeviceInfo()
	{
		return callObjectMethod(
			"getDeviceInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	JArray MidiDeviceService::getOutputPortReceivers()
	{
		return callObjectMethod(
			"getOutputPortReceivers",
			"()[Landroid/media/midi/MidiReceiver;"
		);
	}
	JObject MidiDeviceService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void MidiDeviceService::onClose()
	{
		callMethod<void>(
			"onClose",
			"()V"
		);
	}
	void MidiDeviceService::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void MidiDeviceService::onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0)
	{
		callMethod<void>(
			"onDeviceStatusChanged",
			"(Landroid/media/midi/MidiDeviceStatus;)V",
			arg0.object()
		);
	}
	JArray MidiDeviceService::onGetInputPortReceivers()
	{
		return callObjectMethod(
			"onGetInputPortReceivers",
			"()[Landroid/media/midi/MidiReceiver;"
		);
	}
} // namespace android::media::midi

