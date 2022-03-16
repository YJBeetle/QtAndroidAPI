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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActionProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActionProvider(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ActionProvider(android::content::Context arg0);
		
		// Methods
		jboolean hasSubMenu() const;
		jboolean isVisible() const;
		android::view::View onCreateActionView() const;
		android::view::View onCreateActionView(JObject arg0) const;
		jboolean onPerformDefaultAction() const;
		void onPrepareSubMenu(JObject arg0) const;
		jboolean overridesItemVisibility() const;
		void refreshVisibility() const;
		void setVisibilityListener(JObject arg0) const;
	};
} // namespace android::view

