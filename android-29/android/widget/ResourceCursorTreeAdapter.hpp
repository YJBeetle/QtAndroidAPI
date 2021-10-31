#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		ResourceCursorTreeAdapter(QAndroidJniObject obj);
		// Constructors
		ResourceCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		ResourceCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4);
		ResourceCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		ResourceCursorTreeAdapter() = default;
		
		// Methods
		QAndroidJniObject newChildView(android::content::Context arg0, __JniBaseClass arg1, jboolean arg2, android::view::ViewGroup arg3);
		QAndroidJniObject newGroupView(android::content::Context arg0, __JniBaseClass arg1, jboolean arg2, android::view::ViewGroup arg3);
	};
} // namespace android::widget

