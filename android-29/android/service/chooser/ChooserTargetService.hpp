#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

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

namespace android::service::chooser
{
	class ChooserTargetService : public android::app::Service
	{
	public:
		// Fields
		static jstring BIND_PERMISSION();
		static jstring META_DATA_NAME();
		static jstring SERVICE_INTERFACE();
		
		ChooserTargetService(QAndroidJniObject obj);
		// Constructors
		ChooserTargetService();
		
		// Methods
		QAndroidJniObject onBind(android::content::Intent arg0);
		QAndroidJniObject onGetChooserTargets(android::content::ComponentName arg0, android::content::IntentFilter arg1);
	};
} // namespace android::service::chooser

