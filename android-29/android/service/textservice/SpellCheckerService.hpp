#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::service::textservice
{
	class SpellCheckerService_Session;
}

namespace android::service::textservice
{
	class SpellCheckerService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		SpellCheckerService(QAndroidJniObject obj);
		// Constructors
		SpellCheckerService();
		
		// Methods
		QAndroidJniObject createSession();
		QAndroidJniObject onBind(android::content::Intent arg0);
	};
} // namespace android::service::textservice

