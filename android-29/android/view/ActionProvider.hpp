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
		
		ActionProvider(QAndroidJniObject obj);
		// Constructors
		ActionProvider(android::content::Context &arg0);
		ActionProvider() = default;
		
		// Methods
		jboolean hasSubMenu();
		jboolean isVisible();
		QAndroidJniObject onCreateActionView();
		QAndroidJniObject onCreateActionView(__JniBaseClass arg0);
		jboolean onPerformDefaultAction();
		void onPrepareSubMenu(__JniBaseClass arg0);
		jboolean overridesItemVisibility();
		void refreshVisibility();
		void setVisibilityListener(__JniBaseClass arg0);
	};
} // namespace android::view

