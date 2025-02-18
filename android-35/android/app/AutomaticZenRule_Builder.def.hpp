#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class AutomaticZenRule;
}
namespace android::content
{
	class ComponentName;
}
namespace android::net
{
	class Uri;
}
namespace android::service::notification
{
	class ZenDeviceEffects;
}
namespace android::service::notification
{
	class ZenPolicy;
}
class JString;

namespace android::app
{
	class AutomaticZenRule_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AutomaticZenRule_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AutomaticZenRule_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AutomaticZenRule_Builder(android::app::AutomaticZenRule arg0);
		AutomaticZenRule_Builder(JString arg0, android::net::Uri arg1);
		
		// Methods
		android::app::AutomaticZenRule build() const;
		android::app::AutomaticZenRule_Builder setConditionId(android::net::Uri arg0) const;
		android::app::AutomaticZenRule_Builder setConfigurationActivity(android::content::ComponentName arg0) const;
		android::app::AutomaticZenRule_Builder setDeviceEffects(android::service::notification::ZenDeviceEffects arg0) const;
		android::app::AutomaticZenRule_Builder setEnabled(jboolean arg0) const;
		android::app::AutomaticZenRule_Builder setIconResId(jint arg0) const;
		android::app::AutomaticZenRule_Builder setInterruptionFilter(jint arg0) const;
		android::app::AutomaticZenRule_Builder setManualInvocationAllowed(jboolean arg0) const;
		android::app::AutomaticZenRule_Builder setName(JString arg0) const;
		android::app::AutomaticZenRule_Builder setOwner(android::content::ComponentName arg0) const;
		android::app::AutomaticZenRule_Builder setTriggerDescription(JString arg0) const;
		android::app::AutomaticZenRule_Builder setType(jint arg0) const;
		android::app::AutomaticZenRule_Builder setZenPolicy(android::service::notification::ZenPolicy arg0) const;
	};
} // namespace android::app

