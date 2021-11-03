#pragma once

#include "../../JObject.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}

namespace android::telecom
{
	class CallRedirectionService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallRedirectionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CallRedirectionService(QJniObject obj);
		
		// Constructors
		CallRedirectionService();
		
		// Methods
		void cancelCall();
		JObject onBind(android::content::Intent arg0);
		void onPlaceCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2);
		jboolean onUnbind(android::content::Intent arg0);
		void placeCallUnmodified();
		void redirectCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2);
	};
} // namespace android::telecom

