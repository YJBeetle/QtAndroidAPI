#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./ResourceCursorAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	ResourceCursorAdapter::ResourceCursorAdapter(QJniObject obj) : android::widget::CursorAdapter(obj) {}
	
	// Constructors
	ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2)
		: android::widget::CursorAdapter(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, jboolean arg3)
		: android::widget::CursorAdapter(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;Z)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, jint arg3)
		: android::widget::CursorAdapter(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;I)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
	android::view::View ResourceCursorAdapter::newDropDownView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"newDropDownView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::view::View ResourceCursorAdapter::newView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"newView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ResourceCursorAdapter::setDropDownViewResource(jint arg0) const
	{
		callMethod<void>(
			"setDropDownViewResource",
			"(I)V",
			arg0
		);
	}
	void ResourceCursorAdapter::setDropDownViewTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	void ResourceCursorAdapter::setViewResource(jint arg0) const
	{
		callMethod<void>(
			"setViewResource",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

