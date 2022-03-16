#pragma once

#include "../app/Service.def.hpp"

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
class JString;

namespace android::telecom
{
	class CallRedirectionService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallRedirectionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CallRedirectionService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		CallRedirectionService();
		
		// Methods
		void cancelCall() const;
		JObject onBind(android::content::Intent arg0) const;
		void onPlaceCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2) const;
		jboolean onUnbind(android::content::Intent arg0) const;
		void placeCallUnmodified() const;
		void redirectCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2) const;
	};
} // namespace android::telecom

