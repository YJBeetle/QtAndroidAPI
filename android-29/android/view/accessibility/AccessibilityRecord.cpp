#include "../View.hpp"
#include "./AccessibilityNodeInfo.hpp"
#include "./AccessibilityRecord.hpp"

namespace android::view::accessibility
{
	// Fields
	
	AccessibilityRecord::AccessibilityRecord(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AccessibilityRecord::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityRecord;"
		);
	}
	QAndroidJniObject AccessibilityRecord::obtain(android::view::accessibility::AccessibilityRecord arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityRecord;)Landroid/view/accessibility/AccessibilityRecord;",
			arg0.__jniObject().object()
		);
	}
	jint AccessibilityRecord::getAddedCount()
	{
		return __thiz.callMethod<jint>(
			"getAddedCount",
			"()I"
		);
	}
	jstring AccessibilityRecord::getBeforeText()
	{
		return __thiz.callObjectMethod(
			"getBeforeText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring AccessibilityRecord::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring AccessibilityRecord::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AccessibilityRecord::getCurrentItemIndex()
	{
		return __thiz.callMethod<jint>(
			"getCurrentItemIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getFromIndex()
	{
		return __thiz.callMethod<jint>(
			"getFromIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getItemCount()
	{
		return __thiz.callMethod<jint>(
			"getItemCount",
			"()I"
		);
	}
	jint AccessibilityRecord::getMaxScrollX()
	{
		return __thiz.callMethod<jint>(
			"getMaxScrollX",
			"()I"
		);
	}
	jint AccessibilityRecord::getMaxScrollY()
	{
		return __thiz.callMethod<jint>(
			"getMaxScrollY",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityRecord::getParcelableData()
	{
		return __thiz.callObjectMethod(
			"getParcelableData",
			"()Landroid/os/Parcelable;"
		);
	}
	jint AccessibilityRecord::getRemovedCount()
	{
		return __thiz.callMethod<jint>(
			"getRemovedCount",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollDeltaX()
	{
		return __thiz.callMethod<jint>(
			"getScrollDeltaX",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollDeltaY()
	{
		return __thiz.callMethod<jint>(
			"getScrollDeltaY",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollX()
	{
		return __thiz.callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollY()
	{
		return __thiz.callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityRecord::getSource()
	{
		return __thiz.callObjectMethod(
			"getSource",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	QAndroidJniObject AccessibilityRecord::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/util/List;"
		);
	}
	jint AccessibilityRecord::getToIndex()
	{
		return __thiz.callMethod<jint>(
			"getToIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getWindowId()
	{
		return __thiz.callMethod<jint>(
			"getWindowId",
			"()I"
		);
	}
	jboolean AccessibilityRecord::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isFullScreen()
	{
		return __thiz.callMethod<jboolean>(
			"isFullScreen",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isPassword()
	{
		return __thiz.callMethod<jboolean>(
			"isPassword",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isScrollable()
	{
		return __thiz.callMethod<jboolean>(
			"isScrollable",
			"()Z"
		);
	}
	void AccessibilityRecord::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void AccessibilityRecord::setAddedCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAddedCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setBeforeText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setBeforeText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityRecord::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setClassName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityRecord::setContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityRecord::setCurrentItemIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentItemIndex",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setFromIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFromIndex",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setFullScreen(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFullScreen",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setItemCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setItemCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setMaxScrollX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxScrollX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setMaxScrollY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxScrollY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setParcelableData(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParcelableData",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityRecord::setPassword(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setRemovedCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRemovedCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollDeltaX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollDeltaX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollDeltaY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollDeltaY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScrollable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setSource(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityRecord::setSource(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityRecord::setToIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setToIndex",
			"(I)V",
			arg0
		);
	}
	jstring AccessibilityRecord::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::view::accessibility

