#pragma once

#include "../../app/Service.hpp"

class JByteArray;
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::nfc::cardemulation
{
	class HostNfcFService : public android::app::Service
	{
	public:
		// Fields
		static jint DEACTIVATION_LINK_LOSS();
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HostNfcFService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		HostNfcFService(QAndroidJniObject obj);
		
		// Constructors
		HostNfcFService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		void onDeactivated(jint arg0) const;
		JByteArray processNfcFPacket(JByteArray arg0, android::os::Bundle arg1) const;
		void sendResponsePacket(JByteArray arg0) const;
	};
} // namespace android::nfc::cardemulation

