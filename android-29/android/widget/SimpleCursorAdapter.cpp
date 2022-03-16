#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./ImageView.hpp"
#include "./TextView.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./SimpleCursorAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	SimpleCursorAdapter::SimpleCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, JArray arg3, JIntArray arg4)
		: android::widget::ResourceCursorAdapter(
			"android.widget.SimpleCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object<jarray>(),
			arg4.object<jintArray>()
		) {}
	SimpleCursorAdapter::SimpleCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, JArray arg3, JIntArray arg4, jint arg5)
		: android::widget::ResourceCursorAdapter(
			"android.widget.SimpleCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;[Ljava/lang/String;[II)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object<jarray>(),
			arg4.object<jintArray>(),
			arg5
		) {}
	
	// Methods
	void SimpleCursorAdapter::bindView(android::view::View arg0, android::content::Context arg1, JObject arg2) const
	{
		callMethod<void>(
			"bindView",
			"(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void SimpleCursorAdapter::changeCursorAndColumns(JObject arg0, JArray arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"changeCursorAndColumns",
			"(Landroid/database/Cursor;[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jintArray>()
		);
	}
	JString SimpleCursorAdapter::convertToString(JObject arg0) const
	{
		return callObjectMethod(
			"convertToString",
			"(Landroid/database/Cursor;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JObject SimpleCursorAdapter::getCursorToStringConverter() const
	{
		return callObjectMethod(
			"getCursorToStringConverter",
			"()Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;"
		);
	}
	jint SimpleCursorAdapter::getStringConversionColumn() const
	{
		return callMethod<jint>(
			"getStringConversionColumn",
			"()I"
		);
	}
	JObject SimpleCursorAdapter::getViewBinder() const
	{
		return callObjectMethod(
			"getViewBinder",
			"()Landroid/widget/SimpleCursorAdapter$ViewBinder;"
		);
	}
	void SimpleCursorAdapter::setCursorToStringConverter(JObject arg0) const
	{
		callMethod<void>(
			"setCursorToStringConverter",
			"(Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;)V",
			arg0.object()
		);
	}
	void SimpleCursorAdapter::setStringConversionColumn(jint arg0) const
	{
		callMethod<void>(
			"setStringConversionColumn",
			"(I)V",
			arg0
		);
	}
	void SimpleCursorAdapter::setViewBinder(JObject arg0) const
	{
		callMethod<void>(
			"setViewBinder",
			"(Landroid/widget/SimpleCursorAdapter$ViewBinder;)V",
			arg0.object()
		);
	}
	void SimpleCursorAdapter::setViewImage(android::widget::ImageView arg0, JString arg1) const
	{
		callMethod<void>(
			"setViewImage",
			"(Landroid/widget/ImageView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void SimpleCursorAdapter::setViewText(android::widget::TextView arg0, JString arg1) const
	{
		callMethod<void>(
			"setViewText",
			"(Landroid/widget/TextView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JObject SimpleCursorAdapter::swapCursor(JObject arg0) const
	{
		return callObjectMethod(
			"swapCursor",
			"(Landroid/database/Cursor;)Landroid/database/Cursor;",
			arg0.object()
		);
	}
} // namespace android::widget

