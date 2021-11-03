#pragma once

#include "../../../JObject.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

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
namespace android::service::controls
{
	class Control;
}
namespace android::service::controls::actions
{
	class ControlAction;
}

namespace android::service::controls
{
	class ControlsProviderService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_CONTROLS();
		static jstring TAG();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ControlsProviderService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		ControlsProviderService(QAndroidJniObject obj);
		
		// Constructors
		ControlsProviderService();
		
		// Methods
		static void requestAddControl(android::content::Context arg0, android::content::ComponentName arg1, android::service::controls::Control arg2);
		JObject createPublisherFor(JObject arg0);
		JObject createPublisherForAllAvailable();
		JObject createPublisherForSuggested();
		JObject onBind(android::content::Intent arg0);
		jboolean onUnbind(android::content::Intent arg0);
		void performControlAction(jstring arg0, android::service::controls::actions::ControlAction arg1, JObject arg2);
	};
} // namespace android::service::controls

