#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}

namespace android::location
{
	class SettingInjectorService : public android::app::Service
	{
	public:
		// Fields
		static jstring ACTION_INJECTED_SETTING_CHANGED();
		static jstring ACTION_SERVICE_INTENT();
		static jstring ATTRIBUTES_NAME();
		static jstring META_DATA_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit SettingInjectorService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		SettingInjectorService(QJniObject obj);
		
		// Constructors
		SettingInjectorService(jstring arg0);
		
		// Methods
		static void refreshSettings(android::content::Context arg0);
		__JniBaseClass onBind(android::content::Intent arg0);
		void onStart(android::content::Intent arg0, jint arg1);
		jint onStartCommand(android::content::Intent arg0, jint arg1, jint arg2);
	};
} // namespace android::location

