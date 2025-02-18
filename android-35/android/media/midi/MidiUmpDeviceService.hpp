#pragma once

#include "../../content/Intent.def.hpp"
#include "./MidiDeviceInfo.def.hpp"
#include "./MidiDeviceStatus.def.hpp"
#include "../../../JString.hpp"
#include "./MidiUmpDeviceService.def.hpp"

namespace android::media::midi
{
	// Fields
	inline JString MidiUmpDeviceService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.media.midi.MidiUmpDeviceService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline MidiUmpDeviceService::MidiUmpDeviceService()
		: android::app::Service(
			"android.media.midi.MidiUmpDeviceService",
			"()V"
		) {}
	
	// Methods
	inline android::media::midi::MidiDeviceInfo MidiUmpDeviceService::getDeviceInfo() const
	{
		return callObjectMethod(
			"getDeviceInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	inline JObject MidiUmpDeviceService::getOutputPortReceivers() const
	{
		return callObjectMethod(
			"getOutputPortReceivers",
			"()Ljava/util/List;"
		);
	}
	inline JObject MidiUmpDeviceService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void MidiUmpDeviceService::onClose() const
	{
		callMethod<void>(
			"onClose",
			"()V"
		);
	}
	inline void MidiUmpDeviceService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline void MidiUmpDeviceService::onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0) const
	{
		callMethod<void>(
			"onDeviceStatusChanged",
			"(Landroid/media/midi/MidiDeviceStatus;)V",
			arg0.object()
		);
	}
	inline JObject MidiUmpDeviceService::onGetInputPortReceivers() const
	{
		return callObjectMethod(
			"onGetInputPortReceivers",
			"()Ljava/util/List;"
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
