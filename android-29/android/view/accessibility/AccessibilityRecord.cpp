#include "../View.hpp"
#include "./AccessibilityNodeInfo.hpp"
#include "./AccessibilityRecord.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// QAndroidJniObject forward
	AccessibilityRecord::AccessibilityRecord(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::view::accessibility::AccessibilityRecord AccessibilityRecord::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityRecord;"
		);
	}
	android::view::accessibility::AccessibilityRecord AccessibilityRecord::obtain(android::view::accessibility::AccessibilityRecord arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityRecord;)Landroid/view/accessibility/AccessibilityRecord;",
			arg0.object()
		);
	}
	jint AccessibilityRecord::getAddedCount()
	{
		return callMethod<jint>(
			"getAddedCount",
			"()I"
		);
	}
	jstring AccessibilityRecord::getBeforeText()
	{
		return callObjectMethod(
			"getBeforeText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring AccessibilityRecord::getClassName()
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring AccessibilityRecord::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AccessibilityRecord::getCurrentItemIndex()
	{
		return callMethod<jint>(
			"getCurrentItemIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getFromIndex()
	{
		return callMethod<jint>(
			"getFromIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getItemCount()
	{
		return callMethod<jint>(
			"getItemCount",
			"()I"
		);
	}
	jint AccessibilityRecord::getMaxScrollX()
	{
		return callMethod<jint>(
			"getMaxScrollX",
			"()I"
		);
	}
	jint AccessibilityRecord::getMaxScrollY()
	{
		return callMethod<jint>(
			"getMaxScrollY",
			"()I"
		);
	}
	__JniBaseClass AccessibilityRecord::getParcelableData()
	{
		return callObjectMethod(
			"getParcelableData",
			"()Landroid/os/Parcelable;"
		);
	}
	jint AccessibilityRecord::getRemovedCount()
	{
		return callMethod<jint>(
			"getRemovedCount",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollDeltaX()
	{
		return callMethod<jint>(
			"getScrollDeltaX",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollDeltaY()
	{
		return callMethod<jint>(
			"getScrollDeltaY",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollX()
	{
		return callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollY()
	{
		return callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityRecord::getSource()
	{
		return callObjectMethod(
			"getSource",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	__JniBaseClass AccessibilityRecord::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/util/List;"
		);
	}
	jint AccessibilityRecord::getToIndex()
	{
		return callMethod<jint>(
			"getToIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getWindowId()
	{
		return callMethod<jint>(
			"getWindowId",
			"()I"
		);
	}
	jboolean AccessibilityRecord::isChecked()
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isFullScreen()
	{
		return callMethod<jboolean>(
			"isFullScreen",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isPassword()
	{
		return callMethod<jboolean>(
			"isPassword",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isScrollable()
	{
		return callMethod<jboolean>(
			"isScrollable",
			"()Z"
		);
	}
	void AccessibilityRecord::recycle()
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void AccessibilityRecord::setAddedCount(jint arg0)
	{
		callMethod<void>(
			"setAddedCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setBeforeText(jstring arg0)
	{
		callMethod<void>(
			"setBeforeText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityRecord::setChecked(jboolean arg0)
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setClassName(jstring arg0)
	{
		callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityRecord::setContentDescription(jstring arg0)
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityRecord::setCurrentItemIndex(jint arg0)
	{
		callMethod<void>(
			"setCurrentItemIndex",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setFromIndex(jint arg0)
	{
		callMethod<void>(
			"setFromIndex",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setFullScreen(jboolean arg0)
	{
		callMethod<void>(
			"setFullScreen",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setItemCount(jint arg0)
	{
		callMethod<void>(
			"setItemCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setMaxScrollX(jint arg0)
	{
		callMethod<void>(
			"setMaxScrollX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setMaxScrollY(jint arg0)
	{
		callMethod<void>(
			"setMaxScrollY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setParcelableData(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setParcelableData",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	void AccessibilityRecord::setPassword(jboolean arg0)
	{
		callMethod<void>(
			"setPassword",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setRemovedCount(jint arg0)
	{
		callMethod<void>(
			"setRemovedCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollDeltaX(jint arg0)
	{
		callMethod<void>(
			"setScrollDeltaX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollDeltaY(jint arg0)
	{
		callMethod<void>(
			"setScrollDeltaY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollX(jint arg0)
	{
		callMethod<void>(
			"setScrollX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollY(jint arg0)
	{
		callMethod<void>(
			"setScrollY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollable(jboolean arg0)
	{
		callMethod<void>(
			"setScrollable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setSource(android::view::View arg0)
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityRecord::setSource(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityRecord::setToIndex(jint arg0)
	{
		callMethod<void>(
			"setToIndex",
			"(I)V",
			arg0
		);
	}
	jstring AccessibilityRecord::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::view::accessibility

