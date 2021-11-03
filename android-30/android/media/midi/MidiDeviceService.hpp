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
		android::media::midi::MidiDeviceInfo getDeviceInfo() const;
		JArray getOutputPortReceivers() const;
		JObject onBind(android::content::Intent arg0) const;
		void onClose() const;
		void onCreate() const;
		void onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0) const;
		JArray onGetInputPortReceivers() const;
	};
} // namespace android::media::midi

