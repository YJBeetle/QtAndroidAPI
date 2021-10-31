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
	class Context;
}
namespace android::content
{
	class Intent;
}

namespace android::service::vr
{
	class VrListenerService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit VrListenerService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		VrListenerService(QJniObject obj);
		
		// Constructors
		VrListenerService();
		
		// Methods
		static jboolean isVrModePackageEnabled(android::content::Context arg0, android::content::ComponentName arg1);
		__JniBaseClass onBind(android::content::Intent arg0);
		void onCurrentVrActivityChanged(android::content::ComponentName arg0);
	};
} // namespace android::service::vr

