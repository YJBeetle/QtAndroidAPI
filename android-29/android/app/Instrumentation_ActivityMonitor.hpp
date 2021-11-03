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

namespace android::app
{
	class Instrumentation_ActivityMonitor : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Instrumentation_ActivityMonitor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Instrumentation_ActivityMonitor(QJniObject obj);
		
		// Constructors
		Instrumentation_ActivityMonitor();
		Instrumentation_ActivityMonitor(android::content::IntentFilter arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		Instrumentation_ActivityMonitor(jstring arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		
		// Methods
		android::content::IntentFilter getFilter();
		jint getHits();
		android::app::Activity getLastActivity();
		android::app::Instrumentation_ActivityResult getResult();
		jboolean isBlocking();
		android::app::Instrumentation_ActivityResult onStartActivity(android::content::Intent arg0);
		android::app::Activity waitForActivity();
		android::app::Activity waitForActivityWithTimeout(jlong arg0);
	};
} // namespace android::app

