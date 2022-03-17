#pragma once

#include "./Activity.def.hpp"

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
		ListActivity(QAndroidJniObject obj) : android::app::Activity(obj) {}
		
		// Constructors
		ListActivity();
		
		// Methods
		JObject getListAdapter() const;
		android::widget::ListView getListView() const;
		jlong getSelectedItemId() const;
		jint getSelectedItemPosition() const;
		void onContentChanged() const;
		void setListAdapter(JObject arg0) const;
		void setSelection(jint arg0) const;
	};
} // namespace android::app

