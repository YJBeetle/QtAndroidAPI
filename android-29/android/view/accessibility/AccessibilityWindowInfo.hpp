#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityWindowInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_ACCESSIBILITY_OVERLAY();
		static jint TYPE_APPLICATION();
		static jint TYPE_INPUT_METHOD();
		static jint TYPE_SPLIT_SCREEN_DIVIDER();
		static jint TYPE_SYSTEM();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject obtain();
		static QAndroidJniObject obtain(__jni_impl::android::view::accessibility::AccessibilityWindowInfo arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getAnchor();
		void getBoundsInScreen(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getChild(jint arg0);
		jint getChildCount();
		jint getId();
		jint getLayer();
		QAndroidJniObject getParent();
		QAndroidJniObject getRoot();
		jstring getTitle();
		jint getType();
		jint hashCode();
		jboolean isAccessibilityFocused();
		jboolean isActive();
		jboolean isFocused();
		jboolean isInPictureInPictureMode();
		void recycle();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::accessibility

#include "../../graphics/Rect.hpp"
#include "../../os/Parcel.hpp"
#include "AccessibilityNodeInfo.hpp"

namespace __jni_impl::android::view::accessibility
{
	// Fields
	QAndroidJniObject AccessibilityWindowInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityWindowInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AccessibilityWindowInfo::TYPE_ACCESSIBILITY_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_ACCESSIBILITY_OVERLAY"
		);
	}
	jint AccessibilityWindowInfo::TYPE_APPLICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_APPLICATION"
		);
	}
	jint AccessibilityWindowInfo::TYPE_INPUT_METHOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_INPUT_METHOD"
		);
	}
	jint AccessibilityWindowInfo::TYPE_SPLIT_SCREEN_DIVIDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_SPLIT_SCREEN_DIVIDER"
		);
	}
	jint AccessibilityWindowInfo::TYPE_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_SYSTEM"
		);
	}
	
	// Constructors
	void AccessibilityWindowInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityWindowInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AccessibilityWindowInfo::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityWindowInfo",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;"
		);
	}
	QAndroidJniObject AccessibilityWindowInfo::obtain(__jni_impl::android::view::accessibility::AccessibilityWindowInfo arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityWindowInfo",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityWindowInfo;)Landroid/view/accessibility/AccessibilityWindowInfo;",
			arg0.__jniObject().object()
		);
	}
	jint AccessibilityWindowInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AccessibilityWindowInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject AccessibilityWindowInfo::getAnchor()
	{
		return __thiz.callObjectMethod(
			"getAnchor",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	void AccessibilityWindowInfo::getBoundsInScreen(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityWindowInfo::getChild(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(I)Landroid/view/accessibility/AccessibilityWindowInfo;",
			arg0
		);
	}
	jint AccessibilityWindowInfo::getChildCount()
	{
		return __thiz.callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	jint AccessibilityWindowInfo::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint AccessibilityWindowInfo::getLayer()
	{
		return __thiz.callMethod<jint>(
			"getLayer",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityWindowInfo::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;"
		);
	}
	QAndroidJniObject AccessibilityWindowInfo::getRoot()
	{
		return __thiz.callObjectMethod(
			"getRoot",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	jstring AccessibilityWindowInfo::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AccessibilityWindowInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint AccessibilityWindowInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AccessibilityWindowInfo::isAccessibilityFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean AccessibilityWindowInfo::isActive()
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	jboolean AccessibilityWindowInfo::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean AccessibilityWindowInfo::isInPictureInPictureMode()
	{
		return __thiz.callMethod<jboolean>(
			"isInPictureInPictureMode",
			"()Z"
		);
	}
	void AccessibilityWindowInfo::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	jstring AccessibilityWindowInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AccessibilityWindowInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityWindowInfo : public __jni_impl::android::view::accessibility::AccessibilityWindowInfo
	{
	public:
		AccessibilityWindowInfo(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityWindowInfo()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

