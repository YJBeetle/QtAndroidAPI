#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::content
{
	class Intent;
}

namespace android::widget
{
	class RemoteViewsService : public android::app::Service
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteViewsService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViewsService(QJniObject obj);
		
		// Constructors
		RemoteViewsService();
		
		// Methods
		__JniBaseClass onBind(android::content::Intent arg0);
		__JniBaseClass onGetViewFactory(android::content::Intent arg0);
	};
} // namespace android::widget

