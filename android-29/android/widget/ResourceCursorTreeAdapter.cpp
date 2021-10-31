#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./ResourceCursorTreeAdapter.hpp"

namespace android::widget
{
	// Fields
	
	ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;IIII)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	
	// Methods
	QAndroidJniObject ResourceCursorTreeAdapter::newChildView(android::content::Context arg0, __JniBaseClass arg1, jboolean arg2, android::view::ViewGroup arg3)
	{
		return __thiz.callObjectMethod(
			"newChildView",
			"(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceCursorTreeAdapter::newGroupView(android::content::Context arg0, __JniBaseClass arg1, jboolean arg2, android::view::ViewGroup arg3)
	{
		return __thiz.callObjectMethod(
			"newGroupView",
			"(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
} // namespace android::widget

