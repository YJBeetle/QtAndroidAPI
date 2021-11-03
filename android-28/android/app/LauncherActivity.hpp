#pragma once

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
class JString;

namespace android::app
{
	class LauncherActivity : public android::app::ListActivity
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LauncherActivity(const char *className, const char *sig, Ts...agv) : android::app::ListActivity(className, sig, std::forward<Ts>(agv)...) {}
		LauncherActivity(QAndroidJniObject obj);
		
		// Constructors
		LauncherActivity();
		
		// Methods
		JObject makeListItems() const;
		void setTitle(jint arg0) const;
		void setTitle(JString arg0) const;
	};
} // namespace android::app

