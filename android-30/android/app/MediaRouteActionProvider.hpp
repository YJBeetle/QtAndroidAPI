#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouteActionProvider(const char *className, const char *sig, Ts...agv) : android::view::ActionProvider(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouteActionProvider(QJniObject obj);
		
		// Constructors
		MediaRouteActionProvider(android::content::Context arg0);
		
		// Methods
		jboolean isVisible();
		android::view::View onCreateActionView();
		android::view::View onCreateActionView(JObject arg0);
		jboolean onPerformDefaultAction();
		jboolean overridesItemVisibility();
		void setExtendedSettingsClickListener(JObject arg0);
		void setRouteTypes(jint arg0);
	};
} // namespace android::app

