#pragma once

#include "../view/ViewGroup.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::util
{
	class SparseArray;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view
{
	class ViewStructure;
}
class JString;
class JObject;

namespace android::widget
{
	class AdapterView : public android::view::ViewGroup
	{
	public:
		// Fields
		static jint INVALID_POSITION();
		static jlong INVALID_ROW_ID();
		static jint ITEM_VIEW_TYPE_HEADER_OR_FOOTER();
		static jint ITEM_VIEW_TYPE_IGNORE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdapterView(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		AdapterView(QJniObject obj) : android::view::ViewGroup(obj) {}
		
		// Constructors
		AdapterView(android::content::Context arg0);
		AdapterView(android::content::Context arg0, JObject arg1);
		AdapterView(android::content::Context arg0, JObject arg1, jint arg2);
		AdapterView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addView(android::view::View arg0) const;
		void addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		void addView(android::view::View arg0, jint arg1) const;
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const;
		JString getAccessibilityClassName() const;
		JObject getAdapter() const;
		jint getCount() const;
		android::view::View getEmptyView() const;
		jint getFirstVisiblePosition() const;
		JObject getItemAtPosition(jint arg0) const;
		jlong getItemIdAtPosition(jint arg0) const;
		jint getLastVisiblePosition() const;
		JObject getOnItemClickListener() const;
		JObject getOnItemLongClickListener() const;
		JObject getOnItemSelectedListener() const;
		jint getPositionForView(android::view::View arg0) const;
		JObject getSelectedItem() const;
		jlong getSelectedItemId() const;
		jint getSelectedItemPosition() const;
		android::view::View getSelectedView() const;
		void onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const;
		jboolean performItemClick(android::view::View arg0, jint arg1, jlong arg2) const;
		void removeAllViews() const;
		void removeView(android::view::View arg0) const;
		void removeViewAt(jint arg0) const;
		void setAdapter(JObject arg0) const;
		void setEmptyView(android::view::View arg0) const;
		void setFocusable(jint arg0) const;
		void setFocusableInTouchMode(jboolean arg0) const;
		void setOnClickListener(JObject arg0) const;
		void setOnItemClickListener(JObject arg0) const;
		void setOnItemLongClickListener(JObject arg0) const;
		void setOnItemSelectedListener(JObject arg0) const;
		void setSelection(jint arg0) const;
	};
} // namespace android::widget

