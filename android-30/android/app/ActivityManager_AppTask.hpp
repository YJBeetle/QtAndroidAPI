#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class ActivityManager_RecentTaskInfo;
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

namespace android::app
{
	class ActivityManager_AppTask : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityManager_AppTask(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_AppTask(QJniObject obj);
		
		// Constructors
		
		// Methods
		void finishAndRemoveTask() const;
		android::app::ActivityManager_RecentTaskInfo getTaskInfo() const;
		void moveToFront() const;
		void setExcludeFromRecents(jboolean arg0) const;
		void startActivity(android::content::Context arg0, android::content::Intent arg1, android::os::Bundle arg2) const;
	};
} // namespace android::app

