#pragma once

#include "../../JObject.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"
#include "./ListActivity.hpp"

namespace android::app
{
	class LauncherActivity_ListItem;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class ListView;
}

namespace android::app
{
	class LauncherActivity : public android::app::ListActivity
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LauncherActivity(const char *className, const char *sig, Ts...agv) : android::app::ListActivity(className, sig, std::forward<Ts>(agv)...) {}
		LauncherActivity(QJniObject obj);
		
		// Constructors
		LauncherActivity();
		
		// Methods
		JObject makeListItems();
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
	};
} // namespace android::app

