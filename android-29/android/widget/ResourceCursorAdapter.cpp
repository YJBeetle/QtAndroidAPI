#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./ResourceCursorAdapter.hpp"

namespace android::widget
{
	// Fields
	
	ResourceCursorAdapter::ResourceCursorAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject ResourceCursorAdapter::newDropDownView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"newDropDownView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceCursorAdapter::newView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"newView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ResourceCursorAdapter::setDropDownViewResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownViewResource",
			"(I)V",
			arg0
		);
	}
	void ResourceCursorAdapter::setDropDownViewTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void ResourceCursorAdapter::setViewResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setViewResource",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

