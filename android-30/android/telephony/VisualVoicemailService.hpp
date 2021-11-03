#pragma once

#include "../../JObject.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
namespace android::telephony
{
	class VisualVoicemailService_VisualVoicemailTask;
}
namespace android::telephony
{
	class VisualVoicemailSms;
}

namespace android::telephony
{
	class VisualVoicemailService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit VisualVoicemailService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailService(QJniObject obj);
		
		// Constructors
		VisualVoicemailService();
		
		// Methods
		JObject onBind(android::content::Intent arg0);
		void onCellServiceConnected(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1);
		void onSimRemoved(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1);
		void onSmsReceived(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telephony::VisualVoicemailSms arg1);
		void onStopped(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0);
	};
} // namespace android::telephony

