#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "./Service.hpp"

namespace android::content
{
	class Intent;
}

namespace android::app
{
	class IntentService : public android::app::Service
	{
	public:
		// Fields
		
		IntentService(QAndroidJniObject obj);
		// Constructors
		IntentService(jstring &arg0);
		IntentService(const QString &arg0);
		IntentService() = default;
		
		// Methods
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onCreate();
		void onDestroy();
		void onStart(android::content::Intent arg0, jint arg1);
		jint onStartCommand(android::content::Intent arg0, jint arg1, jint arg2);
		void setIntentRedelivery(jboolean arg0);
	};
} // namespace android::app

