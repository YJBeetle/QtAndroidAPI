#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		ListActivity(QAndroidJniObject obj);
		// Constructors
		ListActivity();
		
		// Methods
		QAndroidJniObject getListAdapter();
		QAndroidJniObject getListView();
		jlong getSelectedItemId();
		jint getSelectedItemPosition();
		void onContentChanged();
		void setListAdapter(__JniBaseClass arg0);
		void setSelection(jint arg0);
	};
} // namespace android::app

