#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Activity;
}
namespace android::app
{
	class Instrumentation_ActivityResult;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentFilter;
}
class JString;

namespace android::app
{
	class Instrumentation_ActivityMonitor : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Instrumentation_ActivityMonitor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Instrumentation_ActivityMonitor(QAndroidJniObject obj);
		
		// Constructors
		Instrumentation_ActivityMonitor();
		Instrumentation_ActivityMonitor(android::content::IntentFilter arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		Instrumentation_ActivityMonitor(JString arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		
		// Methods
		android::content::IntentFilter getFilter() const;
		jint getHits() const;
		android::app::Activity getLastActivity() const;
		android::app::Instrumentation_ActivityResult getResult() const;
		jboolean isBlocking() const;
		android::app::Instrumentation_ActivityResult onStartActivity(android::content::Intent arg0) const;
		android::app::Activity waitForActivity() const;
		android::app::Activity waitForActivityWithTimeout(jlong arg0) const;
	};
} // namespace android::app

