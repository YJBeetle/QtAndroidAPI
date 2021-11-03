#pragma once

#include "../../JObject.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"

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
	class ListActivity : public android::app::Activity
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ListActivity(const char *className, const char *sig, Ts...agv) : android::app::Activity(className, sig, std::forward<Ts>(agv)...) {}
		ListActivity(QAndroidJniObject obj);
		
		// Constructors
		ListActivity();
		
		// Methods
		JObject getListAdapter();
		android::widget::ListView getListView();
		jlong getSelectedItemId();
		jint getSelectedItemPosition();
		void onContentChanged();
		void setListAdapter(JObject arg0);
		void setSelection(jint arg0);
	};
} // namespace android::app

