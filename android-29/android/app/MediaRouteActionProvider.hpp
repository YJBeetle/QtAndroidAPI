#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/ActionProvider.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}

namespace android::app
{
	class MediaRouteActionProvider : public android::view::ActionProvider
	{
	public:
		// Fields
		
		MediaRouteActionProvider(QAndroidJniObject obj);
		// Constructors
		MediaRouteActionProvider(android::content::Context &arg0);
		MediaRouteActionProvider() = default;
		
		// Methods
		jboolean isVisible();
		QAndroidJniObject onCreateActionView();
		QAndroidJniObject onCreateActionView(__JniBaseClass arg0);
		jboolean onPerformDefaultAction();
		jboolean overridesItemVisibility();
		void setExtendedSettingsClickListener(__JniBaseClass arg0);
		void setRouteTypes(jint arg0);
	};
} // namespace android::app

