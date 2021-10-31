#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./ImageView.hpp"
#include "./TextView.hpp"
#include "./SimpleCursorAdapter.hpp"

namespace android::widget
{
	// Fields
	
	SimpleCursorAdapter::SimpleCursorAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SimpleCursorAdapter::SimpleCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jarray arg3, jintArray arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	SimpleCursorAdapter::SimpleCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jarray arg3, jintArray arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;[Ljava/lang/String;[II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5
		);
	}
	
	// Methods
	void SimpleCursorAdapter::bindView(android::view::View arg0, android::content::Context arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"bindView",
			"(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void SimpleCursorAdapter::changeCursorAndColumns(__JniBaseClass arg0, jarray arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"changeCursorAndColumns",
			"(Landroid/database/Cursor;[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jstring SimpleCursorAdapter::convertToString(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"convertToString",
			"(Landroid/database/Cursor;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject SimpleCursorAdapter::getCursorToStringConverter()
	{
		return __thiz.callObjectMethod(
			"getCursorToStringConverter",
			"()Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;"
		);
	}
	jint SimpleCursorAdapter::getStringConversionColumn()
	{
		return __thiz.callMethod<jint>(
			"getStringConversionColumn",
			"()I"
		);
	}
	QAndroidJniObject SimpleCursorAdapter::getViewBinder()
	{
		return __thiz.callObjectMethod(
			"getViewBinder",
			"()Landroid/widget/SimpleCursorAdapter$ViewBinder;"
		);
	}
	void SimpleCursorAdapter::setCursorToStringConverter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCursorToStringConverter",
			"(Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleCursorAdapter::setStringConversionColumn(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStringConversionColumn",
			"(I)V",
			arg0
		);
	}
	void SimpleCursorAdapter::setViewBinder(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setViewBinder",
			"(Landroid/widget/SimpleCursorAdapter$ViewBinder;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleCursorAdapter::setViewImage(android::widget::ImageView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setViewImage",
			"(Landroid/widget/ImageView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SimpleCursorAdapter::setViewText(android::widget::TextView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setViewText",
			"(Landroid/widget/TextView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SimpleCursorAdapter::swapCursor(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"swapCursor",
			"(Landroid/database/Cursor;)Landroid/database/Cursor;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

