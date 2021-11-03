#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./ImageView.hpp"
#include "./TextView.hpp"
#include "./SimpleCursorAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	SimpleCursorAdapter::SimpleCursorAdapter(QJniObject obj) : android::widget::ResourceCursorAdapter(obj) {}
	
	// Constructors
	SimpleCursorAdapter::SimpleCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, jarray arg3, jintArray arg4)
		: android::widget::ResourceCursorAdapter(
			"android.widget.SimpleCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4
		) {}
	SimpleCursorAdapter::SimpleCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, jarray arg3, jintArray arg4, jint arg5)
		: android::widget::ResourceCursorAdapter(
			"android.widget.SimpleCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;[Ljava/lang/String;[II)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	void SimpleCursorAdapter::bindView(android::view::View arg0, android::content::Context arg1, JObject arg2)
	{
		callMethod<void>(
			"bindView",
			"(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void SimpleCursorAdapter::changeCursorAndColumns(JObject arg0, jarray arg1, jintArray arg2)
	{
		callMethod<void>(
			"changeCursorAndColumns",
			"(Landroid/database/Cursor;[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jstring SimpleCursorAdapter::convertToString(JObject arg0)
	{
		return callObjectMethod(
			"convertToString",
			"(Landroid/database/Cursor;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	JObject SimpleCursorAdapter::getCursorToStringConverter()
	{
		return callObjectMethod(
			"getCursorToStringConverter",
			"()Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;"
		);
	}
	jint SimpleCursorAdapter::getStringConversionColumn()
	{
		return callMethod<jint>(
			"getStringConversionColumn",
			"()I"
		);
	}
	JObject SimpleCursorAdapter::getViewBinder()
	{
		return callObjectMethod(
			"getViewBinder",
			"()Landroid/widget/SimpleCursorAdapter$ViewBinder;"
		);
	}
	void SimpleCursorAdapter::setCursorToStringConverter(JObject arg0)
	{
		callMethod<void>(
			"setCursorToStringConverter",
			"(Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;)V",
			arg0.object()
		);
	}
	void SimpleCursorAdapter::setStringConversionColumn(jint arg0)
	{
		callMethod<void>(
			"setStringConversionColumn",
			"(I)V",
			arg0
		);
	}
	void SimpleCursorAdapter::setViewBinder(JObject arg0)
	{
		callMethod<void>(
			"setViewBinder",
			"(Landroid/widget/SimpleCursorAdapter$ViewBinder;)V",
			arg0.object()
		);
	}
	void SimpleCursorAdapter::setViewImage(android::widget::ImageView arg0, jstring arg1)
	{
		callMethod<void>(
			"setViewImage",
			"(Landroid/widget/ImageView;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void SimpleCursorAdapter::setViewText(android::widget::TextView arg0, jstring arg1)
	{
		callMethod<void>(
			"setViewText",
			"(Landroid/widget/TextView;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	JObject SimpleCursorAdapter::swapCursor(JObject arg0)
	{
		return callObjectMethod(
			"swapCursor",
			"(Landroid/database/Cursor;)Landroid/database/Cursor;",
			arg0.object()
		);
	}
} // namespace android::widget

