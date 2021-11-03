#pragma once

#include "../app/Activity.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::accounts
{
	class AccountAuthenticatorActivity : public android::app::Activity
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccountAuthenticatorActivity(const char *className, const char *sig, Ts...agv) : android::app::Activity(className, sig, std::forward<Ts>(agv)...) {}
		AccountAuthenticatorActivity(QAndroidJniObject obj);
		
		// Constructors
		AccountAuthenticatorActivity();
		
		// Methods
		void finish() const;
		void setAccountAuthenticatorResult(android::os::Bundle arg0) const;
	};
} // namespace android::accounts

