#include "../../graphics/Rect.hpp"
#include "../../os/Parcel.hpp"
#include "./AccessibilityNodeInfo.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AccessibilityWindowInfo.hpp"

namespace android::view::accessibility
{
	// Fields
	JObject AccessibilityWindowInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityWindowInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AccessibilityWindowInfo::TYPE_ACCESSIBILITY_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_ACCESSIBILITY_OVERLAY"
		);
	}
	jint AccessibilityWindowInfo::TYPE_APPLICATION()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_APPLICATION"
		);
	}
	jint AccessibilityWindowInfo::TYPE_INPUT_METHOD()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_INPUT_METHOD"
		);
	}
	jint AccessibilityWindowInfo::TYPE_SPLIT_SCREEN_DIVIDER()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_SPLIT_SCREEN_DIVIDER"
		);
	}
	jint AccessibilityWindowInfo::TYPE_SYSTEM()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_SYSTEM"
		);
	}
	
	// QJniObject forward
	AccessibilityWindowInfo::AccessibilityWindowInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::view::accessibility::AccessibilityWindowInfo AccessibilityWindowInfo::obtain()
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityWindowInfo",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;"
		);
	}
	android::view::accessibility::AccessibilityWindowInfo AccessibilityWindowInfo::obtain(android::view::accessibility::AccessibilityWindowInfo arg0)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityWindowInfo",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityWindowInfo;)Landroid/view/accessibility/AccessibilityWindowInfo;",
			arg0.object()
		);
	}
	jint AccessibilityWindowInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AccessibilityWindowInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityWindowInfo::getAnchor() const
	{
		return callObjectMethod(
			"getAnchor",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	void AccessibilityWindowInfo::getBoundsInScreen(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	android::view::accessibility::AccessibilityWindowInfo AccessibilityWindowInfo::getChild(jint arg0) const
	{
		return callObjectMethod(
			"getChild",
			"(I)Landroid/view/accessibility/AccessibilityWindowInfo;",
			arg0
		);
	}
	jint AccessibilityWindowInfo::getChildCount() const
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	jint AccessibilityWindowInfo::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint AccessibilityWindowInfo::getLayer() const
	{
		return callMethod<jint>(
			"getLayer",
			"()I"
		);
	}
	android::view::accessibility::AccessibilityWindowInfo AccessibilityWindowInfo::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityWindowInfo::getRoot() const
	{
		return callObjectMethod(
			"getRoot",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	JString AccessibilityWindowInfo::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AccessibilityWindowInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint AccessibilityWindowInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AccessibilityWindowInfo::isAccessibilityFocused() const
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean AccessibilityWindowInfo::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	jboolean AccessibilityWindowInfo::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean AccessibilityWindowInfo::isInPictureInPictureMode() const
	{
		return callMethod<jboolean>(
			"isInPictureInPictureMode",
			"()Z"
		);
	}
	void AccessibilityWindowInfo::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	JString AccessibilityWindowInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AccessibilityWindowInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::accessibility

