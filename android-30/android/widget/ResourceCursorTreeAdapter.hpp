#pragma once

#include "../../JObject.hpp"
#include "./BaseExpandableListAdapter.hpp"
#include "./CursorTreeAdapter.hpp"

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
	class ResourceCursorTreeAdapter : public android::widget::CursorTreeAdapter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ResourceCursorTreeAdapter(const char *className, const char *sig, Ts...agv) : android::widget::CursorTreeAdapter(className, sig, std::forward<Ts>(agv)...) {}
		ResourceCursorTreeAdapter(QJniObject obj);
		
		// Constructors
		ResourceCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		ResourceCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4);
		ResourceCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		android::view::View newChildView(android::content::Context arg0, JObject arg1, jboolean arg2, android::view::ViewGroup arg3);
		android::view::View newGroupView(android::content::Context arg0, JObject arg1, jboolean arg2, android::view::ViewGroup arg3);
	};
} // namespace android::widget

