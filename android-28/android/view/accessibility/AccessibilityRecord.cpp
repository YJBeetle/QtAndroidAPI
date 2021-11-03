#include "../View.hpp"
#include "./AccessibilityNodeInfo.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./AccessibilityRecord.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// QJniObject forward
	AccessibilityRecord::AccessibilityRecord(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::view::accessibility::AccessibilityRecord AccessibilityRecord::obtain()
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityRecord;"
		);
	}
	android::view::accessibility::AccessibilityRecord AccessibilityRecord::obtain(android::view::accessibility::AccessibilityRecord arg0)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityRecord;)Landroid/view/accessibility/AccessibilityRecord;",
			arg0.object()
		);
	}
	jint AccessibilityRecord::getAddedCount() const
	{
		return callMethod<jint>(
			"getAddedCount",
			"()I"
		);
	}
	JString AccessibilityRecord::getBeforeText() const
	{
		return callObjectMethod(
			"getBeforeText",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString AccessibilityRecord::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString AccessibilityRecord::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AccessibilityRecord::getCurrentItemIndex() const
	{
		return callMethod<jint>(
			"getCurrentItemIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getFromIndex() const
	{
		return callMethod<jint>(
			"getFromIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getItemCount() const
	{
		return callMethod<jint>(
			"getItemCount",
			"()I"
		);
	}
	jint AccessibilityRecord::getMaxScrollX() const
	{
		return callMethod<jint>(
			"getMaxScrollX",
			"()I"
		);
	}
	jint AccessibilityRecord::getMaxScrollY() const
	{
		return callMethod<jint>(
			"getMaxScrollY",
			"()I"
		);
	}
	JObject AccessibilityRecord::getParcelableData() const
	{
		return callObjectMethod(
			"getParcelableData",
			"()Landroid/os/Parcelable;"
		);
	}
	jint AccessibilityRecord::getRemovedCount() const
	{
		return callMethod<jint>(
			"getRemovedCount",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollDeltaX() const
	{
		return callMethod<jint>(
			"getScrollDeltaX",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollDeltaY() const
	{
		return callMethod<jint>(
			"getScrollDeltaY",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollX() const
	{
		return callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollY() const
	{
		return callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityRecord::getSource() const
	{
		return callObjectMethod(
			"getSource",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	JObject AccessibilityRecord::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/util/List;"
		);
	}
	jint AccessibilityRecord::getToIndex() const
	{
		return callMethod<jint>(
			"getToIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getWindowId() const
	{
		return callMethod<jint>(
			"getWindowId",
			"()I"
		);
	}
	jboolean AccessibilityRecord::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isFullScreen() const
	{
		return callMethod<jboolean>(
			"isFullScreen",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isPassword() const
	{
		return callMethod<jboolean>(
			"isPassword",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isScrollable() const
	{
		return callMethod<jboolean>(
			"isScrollable",
			"()Z"
		);
	}
	void AccessibilityRecord::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void AccessibilityRecord::setAddedCount(jint arg0) const
	{
		callMethod<void>(
			"setAddedCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setBeforeText(JString arg0) const
	{
		callMethod<void>(
			"setBeforeText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityRecord::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setClassName(JString arg0) const
	{
		callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityRecord::setContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityRecord::setCurrentItemIndex(jint arg0) const
	{
		callMethod<void>(
			"setCurrentItemIndex",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setFromIndex(jint arg0) const
	{
		callMethod<void>(
			"setFromIndex",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setFullScreen(jboolean arg0) const
	{
		callMethod<void>(
			"setFullScreen",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setItemCount(jint arg0) const
	{
		callMethod<void>(
			"setItemCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setMaxScrollX(jint arg0) const
	{
		callMethod<void>(
			"setMaxScrollX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setMaxScrollY(jint arg0) const
	{
		callMethod<void>(
			"setMaxScrollY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setParcelableData(JObject arg0) const
	{
		callMethod<void>(
			"setParcelableData",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	void AccessibilityRecord::setPassword(jboolean arg0) const
	{
		callMethod<void>(
			"setPassword",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setRemovedCount(jint arg0) const
	{
		callMethod<void>(
			"setRemovedCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollDeltaX(jint arg0) const
	{
		callMethod<void>(
			"setScrollDeltaX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollDeltaY(jint arg0) const
	{
		callMethod<void>(
			"setScrollDeltaY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollX(jint arg0) const
	{
		callMethod<void>(
			"setScrollX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollY(jint arg0) const
	{
		callMethod<void>(
			"setScrollY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollable(jboolean arg0) const
	{
		callMethod<void>(
			"setScrollable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setSource(android::view::View arg0) const
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityRecord::setSource(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityRecord::setToIndex(jint arg0) const
	{
		callMethod<void>(
			"setToIndex",
			"(I)V",
			arg0
		);
	}
	JString AccessibilityRecord::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view::accessibility

