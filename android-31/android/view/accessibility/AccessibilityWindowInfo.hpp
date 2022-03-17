#pragma once

#include "../../graphics/Rect.def.hpp"
#include "../../graphics/Region.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./AccessibilityNodeInfo.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AccessibilityWindowInfo.def.hpp"

namespace android::view::accessibility
{
	// Fields
	inline JObject AccessibilityWindowInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityWindowInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AccessibilityWindowInfo::TYPE_ACCESSIBILITY_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_ACCESSIBILITY_OVERLAY"
		);
	}
	inline jint AccessibilityWindowInfo::TYPE_APPLICATION()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_APPLICATION"
		);
	}
	inline jint AccessibilityWindowInfo::TYPE_INPUT_METHOD()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_INPUT_METHOD"
		);
	}
	inline jint AccessibilityWindowInfo::TYPE_SPLIT_SCREEN_DIVIDER()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_SPLIT_SCREEN_DIVIDER"
		);
	}
	inline jint AccessibilityWindowInfo::TYPE_SYSTEM()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_SYSTEM"
		);
	}
	
	// Constructors
	inline AccessibilityWindowInfo::AccessibilityWindowInfo()
		: JObject(
			"android.view.accessibility.AccessibilityWindowInfo",
			"()V"
		) {}
	inline AccessibilityWindowInfo::AccessibilityWindowInfo(android::view::accessibility::AccessibilityWindowInfo &arg0)
		: JObject(
			"android.view.accessibility.AccessibilityWindowInfo",
			"(Landroid/view/accessibility/AccessibilityWindowInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::accessibility::AccessibilityWindowInfo AccessibilityWindowInfo::obtain()
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityWindowInfo",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;"
		);
	}
	inline android::view::accessibility::AccessibilityWindowInfo AccessibilityWindowInfo::obtain(android::view::accessibility::AccessibilityWindowInfo arg0)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityWindowInfo",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityWindowInfo;)Landroid/view/accessibility/AccessibilityWindowInfo;",
			arg0.object()
		);
	}
	inline jint AccessibilityWindowInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AccessibilityWindowInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityWindowInfo::getAnchor() const
	{
		return callObjectMethod(
			"getAnchor",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline void AccessibilityWindowInfo::getBoundsInScreen(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline android::view::accessibility::AccessibilityWindowInfo AccessibilityWindowInfo::getChild(jint arg0) const
	{
		return callObjectMethod(
			"getChild",
			"(I)Landroid/view/accessibility/AccessibilityWindowInfo;",
			arg0
		);
	}
	inline jint AccessibilityWindowInfo::getChildCount() const
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	inline jint AccessibilityWindowInfo::getDisplayId() const
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	inline jint AccessibilityWindowInfo::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint AccessibilityWindowInfo::getLayer() const
	{
		return callMethod<jint>(
			"getLayer",
			"()I"
		);
	}
	inline android::view::accessibility::AccessibilityWindowInfo AccessibilityWindowInfo::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;"
		);
	}
	inline void AccessibilityWindowInfo::getRegionInScreen(android::graphics::Region arg0) const
	{
		callMethod<void>(
			"getRegionInScreen",
			"(Landroid/graphics/Region;)V",
			arg0.object()
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityWindowInfo::getRoot() const
	{
		return callObjectMethod(
			"getRoot",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline JString AccessibilityWindowInfo::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AccessibilityWindowInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint AccessibilityWindowInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AccessibilityWindowInfo::isAccessibilityFocused() const
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	inline jboolean AccessibilityWindowInfo::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	inline jboolean AccessibilityWindowInfo::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	inline jboolean AccessibilityWindowInfo::isInPictureInPictureMode() const
	{
		return callMethod<jboolean>(
			"isInPictureInPictureMode",
			"()Z"
		);
	}
	inline void AccessibilityWindowInfo::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	inline JString AccessibilityWindowInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AccessibilityWindowInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::accessibility

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif
