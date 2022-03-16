#pragma once

#include "../os/Bundle.def.hpp"
#include "./AccountAuthenticatorActivity.def.hpp"

namespace android::accounts
{
	// Fields
	
	// Constructors
	inline AccountAuthenticatorActivity::AccountAuthenticatorActivity()
		: android::app::Activity(
			"android.accounts.AccountAuthenticatorActivity",
			"()V"
		) {}
	
	// Methods
	inline void AccountAuthenticatorActivity::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline void AccountAuthenticatorActivity::setAccountAuthenticatorResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setAccountAuthenticatorResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::accounts

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "../app/Activity.hpp"

