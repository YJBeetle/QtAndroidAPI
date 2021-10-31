#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ActionProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ActionProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ActionProvider(QJniObject obj);
		
		// Constructors
		ActionProvider(android::content::Context arg0);
		
		// Methods
		jboolean hasSubMenu();
		jboolean isVisible();
		android::view::View onCreateActionView();
		android::view::View onCreateActionView(__JniBaseClass arg0);
		jboolean onPerformDefaultAction();
		void onPrepareSubMenu(__JniBaseClass arg0);
		jboolean overridesItemVisibility();
		void refreshVisibility();
		void setVisibilityListener(__JniBaseClass arg0);
	};
} // namespace android::view

