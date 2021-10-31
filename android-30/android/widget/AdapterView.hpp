#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdapterView(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		AdapterView(QAndroidJniObject obj);
		
		// Constructors
		AdapterView(android::content::Context arg0);
		AdapterView(android::content::Context arg0, __JniBaseClass arg1);
		AdapterView(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		AdapterView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void addView(android::view::View arg0);
		void addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		void addView(android::view::View arg0, jint arg1);
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2);
		jstring getAccessibilityClassName();
		__JniBaseClass getAdapter();
		jint getCount();
		android::view::View getEmptyView();
		jint getFirstVisiblePosition();
		jobject getItemAtPosition(jint arg0);
		jlong getItemIdAtPosition(jint arg0);
		jint getLastVisiblePosition();
		__JniBaseClass getOnItemClickListener();
		__JniBaseClass getOnItemLongClickListener();
		__JniBaseClass getOnItemSelectedListener();
		jint getPositionForView(android::view::View arg0);
		jobject getSelectedItem();
		jlong getSelectedItemId();
		jint getSelectedItemPosition();
		android::view::View getSelectedView();
		void onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1);
		jboolean performItemClick(android::view::View arg0, jint arg1, jlong arg2);
		void removeAllViews();
		void removeView(android::view::View arg0);
		void removeViewAt(jint arg0);
		void setAdapter(__JniBaseClass arg0);
		void setEmptyView(android::view::View arg0);
		void setFocusable(jint arg0);
		void setFocusableInTouchMode(jboolean arg0);
		void setOnClickListener(__JniBaseClass arg0);
		void setOnItemClickListener(__JniBaseClass arg0);
		void setOnItemLongClickListener(__JniBaseClass arg0);
		void setOnItemSelectedListener(__JniBaseClass arg0);
		void setSelection(jint arg0);
	};
} // namespace android::widget

