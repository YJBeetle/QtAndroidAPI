#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO
#define ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}
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
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getParent();
		jint getId();
		jint getLayer();
		QAndroidJniObject getRoot();
		jint getType();
		jboolean isActive();
		void getBoundsInScreen(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getChild(jint arg0);
		QAndroidJniObject getAnchor();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jboolean isInPictureInPictureMode();
		QAndroidJniObject getTitle();
		jint getChildCount();
		jboolean isFocused();
		jboolean isAccessibilityFocused();
		static QAndroidJniObject obtain();
		static QAndroidJniObject obtain(__jni_impl::android::view::accessibility::AccessibilityWindowInfo arg0);
		void recycle();
	};
} // namespace __jni_impl::android::view::accessibility

#include "AccessibilityNodeInfo.hpp"
#include "../../graphics/Rect.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::accessibility
{
	// Fields
	QAndroidJniObject AccessibilityWindowInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityWindowInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint AccessibilityWindowInfo::TYPE_ACCESSIBILITY_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_ACCESSIBILITY_OVERLAY");
	}
	jint AccessibilityWindowInfo::TYPE_APPLICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_APPLICATION");
	}
	jint AccessibilityWindowInfo::TYPE_INPUT_METHOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_INPUT_METHOD");
	}
	jint AccessibilityWindowInfo::TYPE_SPLIT_SCREEN_DIVIDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_SPLIT_SCREEN_DIVIDER");
	}
	jint AccessibilityWindowInfo::TYPE_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityWindowInfo",
			"TYPE_SYSTEM");
	}
	
	// Constructors
	void AccessibilityWindowInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityWindowInfo",
			"(V)V");
	}
	
	// Methods
	jboolean AccessibilityWindowInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject AccessibilityWindowInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint AccessibilityWindowInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject AccessibilityWindowInfo::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;");
	}
	jint AccessibilityWindowInfo::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I");
	}
	jint AccessibilityWindowInfo::getLayer()
	{
		return __thiz.callMethod<jint>(
			"getLayer",
			"()I");
	}
	QAndroidJniObject AccessibilityWindowInfo::getRoot()
	{
		return __thiz.callObjectMethod(
			"getRoot",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;");
	}
	jint AccessibilityWindowInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I");
	}
	jboolean AccessibilityWindowInfo::isActive()
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"()Z");
	}
	void AccessibilityWindowInfo::getBoundsInScreen(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccessibilityWindowInfo::getChild(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(I)Landroid/view/accessibility/AccessibilityWindowInfo;",
			arg0);
	}
	QAndroidJniObject AccessibilityWindowInfo::getAnchor()
	{
		return __thiz.callObjectMethod(
			"getAnchor",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;");
	}
	jint AccessibilityWindowInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void AccessibilityWindowInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean AccessibilityWindowInfo::isInPictureInPictureMode()
	{
		return __thiz.callMethod<jboolean>(
			"isInPictureInPictureMode",
			"()Z");
	}
	QAndroidJniObject AccessibilityWindowInfo::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;");
	}
	jint AccessibilityWindowInfo::getChildCount()
	{
		return __thiz.callMethod<jint>(
			"getChildCount",
			"()I");
	}
	jboolean AccessibilityWindowInfo::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z");
	}
	jboolean AccessibilityWindowInfo::isAccessibilityFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z");
	}
	QAndroidJniObject AccessibilityWindowInfo::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityWindowInfo",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;");
	}
	QAndroidJniObject AccessibilityWindowInfo::obtain(__jni_impl::android::view::accessibility::AccessibilityWindowInfo arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityWindowInfo",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityWindowInfo;)Landroid/view/accessibility/AccessibilityWindowInfo;",
			arg0.__jniObject().object());
	}
	void AccessibilityWindowInfo::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V");
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

#endif // ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO

