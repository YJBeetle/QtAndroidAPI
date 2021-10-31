#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./ImageView.hpp"
#include "./TextView.hpp"
#include "./SimpleCursorTreeAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(QAndroidJniObject obj) : android::widget::ResourceCursorTreeAdapter(obj) {}
	
	// Constructors
	SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4, jint arg5, jarray arg6, jintArray arg7)
		: android::widget::ResourceCursorTreeAdapter(
			"android.widget.SimpleCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;I[Ljava/lang/String;[II[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		) {}
	SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, jint arg6, jarray arg7, jintArray arg8)
		: android::widget::ResourceCursorTreeAdapter(
			"android.widget.SimpleCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;II[Ljava/lang/String;[II[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8
		) {}
	SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, jint arg6, jint arg7, jarray arg8, jintArray arg9)
		: android::widget::ResourceCursorTreeAdapter(
			"android.widget.SimpleCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;II[Ljava/lang/String;[III[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9
		) {}
	
	// Methods
	__JniBaseClass SimpleCursorTreeAdapter::getViewBinder()
	{
		return callObjectMethod(
			"getViewBinder",
			"()Landroid/widget/SimpleCursorTreeAdapter$ViewBinder;"
		);
	}
	void SimpleCursorTreeAdapter::setViewBinder(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setViewBinder",
			"(Landroid/widget/SimpleCursorTreeAdapter$ViewBinder;)V",
			arg0.object()
		);
	}
	void SimpleCursorTreeAdapter::setViewText(android::widget::TextView arg0, jstring arg1)
	{
		callMethod<void>(
			"setViewText",
			"(Landroid/widget/TextView;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget

