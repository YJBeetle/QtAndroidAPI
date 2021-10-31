#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Filter.hpp"
#include "./CursorAdapter.hpp"

namespace android::widget
{
	// Fields
	jint CursorAdapter::FLAG_AUTO_REQUERY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.CursorAdapter",
			"FLAG_AUTO_REQUERY"
		);
	}
	jint CursorAdapter::FLAG_REGISTER_CONTENT_OBSERVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.CursorAdapter",
			"FLAG_REGISTER_CONTENT_OBSERVER"
		);
	}
	
	CursorAdapter::CursorAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CursorAdapter::CursorAdapter(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CursorAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	CursorAdapter::CursorAdapter(android::content::Context arg0, __JniBaseClass arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CursorAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	CursorAdapter::CursorAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CursorAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	void CursorAdapter::bindView(android::view::View arg0, android::content::Context arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"bindView",
			"(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CursorAdapter::changeCursor(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"changeCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	jstring CursorAdapter::convertToString(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"convertToString",
			"(Landroid/database/Cursor;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint CursorAdapter::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	QAndroidJniObject CursorAdapter::getCursor()
	{
		return __thiz.callObjectMethod(
			"getCursor",
			"()Landroid/database/Cursor;"
		);
	}
	QAndroidJniObject CursorAdapter::getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CursorAdapter::getDropDownViewTheme()
	{
		return __thiz.callObjectMethod(
			"getDropDownViewTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	QAndroidJniObject CursorAdapter::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	QAndroidJniObject CursorAdapter::getFilterQueryProvider()
	{
		return __thiz.callObjectMethod(
			"getFilterQueryProvider",
			"()Landroid/widget/FilterQueryProvider;"
		);
	}
	jobject CursorAdapter::getItem(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jlong CursorAdapter::getItemId(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	QAndroidJniObject CursorAdapter::getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean CursorAdapter::hasStableIds()
	{
		return __thiz.callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	QAndroidJniObject CursorAdapter::newDropDownView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"newDropDownView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CursorAdapter::newView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"newView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CursorAdapter::runQueryOnBackgroundThread(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"runQueryOnBackgroundThread",
			"(Ljava/lang/CharSequence;)Landroid/database/Cursor;",
			arg0
		);
	}
	void CursorAdapter::setDropDownViewTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void CursorAdapter::setFilterQueryProvider(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilterQueryProvider",
			"(Landroid/widget/FilterQueryProvider;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CursorAdapter::swapCursor(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"swapCursor",
			"(Landroid/database/Cursor;)Landroid/database/Cursor;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

