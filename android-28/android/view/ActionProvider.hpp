#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class ActionProvider : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ActionProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActionProvider(QJniObject obj);
		
		// Constructors
		ActionProvider(android::content::Context arg0);
		
		// Methods
		jboolean hasSubMenu();
		jboolean isVisible();
		android::view::View onCreateActionView();
		android::view::View onCreateActionView(JObject arg0);
		jboolean onPerformDefaultAction();
		void onPrepareSubMenu(JObject arg0);
		jboolean overridesItemVisibility();
		void refreshVisibility();
		void setVisibilityListener(JObject arg0);
	};
} // namespace android::view

