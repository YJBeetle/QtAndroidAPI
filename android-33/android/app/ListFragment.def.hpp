#pragma once

#include "./Fragment.def.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class LayoutInflater;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}
namespace android::widget
{
	class ListView;
}
class JString;

namespace android::app
{
	class ListFragment : public android::app::Fragment
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ListFragment(const char *className, const char *sig, Ts...agv) : android::app::Fragment(className, sig, std::forward<Ts>(agv)...) {}
		ListFragment(QAndroidJniObject obj) : android::app::Fragment(obj) {}
		
		// Constructors
		ListFragment();
		
		// Methods
		JObject getListAdapter() const;
		android::widget::ListView getListView() const;
		jlong getSelectedItemId() const;
		jint getSelectedItemPosition() const;
		android::view::View onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2) const;
		void onDestroyView() const;
		void onListItemClick(android::widget::ListView arg0, android::view::View arg1, jint arg2, jlong arg3) const;
		void onViewCreated(android::view::View arg0, android::os::Bundle arg1) const;
		void setEmptyText(JString arg0) const;
		void setListAdapter(JObject arg0) const;
		void setListShown(jboolean arg0) const;
		void setListShownNoAnimation(jboolean arg0) const;
		void setSelection(jint arg0) const;
	};
} // namespace android::app

