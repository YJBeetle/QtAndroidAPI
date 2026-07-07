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
		
		// QJniObject forward
		template<typename ...Ts> explicit AppOpsManager_OnOpNotedCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppOpsManager_OnOpNotedCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppOpsManager_OnOpNotedCallback();
		
		// Methods
		void onAsyncNoted(android::app::AsyncNotedAppOp arg0) const;
		void onNoted(android::app::SyncNotedAppOp arg0) const;
		void onSelfNoted(android::app::SyncNotedAppOp arg0) const;
	};
} // namespace android::app

