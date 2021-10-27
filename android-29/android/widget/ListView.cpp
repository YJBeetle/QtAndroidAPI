#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/View.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "./ListView.hpp"

namespace android::widget
{
	// Fields
	
	ListView::ListView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ListView::ListView(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ListView::ListView(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ListView::ListView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ListView::ListView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void ListView::addFooterView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addFooterView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ListView::addFooterView(android::view::View arg0, jobject arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"addFooterView",
			"(Landroid/view/View;Ljava/lang/Object;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ListView::addHeaderView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addHeaderView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ListView::addHeaderView(android::view::View arg0, jobject arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"addHeaderView",
			"(Landroid/view/View;Ljava/lang/Object;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean ListView::areFooterDividersEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"areFooterDividersEnabled",
			"()Z"
		);
	}
	jboolean ListView::areHeaderDividersEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"areHeaderDividersEnabled",
			"()Z"
		);
	}
	jboolean ListView::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring ListView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject ListView::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	jlongArray ListView::getCheckItemIds()
	{
		return __thiz.callObjectMethod(
			"getCheckItemIds",
			"()[J"
		).object<jlongArray>();
	}
	QAndroidJniObject ListView::getDivider()
	{
		return __thiz.callObjectMethod(
			"getDivider",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ListView::getDividerHeight()
	{
		return __thiz.callMethod<jint>(
			"getDividerHeight",
			"()I"
		);
	}
	jint ListView::getFooterViewsCount()
	{
		return __thiz.callMethod<jint>(
			"getFooterViewsCount",
			"()I"
		);
	}
	jint ListView::getHeaderViewsCount()
	{
		return __thiz.callMethod<jint>(
			"getHeaderViewsCount",
			"()I"
		);
	}
	jboolean ListView::getItemsCanFocus()
	{
		return __thiz.callMethod<jboolean>(
			"getItemsCanFocus",
			"()Z"
		);
	}
	jint ListView::getMaxScrollAmount()
	{
		return __thiz.callMethod<jint>(
			"getMaxScrollAmount",
			"()I"
		);
	}
	QAndroidJniObject ListView::getOverscrollFooter()
	{
		return __thiz.callObjectMethod(
			"getOverscrollFooter",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject ListView::getOverscrollHeader()
	{
		return __thiz.callObjectMethod(
			"getOverscrollHeader",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean ListView::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	void ListView::onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2)
	{
		__thiz.callMethod<void>(
			"onInitializeAccessibilityNodeInfoForItem",
			"(Landroid/view/View;ILandroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean ListView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ListView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean ListView::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ListView::removeFooterView(android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeFooterView",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ListView::removeHeaderView(android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeHeaderView",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ListView::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ListView::setAdapter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object()
		);
	}
	void ListView::setCacheColorHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCacheColorHint",
			"(I)V",
			arg0
		);
	}
	void ListView::setDivider(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setDivider",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ListView::setDividerHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDividerHeight",
			"(I)V",
			arg0
		);
	}
	void ListView::setFooterDividersEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFooterDividersEnabled",
			"(Z)V",
			arg0
		);
	}
	void ListView::setHeaderDividersEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHeaderDividersEnabled",
			"(Z)V",
			arg0
		);
	}
	void ListView::setItemsCanFocus(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setItemsCanFocus",
			"(Z)V",
			arg0
		);
	}
	void ListView::setOverscrollFooter(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setOverscrollFooter",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ListView::setOverscrollHeader(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setOverscrollHeader",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ListView::setRemoteViewsAdapter(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void ListView::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void ListView::setSelectionAfterHeaderView()
	{
		__thiz.callMethod<void>(
			"setSelectionAfterHeaderView",
			"()V"
		);
	}
	void ListView::smoothScrollByOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"smoothScrollByOffset",
			"(I)V",
			arg0
		);
	}
	void ListView::smoothScrollToPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"smoothScrollToPosition",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

