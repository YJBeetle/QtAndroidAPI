#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::app
{
	class Activity;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class ComponentName;
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
class JClass;

namespace android::app
{
	class TaskStackBuilder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TaskStackBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TaskStackBuilder(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::TaskStackBuilder create(android::content::Context arg0);
		android::app::TaskStackBuilder addNextIntent(android::content::Intent arg0) const;
		android::app::TaskStackBuilder addNextIntentWithParentStack(android::content::Intent arg0) const;
		android::app::TaskStackBuilder addParentStack(android::app::Activity arg0) const;
		android::app::TaskStackBuilder addParentStack(android::content::ComponentName arg0) const;
		android::app::TaskStackBuilder addParentStack(JClass arg0) const;
		android::content::Intent editIntentAt(jint arg0) const;
		jint getIntentCount() const;
		JArray getIntents() const;
		android::app::PendingIntent getPendingIntent(jint arg0, jint arg1) const;
		android::app::PendingIntent getPendingIntent(jint arg0, jint arg1, android::os::Bundle arg2) const;
		void startActivities() const;
		void startActivities(android::os::Bundle arg0) const;
	};
} // namespace android::app

