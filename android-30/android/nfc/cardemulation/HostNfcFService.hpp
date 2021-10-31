#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}

namespace android::nfc::cardemulation
{
	class HostNfcFService : public android::app::Service
	{
	public:
		// Fields
		static jint DEACTIVATION_LINK_LOSS();
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HostNfcFService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		HostNfcFService(QAndroidJniObject obj);
		
		// Constructors
		HostNfcFService();
		
		// Methods
		__JniBaseClass onBind(android::content::Intent arg0);
		void onDeactivated(jint arg0);
		jbyteArray processNfcFPacket(jbyteArray arg0, android::os::Bundle arg1);
		void sendResponsePacket(jbyteArray arg0);
	};
} // namespace android::nfc::cardemulation
