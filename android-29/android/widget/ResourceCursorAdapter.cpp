#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./ResourceCursorAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ResourceCursorAdapter::ResourceCursorAdapter(QAndroidJniObject obj) : android::widget::CursorAdapter(obj) {}
	
	// Constructors
	ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2)
		: android::widget::CursorAdapter(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jboolean arg3)
		: android::widget::CursorAdapter(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;Z)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jint arg3)
		: android::widget::CursorAdapter(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;I)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
	QAndroidJniObject ResourceCursorAdapter::newDropDownView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2)
	{
		return callObjectMethod(
			"newDropDownView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject ResourceCursorAdapter::newView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2)
	{
		return callObjectMethod(
			"newView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ResourceCursorAdapter::setDropDownViewResource(jint arg0)
	{
		callMethod<void>(
			"setDropDownViewResource",
			"(I)V",
			arg0
		);
	}
	void ResourceCursorAdapter::setDropDownViewTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	void ResourceCursorAdapter::setViewResource(jint arg0)
	{
		callMethod<void>(
			"setViewResource",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

