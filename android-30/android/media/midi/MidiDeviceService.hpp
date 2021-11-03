#pragma once

#include "../../app/Service.hpp"

class JArray;
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
class JString;

namespace android::media::midi
{
	class MidiDeviceService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MidiDeviceService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		MidiDeviceService(QJniObject obj);
		
		// Constructors
		MidiDeviceService();
		
		// Methods
		android::media::midi::MidiDeviceInfo getDeviceInfo();
		JArray getOutputPortReceivers();
		JObject onBind(android::content::Intent arg0);
		void onClose();
		void onCreate();
		void onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0);
		JArray onGetInputPortReceivers();
	};
} // namespace android::media::midi

