#pragma once

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteViewsService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViewsService(QAndroidJniObject obj);
		
		// Constructors
		RemoteViewsService();
		
		// Methods
		JObject onBind(android::content::Intent arg0);
		JObject onGetViewFactory(android::content::Intent arg0);
	};
} // namespace android::widget

