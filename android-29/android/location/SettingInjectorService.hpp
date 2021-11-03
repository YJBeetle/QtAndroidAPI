#pragma once

#include "../app/Service.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
class JString;

namespace android::location
{
	class SettingInjectorService : public android::app::Service
	{
	public:
		// Fields
		static JString ACTION_INJECTED_SETTING_CHANGED();
		static JString ACTION_SERVICE_INTENT();
		static JString ATTRIBUTES_NAME();
		static JString META_DATA_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SettingInjectorService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		SettingInjectorService(QAndroidJniObject obj);
		
		// Constructors
		SettingInjectorService(JString arg0);
		
		// Methods
		static void refreshSettings(android::content::Context arg0);
		JObject onBind(android::content::Intent arg0);
		void onStart(android::content::Intent arg0, jint arg1);
		jint onStartCommand(android::content::Intent arg0, jint arg1, jint arg2);
	};
} // namespace android::location

