#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class ActivityManager_TaskDescription;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Intent;
}
class JString;

namespace android::app
{
	class TaskInfo : public JObject
	{
	public:
		// Fields
		android::content::ComponentName baseActivity();
		android::content::Intent baseIntent();
		jboolean isRunning();
		jint numActivities();
		android::content::ComponentName origActivity();
		android::app::ActivityManager_TaskDescription taskDescription();
		jint taskId();
		android::content::ComponentName topActivity();
		
		// QJniObject forward
		template<typename ...Ts> explicit TaskInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TaskInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean isVisible() const;
		JString toString() const;
	};
} // namespace android::app

