#pragma once

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouteActionProvider(const char *className, const char *sig, Ts...agv) : android::view::ActionProvider(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouteActionProvider(QAndroidJniObject obj);
		
		// Constructors
		MediaRouteActionProvider(android::content::Context arg0);
		
		// Methods
		jboolean isVisible() const;
		android::view::View onCreateActionView() const;
		android::view::View onCreateActionView(JObject arg0) const;
		jboolean onPerformDefaultAction() const;
		jboolean overridesItemVisibility() const;
		void setExtendedSettingsClickListener(JObject arg0) const;
		void setRouteTypes(jint arg0) const;
	};
} // namespace android::app

