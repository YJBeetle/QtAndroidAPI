#pragma once

#include "../../app/Service.hpp"

class JArray;
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::service::notification
{
	class Condition;
}
class JString;

namespace android::service::notification
{
	class ConditionProviderService : public android::app::Service
	{
	public:
		// Fields
		static JString EXTRA_RULE_ID();
		static JString META_DATA_CONFIGURATION_ACTIVITY();
		static JString META_DATA_RULE_INSTANCE_LIMIT();
		static JString META_DATA_RULE_TYPE();
		static JString SERVICE_INTERFACE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConditionProviderService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		ConditionProviderService(QAndroidJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		ConditionProviderService();
		
		// Methods
		static void requestRebind(android::content::ComponentName arg0);
		void notifyCondition(android::service::notification::Condition arg0) const;
		void notifyConditions(JArray arg0) const;
		JObject onBind(android::content::Intent arg0) const;
		void onConnected() const;
		void onRequestConditions(jint arg0) const;
		void onSubscribe(android::net::Uri arg0) const;
		void onUnsubscribe(android::net::Uri arg0) const;
		void requestUnbind() const;
	};
} // namespace android::service::notification

