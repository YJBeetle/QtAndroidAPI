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
		
		// QJniObject forward
		template<typename ...Ts> explicit SpellCheckerService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerService(QJniObject obj);
		
		// Constructors
		SpellCheckerService();
		
		// Methods
		android::service::textservice::SpellCheckerService_Session createSession();
		__JniBaseClass onBind(android::content::Intent arg0);
	};
} // namespace android::service::textservice

