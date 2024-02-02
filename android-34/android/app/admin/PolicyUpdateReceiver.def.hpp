#pragma once

#include "../../content/BroadcastReceiver.def.hpp"

namespace android::app::admin
{
	class PolicyUpdateResult;
}
namespace android::app::admin
{
	class TargetUser;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::app::admin
{
	class PolicyUpdateReceiver : public android::content::BroadcastReceiver
	{
	public:
		// Fields
		static JString ACTION_DEVICE_POLICY_CHANGED();
		static JString ACTION_DEVICE_POLICY_SET_RESULT();
		static JString EXTRA_ACCOUNT_TYPE();
		static JString EXTRA_INTENT_FILTER();
		static JString EXTRA_PACKAGE_NAME();
		static JString EXTRA_PERMISSION_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit PolicyUpdateReceiver(const char *className, const char *sig, Ts...agv) : android::content::BroadcastReceiver(className, sig, std::forward<Ts>(agv)...) {}
		PolicyUpdateReceiver(QJniObject obj) : android::content::BroadcastReceiver(obj) {}
		
		// Constructors
		PolicyUpdateReceiver();
		
		// Methods
		void onPolicyChanged(android::content::Context arg0, JString arg1, android::os::Bundle arg2, android::app::admin::TargetUser arg3, android::app::admin::PolicyUpdateResult arg4) const;
		void onPolicySetResult(android::content::Context arg0, JString arg1, android::os::Bundle arg2, android::app::admin::TargetUser arg3, android::app::admin::PolicyUpdateResult arg4) const;
		void onReceive(android::content::Context arg0, android::content::Intent arg1) const;
	};
} // namespace android::app::admin

