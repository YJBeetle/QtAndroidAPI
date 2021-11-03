#pragma once

#include "./Service.hpp"

namespace android::content
{
	class Intent;
}
class JString;

namespace android::app
{
	class IntentService : public android::app::Service
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntentService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		IntentService(QJniObject obj);
		
		// Constructors
		IntentService(JString arg0);
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		void onCreate() const;
		void onDestroy() const;
		void onStart(android::content::Intent arg0, jint arg1) const;
		jint onStartCommand(android::content::Intent arg0, jint arg1, jint arg2) const;
		void setIntentRedelivery(jboolean arg0) const;
	};
} // namespace android::app

