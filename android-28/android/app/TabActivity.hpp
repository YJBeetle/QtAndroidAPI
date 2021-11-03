#pragma once

#include "../../JObject.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"
#include "./ActivityGroup.hpp"

namespace android::app
{
	class Activity;
}
namespace android::os
{
	class Bundle;
}
namespace android::widget
{
	class TabHost;
}
namespace android::widget
{
	class TabWidget;
}

namespace android::app
{
	class TabActivity : public android::app::ActivityGroup
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TabActivity(const char *className, const char *sig, Ts...agv) : android::app::ActivityGroup(className, sig, std::forward<Ts>(agv)...) {}
		TabActivity(QJniObject obj);
		
		// Constructors
		TabActivity();
		
		// Methods
		android::widget::TabHost getTabHost();
		android::widget::TabWidget getTabWidget();
		void onContentChanged();
		void setDefaultTab(jint arg0);
		void setDefaultTab(jstring arg0);
	};
} // namespace android::app

