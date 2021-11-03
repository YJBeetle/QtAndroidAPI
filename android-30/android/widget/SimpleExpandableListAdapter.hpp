#pragma once

#include "../../JObject.hpp"
#include "./BaseExpandableListAdapter.hpp"

namespace android::content
{
	class Context;
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
	class SimpleExpandableListAdapter : public android::widget::BaseExpandableListAdapter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimpleExpandableListAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseExpandableListAdapter(className, sig, std::forward<Ts>(agv)...) {}
		SimpleExpandableListAdapter(QAndroidJniObject obj);
		
		// Constructors
		SimpleExpandableListAdapter(android::content::Context arg0, JObject arg1, jint arg2, jarray arg3, jintArray arg4, JObject arg5, jint arg6, jarray arg7, jintArray arg8);
		SimpleExpandableListAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, JObject arg6, jint arg7, jarray arg8, jintArray arg9);
		SimpleExpandableListAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, JObject arg6, jint arg7, jint arg8, jarray arg9, jintArray arg10);
		
		// Methods
		jobject getChild(jint arg0, jint arg1);
		jlong getChildId(jint arg0, jint arg1);
		android::view::View getChildView(jint arg0, jint arg1, jboolean arg2, android::view::View arg3, android::view::ViewGroup arg4);
		jint getChildrenCount(jint arg0);
		jobject getGroup(jint arg0);
		jint getGroupCount();
		jlong getGroupId(jint arg0);
		android::view::View getGroupView(jint arg0, jboolean arg1, android::view::View arg2, android::view::ViewGroup arg3);
		jboolean hasStableIds();
		jboolean isChildSelectable(jint arg0, jint arg1);
		android::view::View newChildView(jboolean arg0, android::view::ViewGroup arg1);
		android::view::View newGroupView(jboolean arg0, android::view::ViewGroup arg1);
	};
} // namespace android::widget

