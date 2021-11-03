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
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteViewsService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViewsService(QJniObject obj);
		
		// Constructors
		RemoteViewsService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		JObject onGetViewFactory(android::content::Intent arg0) const;
	};
} // namespace android::widget

