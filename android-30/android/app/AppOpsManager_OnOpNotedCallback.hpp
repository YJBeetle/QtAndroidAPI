#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class AsyncNotedAppOp;
}
namespace android::app
{
	class SyncNotedAppOp;
}

namespace android::app
{
	class AppOpsManager_OnOpNotedCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppOpsManager_OnOpNotedCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppOpsManager_OnOpNotedCallback(QAndroidJniObject obj);
		
		// Constructors
		AppOpsManager_OnOpNotedCallback();
		
		// Methods
		void onAsyncNoted(android::app::AsyncNotedAppOp arg0);
		void onNoted(android::app::SyncNotedAppOp arg0);
		void onSelfNoted(android::app::SyncNotedAppOp arg0);
	};
} // namespace android::app

