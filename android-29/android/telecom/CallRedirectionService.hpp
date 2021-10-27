#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		CallRedirectionService(QAndroidJniObject obj);
		// Constructors
		CallRedirectionService();
		
		// Methods
		void cancelCall();
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onPlaceCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2);
		jboolean onUnbind(android::content::Intent arg0);
		void placeCallUnmodified();
		void redirectCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2);
	};
} // namespace android::telecom

