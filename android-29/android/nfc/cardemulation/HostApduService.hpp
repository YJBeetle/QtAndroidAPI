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
	class HostApduService : public android::app::Service
	{
	public:
		// Fields
		static jint DEACTIVATION_DESELECTED();
		static jint DEACTIVATION_LINK_LOSS();
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit HostApduService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		HostApduService(QJniObject obj);
		
		// Constructors
		HostApduService();
		
		// Methods
		void notifyUnhandled();
		JObject onBind(android::content::Intent arg0);
		void onDeactivated(jint arg0);
		JByteArray processCommandApdu(JByteArray arg0, android::os::Bundle arg1);
		void sendResponseApdu(JByteArray arg0);
	};
} // namespace android::nfc::cardemulation

