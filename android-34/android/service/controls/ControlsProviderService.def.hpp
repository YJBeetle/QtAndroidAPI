#pragma once

#include "../../app/Service.def.hpp"

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
class JString;

namespace android::service::controls
{
	class ControlsProviderService : public android::app::Service
	{
	public:
		// Fields
		static JString EXTRA_LOCKSCREEN_ALLOW_TRIVIAL_CONTROLS();
		static JString META_DATA_PANEL_ACTIVITY();
		static JString SERVICE_CONTROLS();
		static JString TAG();
		
		// QJniObject forward
		template<typename ...Ts> explicit ControlsProviderService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		ControlsProviderService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		ControlsProviderService();
		
		// Methods
		static void requestAddControl(android::content::Context arg0, android::content::ComponentName arg1, android::service::controls::Control arg2);
		JObject createPublisherFor(JObject arg0) const;
		JObject createPublisherForAllAvailable() const;
		JObject createPublisherForSuggested() const;
		JObject onBind(android::content::Intent arg0) const;
		jboolean onUnbind(android::content::Intent arg0) const;
		void performControlAction(JString arg0, android::service::controls::actions::ControlAction arg1, JObject arg2) const;
	};
} // namespace android::service::controls

