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
		
		RemoteViewsService(QAndroidJniObject obj);
		// Constructors
		RemoteViewsService();
		
		// Methods
		QAndroidJniObject onBind(android::content::Intent arg0);
		QAndroidJniObject onGetViewFactory(android::content::Intent arg0);
	};
} // namespace android::widget

