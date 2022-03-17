#pragma once

#include "../../../JArray.hpp"
#include "../../content/Intent.def.hpp"
#include "./MidiDeviceInfo.def.hpp"
#include "./MidiDeviceStatus.def.hpp"
#include "../../../JString.hpp"
#include "./MidiDeviceService.def.hpp"

namespace android::media::midi
{
	// Fields
	inline JString MidiDeviceService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline MidiDeviceService::MidiDeviceService()
		: android::app::Service(
			"android.media.midi.MidiDeviceService",
			"()V"
		) {}
	
	// Methods
	inline android::media::midi::MidiDeviceInfo MidiDeviceService::getDeviceInfo() const
	{
		return callObjectMethod(
			"getDeviceInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	inline JArray MidiDeviceService::getOutputPortReceivers() const
	{
		return callObjectMethod(
			"getOutputPortReceivers",
			"()[Landroid/media/midi/MidiReceiver;"
		);
	}
	inline JObject MidiDeviceService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void MidiDeviceService::onClose() const
	{
		callMethod<void>(
			"onClose",
			"()V"
		);
	}
	inline void MidiDeviceService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline void MidiDeviceService::onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0) const
	{
		callMethod<void>(
			"onDeviceStatusChanged",
			"(Landroid/media/midi/MidiDeviceStatus;)V",
			arg0.object()
		);
	}
	inline JArray MidiDeviceService::onGetInputPortReceivers() const
	{
		return callObjectMethod(
			"onGetInputPortReceivers",
			"()[Landroid/media/midi/MidiReceiver;"
		);
	}
} // namespace android::media::midi

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::midi;
#endif
