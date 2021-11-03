#pragma once

#include "./BaseExpandableListAdapter.hpp"

class JIntArray;
class JArray;
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
class JObject;

namespace android::widget
{
	class SimpleExpandableListAdapter : public android::widget::BaseExpandableListAdapter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SimpleExpandableListAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseExpandableListAdapter(className, sig, std::forward<Ts>(agv)...) {}
		SimpleExpandableListAdapter(QJniObject obj);
		
		// Constructors
		SimpleExpandableListAdapter(android::content::Context arg0, JObject arg1, jint arg2, JArray arg3, JIntArray arg4, JObject arg5, jint arg6, JArray arg7, JIntArray arg8);
		SimpleExpandableListAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, JArray arg4, JIntArray arg5, JObject arg6, jint arg7, JArray arg8, JIntArray arg9);
		SimpleExpandableListAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, JArray arg4, JIntArray arg5, JObject arg6, jint arg7, jint arg8, JArray arg9, JIntArray arg10);
		
		// Methods
		JObject getChild(jint arg0, jint arg1);
		jlong getChildId(jint arg0, jint arg1);
		android::view::View getChildView(jint arg0, jint arg1, jboolean arg2, android::view::View arg3, android::view::ViewGroup arg4);
		jint getChildrenCount(jint arg0);
		JObject getGroup(jint arg0);
		jint getGroupCount();
		jlong getGroupId(jint arg0);
		android::view::View getGroupView(jint arg0, jboolean arg1, android::view::View arg2, android::view::ViewGroup arg3);
		jboolean hasStableIds();
		jboolean isChildSelectable(jint arg0, jint arg1);
		android::view::View newChildView(jboolean arg0, android::view::ViewGroup arg1);
		android::view::View newGroupView(jboolean arg0, android::view::ViewGroup arg1);
	};
} // namespace android::widget

