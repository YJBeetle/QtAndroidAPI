#pragma once

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
class JString;

namespace android::telecom
{
	class CallScreeningService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallScreeningService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CallScreeningService(QJniObject obj);
		
		// Constructors
		CallScreeningService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		void onScreenCall(android::telecom::Call_Details arg0) const;
		jboolean onUnbind(android::content::Intent arg0) const;
		void respondToCall(android::telecom::Call_Details arg0, android::telecom::CallScreeningService_CallResponse arg1) const;
	};
} // namespace android::telecom

