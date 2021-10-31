#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./ResourceCursorTreeAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(QAndroidJniObject obj) : android::widget::CursorTreeAdapter(obj) {}
	
	// Constructors
	ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::CursorTreeAdapter(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4)
		: android::widget::CursorTreeAdapter(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::widget::CursorTreeAdapter(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;IIII)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	android::view::View ResourceCursorTreeAdapter::newChildView(android::content::Context arg0, __JniBaseClass arg1, jboolean arg2, android::view::ViewGroup arg3)
	{
		return callObjectMethod(
			"newChildView",
			"(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	android::view::View ResourceCursorTreeAdapter::newGroupView(android::content::Context arg0, __JniBaseClass arg1, jboolean arg2, android::view::ViewGroup arg3)
	{
		return callObjectMethod(
			"newGroupView",
			"(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
} // namespace android::widget

