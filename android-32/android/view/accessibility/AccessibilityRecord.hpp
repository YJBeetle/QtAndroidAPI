#pragma once

#include "../View.def.hpp"
#include "./AccessibilityNodeInfo.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./AccessibilityRecord.def.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// Constructors
	inline AccessibilityRecord::AccessibilityRecord()
		: JObject(
			"android.view.accessibility.AccessibilityRecord",
			"()V"
		) {}
	inline AccessibilityRecord::AccessibilityRecord(android::view::accessibility::AccessibilityRecord &arg0)
		: JObject(
			"android.view.accessibility.AccessibilityRecord",
			"(Landroid/view/accessibility/AccessibilityRecord;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::accessibility::AccessibilityRecord AccessibilityRecord::obtain()
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityRecord;"
		);
	}
	inline android::view::accessibility::AccessibilityRecord AccessibilityRecord::obtain(android::view::accessibility::AccessibilityRecord arg0)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityRecord;)Landroid/view/accessibility/AccessibilityRecord;",
			arg0.object()
		);
	}
	inline jint AccessibilityRecord::getAddedCount() const
	{
		return callMethod<jint>(
			"getAddedCount",
			"()I"
		);
	}
	inline JString AccessibilityRecord::getBeforeText() const
	{
		return callObjectMethod(
			"getBeforeText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString AccessibilityRecord::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString AccessibilityRecord::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AccessibilityRecord::getCurrentItemIndex() const
	{
		return callMethod<jint>(
			"getCurrentItemIndex",
			"()I"
		);
	}
	inline jint AccessibilityRecord::getFromIndex() const
	{
		return callMethod<jint>(
			"getFromIndex",
			"()I"
		);
	}
	inline jint AccessibilityRecord::getItemCount() const
	{
		return callMethod<jint>(
			"getItemCount",
			"()I"
		);
	}
	inline jint AccessibilityRecord::getMaxScrollX() const
	{
		return callMethod<jint>(
			"getMaxScrollX",
			"()I"
		);
	}
	inline jint AccessibilityRecord::getMaxScrollY() const
	{
		return callMethod<jint>(
			"getMaxScrollY",
			"()I"
		);
	}
	inline JObject AccessibilityRecord::getParcelableData() const
	{
		return callObjectMethod(
			"getParcelableData",
			"()Landroid/os/Parcelable;"
		);
	}
	inline jint AccessibilityRecord::getRemovedCount() const
	{
		return callMethod<jint>(
			"getRemovedCount",
			"()I"
		);
	}
	inline jint AccessibilityRecord::getScrollDeltaX() const
	{
		return callMethod<jint>(
			"getScrollDeltaX",
			"()I"
		);
	}
	inline jint AccessibilityRecord::getScrollDeltaY() const
	{
		return callMethod<jint>(
			"getScrollDeltaY",
			"()I"
		);
	}
	inline jint AccessibilityRecord::getScrollX() const
	{
		return callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	inline jint AccessibilityRecord::getScrollY() const
	{
		return callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityRecord::getSource() const
	{
		return callObjectMethod(
			"getSource",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline JObject AccessibilityRecord::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/util/List;"
		);
	}
	inline jint AccessibilityRecord::getToIndex() const
	{
		return callMethod<jint>(
			"getToIndex",
			"()I"
		);
	}
	inline jint AccessibilityRecord::getWindowId() const
	{
		return callMethod<jint>(
			"getWindowId",
			"()I"
		);
	}
	inline jboolean AccessibilityRecord::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	inline jboolean AccessibilityRecord::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean AccessibilityRecord::isFullScreen() const
	{
		return callMethod<jboolean>(
			"isFullScreen",
			"()Z"
		);
	}
	inline jboolean AccessibilityRecord::isPassword() const
	{
		return callMethod<jboolean>(
			"isPassword",
			"()Z"
		);
	}
	inline jboolean AccessibilityRecord::isScrollable() const
	{
		return callMethod<jboolean>(
			"isScrollable",
			"()Z"
		);
	}
	inline void AccessibilityRecord::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	inline void AccessibilityRecord::setAddedCount(jint arg0) const
	{
		callMethod<void>(
			"setAddedCount",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setBeforeText(JString arg0) const
	{
		callMethod<void>(
			"setBeforeText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityRecord::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setClassName(JString arg0) const
	{
		callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityRecord::setContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityRecord::setCurrentItemIndex(jint arg0) const
	{
		callMethod<void>(
			"setCurrentItemIndex",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setFromIndex(jint arg0) const
	{
		callMethod<void>(
			"setFromIndex",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setFullScreen(jboolean arg0) const
	{
		callMethod<void>(
			"setFullScreen",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setItemCount(jint arg0) const
	{
		callMethod<void>(
			"setItemCount",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setMaxScrollX(jint arg0) const
	{
		callMethod<void>(
			"setMaxScrollX",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setMaxScrollY(jint arg0) const
	{
		callMethod<void>(
			"setMaxScrollY",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setParcelableData(JObject arg0) const
	{
		callMethod<void>(
			"setParcelableData",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	inline void AccessibilityRecord::setPassword(jboolean arg0) const
	{
		callMethod<void>(
			"setPassword",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setRemovedCount(jint arg0) const
	{
		callMethod<void>(
			"setRemovedCount",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setScrollDeltaX(jint arg0) const
	{
		callMethod<void>(
			"setScrollDeltaX",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setScrollDeltaY(jint arg0) const
	{
		callMethod<void>(
			"setScrollDeltaY",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setScrollX(jint arg0) const
	{
		callMethod<void>(
			"setScrollX",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setScrollY(jint arg0) const
	{
		callMethod<void>(
			"setScrollY",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setScrollable(jboolean arg0) const
	{
		callMethod<void>(
			"setScrollable",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityRecord::setSource(android::view::View arg0) const
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AccessibilityRecord::setSource(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AccessibilityRecord::setToIndex(jint arg0) const
	{
		callMethod<void>(
			"setToIndex",
			"(I)V",
			arg0
		);
	}
	inline JString AccessibilityRecord::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view::accessibility

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif
