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
	class HostApduService : public android::app::Service
	{
	public:
		// Fields
		static jint DEACTIVATION_DESELECTED();
		static jint DEACTIVATION_LINK_LOSS();
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		HostApduService(QAndroidJniObject obj);
		// Constructors
		HostApduService();
		
		// Methods
		void notifyUnhandled();
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onDeactivated(jint arg0);
		jbyteArray processCommandApdu(jbyteArray arg0, android::os::Bundle arg1);
		void sendResponseApdu(jbyteArray arg0);
	};
} // namespace android::nfc::cardemulation

