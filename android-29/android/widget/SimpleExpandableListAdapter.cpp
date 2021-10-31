#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./SimpleExpandableListAdapter.hpp"

namespace android::widget
{
	// Fields
	
	SimpleExpandableListAdapter::SimpleExpandableListAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SimpleExpandableListAdapter::SimpleExpandableListAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4, __JniBaseClass arg5, jint arg6, jarray arg7, jintArray arg8)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleExpandableListAdapter",
			"(Landroid/content/Context;Ljava/util/List;I[Ljava/lang/String;[ILjava/util/List;I[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6,
			arg7,
			arg8
		);
	}
	SimpleExpandableListAdapter::SimpleExpandableListAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, __JniBaseClass arg6, jint arg7, jarray arg8, jintArray arg9)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleExpandableListAdapter",
			"(Landroid/content/Context;Ljava/util/List;II[Ljava/lang/String;[ILjava/util/List;I[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7,
			arg8,
			arg9
		);
	}
	SimpleExpandableListAdapter::SimpleExpandableListAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, __JniBaseClass arg6, jint arg7, jint arg8, jarray arg9, jintArray arg10)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleExpandableListAdapter",
			"(Landroid/content/Context;Ljava/util/List;II[Ljava/lang/String;[ILjava/util/List;II[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7,
			arg8,
			arg9,
			arg10
		);
	}
	
	// Methods
	jobject SimpleExpandableListAdapter::getChild(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(II)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jlong SimpleExpandableListAdapter::getChildId(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jlong>(
			"getChildId",
			"(II)J",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SimpleExpandableListAdapter::getChildView(jint arg0, jint arg1, jboolean arg2, android::view::View arg3, android::view::ViewGroup arg4)
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
	jint SimpleExpandableListAdapter::getChildrenCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getChildrenCount",
			"(I)I",
			arg0
		);
	}
	jobject SimpleExpandableListAdapter::getGroup(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getGroup",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint SimpleExpandableListAdapter::getGroupCount()
	{
		return __thiz.callMethod<jint>(
			"getGroupCount",
			"()I"
		);
	}
	jlong SimpleExpandableListAdapter::getGroupId(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getGroupId",
			"(I)J",
			arg0
		);
	}
	QAndroidJniObject SimpleExpandableListAdapter::getGroupView(jint arg0, jboolean arg1, android::view::View arg2, android::view::ViewGroup arg3)
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
	jboolean SimpleExpandableListAdapter::hasStableIds()
	{
		return __thiz.callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	jboolean SimpleExpandableListAdapter::isChildSelectable(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isChildSelectable",
			"(II)Z",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SimpleExpandableListAdapter::newChildView(jboolean arg0, android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"newChildView",
			"(ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleExpandableListAdapter::newGroupView(jboolean arg0, android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"newGroupView",
			"(ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::widget

