#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		TabActivity(QAndroidJniObject obj);
		// Constructors
		TabActivity();
		
		// Methods
		QAndroidJniObject getTabHost();
		QAndroidJniObject getTabWidget();
		void onContentChanged();
		void setDefaultTab(jint arg0);
		void setDefaultTab(jstring arg0);
		void setDefaultTab(const QString &arg0);
	};
} // namespace android::app

