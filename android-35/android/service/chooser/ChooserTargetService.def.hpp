#pragma once

#include "../../app/Service.def.hpp"

namespace android::content
{
	class ComponentName;
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

namespace android::service::chooser
{
	class ChooserTargetService : public android::app::Service
	{
	public:
		// Fields
		static JString BIND_PERMISSION();
		static JString META_DATA_NAME();
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ChooserTargetService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		ChooserTargetService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		ChooserTargetService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		JObject onGetChooserTargets(android::content::ComponentName arg0, android::content::IntentFilter arg1) const;
	};
} // namespace android::service::chooser

