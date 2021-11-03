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
	class Call_Details;
}
namespace android::telecom
{
	class CallScreeningService_CallResponse;
}

namespace android::telecom
{
	class CallScreeningService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CallScreeningService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CallScreeningService(QAndroidJniObject obj);
		
		// Constructors
		CallScreeningService();
		
		// Methods
		JObject onBind(android::content::Intent arg0);
		void onScreenCall(android::telecom::Call_Details arg0);
		jboolean onUnbind(android::content::Intent arg0);
		void respondToCall(android::telecom::Call_Details arg0, android::telecom::CallScreeningService_CallResponse arg1);
	};
} // namespace android::telecom

