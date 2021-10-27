#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Filter.hpp"
#include "./CursorTreeAdapter.hpp"

namespace android::widget
{
	// Fields
	
	CursorTreeAdapter::CursorTreeAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CursorTreeAdapter::CursorTreeAdapter(__JniBaseClass &arg0, android::content::Context &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CursorTreeAdapter",
			"(Landroid/database/Cursor;Landroid/content/Context;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	CursorTreeAdapter::CursorTreeAdapter(__JniBaseClass &arg0, android::content::Context &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CursorTreeAdapter",
			"(Landroid/database/Cursor;Landroid/content/Context;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	void CursorTreeAdapter::changeCursor(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"changeCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	jstring CursorTreeAdapter::convertToString(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"convertToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject CursorTreeAdapter::getChild(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(II)Landroid/database/Cursor;",
			arg0,
			arg1
		);
	}
	jlong CursorTreeAdapter::getChildId(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jlong>(
			"getChildId",
			"(II)J",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CursorTreeAdapter::getChildView(jint arg0, jint arg1, jboolean arg2, android::view::View arg3, android::view::ViewGroup arg4)
	{
		return __thiz.callObjectMethod(
			"getChildView",
			"(IIZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	jint CursorTreeAdapter::getChildrenCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getChildrenCount",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject CursorTreeAdapter::getCursor()
	{
		return __thiz.callObjectMethod(
			"getCursor",
			"()Landroid/database/Cursor;"
		);
	}
	QAndroidJniObject CursorTreeAdapter::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	QAndroidJniObject CursorTreeAdapter::getFilterQueryProvider()
	{
		return __thiz.callObjectMethod(
			"getFilterQueryProvider",
			"()Landroid/widget/FilterQueryProvider;"
		);
	}
	QAndroidJniObject CursorTreeAdapter::getGroup(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getGroup",
			"(I)Landroid/database/Cursor;",
			arg0
		);
	}
	jint CursorTreeAdapter::getGroupCount()
	{
		return __thiz.callMethod<jint>(
			"getGroupCount",
			"()I"
		);
	}
	jlong CursorTreeAdapter::getGroupId(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getGroupId",
			"(I)J",
			arg0
		);
	}
	QAndroidJniObject CursorTreeAdapter::getGroupView(jint arg0, jboolean arg1, android::view::View arg2, android::view::ViewGroup arg3)
	{
		return __thiz.callObjectMethod(
			"getGroupView",
			"(IZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean CursorTreeAdapter::hasStableIds()
	{
		return __thiz.callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	jboolean CursorTreeAdapter::isChildSelectable(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isChildSelectable",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void CursorTreeAdapter::notifyDataSetChanged()
	{
		__thiz.callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	void CursorTreeAdapter::notifyDataSetChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"notifyDataSetChanged",
			"(Z)V",
			arg0
		);
	}
	void CursorTreeAdapter::notifyDataSetInvalidated()
	{
		__thiz.callMethod<void>(
			"notifyDataSetInvalidated",
			"()V"
		);
	}
	void CursorTreeAdapter::onGroupCollapsed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onGroupCollapsed",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject CursorTreeAdapter::runQueryOnBackgroundThread(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"runQueryOnBackgroundThread",
			"(Ljava/lang/CharSequence;)Landroid/database/Cursor;",
			arg0
		);
	}
	QAndroidJniObject CursorTreeAdapter::runQueryOnBackgroundThread(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"runQueryOnBackgroundThread",
			"(Ljava/lang/CharSequence;)Landroid/database/Cursor;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CursorTreeAdapter::setChildrenCursor(jint arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setChildrenCursor",
			"(ILandroid/database/Cursor;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void CursorTreeAdapter::setFilterQueryProvider(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilterQueryProvider",
			"(Landroid/widget/FilterQueryProvider;)V",
			arg0.__jniObject().object()
		);
	}
	void CursorTreeAdapter::setGroupCursor(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setGroupCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

