#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media::midi
{
	class MidiDeviceInfo;
}
namespace android::media::midi
{
	class MidiDeviceStatus;
}

namespace android::media::midi
{
	class MidiDeviceService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MidiDeviceService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		MidiDeviceService(QJniObject obj);
		
		// Constructors
		MidiDeviceService();
		
		// Methods
		android::media::midi::MidiDeviceInfo getDeviceInfo();
		jarray getOutputPortReceivers();
		__JniBaseClass onBind(android::content::Intent arg0);
		void onClose();
		void onCreate();
		void onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0);
		jarray onGetInputPortReceivers();
	};
} // namespace android::media::midi

