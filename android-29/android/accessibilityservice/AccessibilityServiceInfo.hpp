#pragma once

#ifndef ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICEINFO
#define ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICEINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::pm
{
	class ResolveInfo;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAPABILITY_CAN_CONTROL_MAGNIFICATION();
		static jint CAPABILITY_CAN_PERFORM_GESTURES();
		static jint CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY();
		static jint CAPABILITY_CAN_REQUEST_FILTER_KEY_EVENTS();
		static jint CAPABILITY_CAN_REQUEST_FINGERPRINT_GESTURES();
		static jint CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION();
		static jint CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT();
		static QAndroidJniObject CREATOR();
		static jint DEFAULT();
		static jint FEEDBACK_ALL_MASK();
		static jint FEEDBACK_AUDIBLE();
		static jint FEEDBACK_BRAILLE();
		static jint FEEDBACK_GENERIC();
		static jint FEEDBACK_HAPTIC();
		static jint FEEDBACK_SPOKEN();
		static jint FEEDBACK_VISUAL();
		static jint FLAG_ENABLE_ACCESSIBILITY_VOLUME();
		static jint FLAG_INCLUDE_NOT_IMPORTANT_VIEWS();
		static jint FLAG_REPORT_VIEW_IDS();
		static jint FLAG_REQUEST_ACCESSIBILITY_BUTTON();
		static jint FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY();
		static jint FLAG_REQUEST_FILTER_KEY_EVENTS();
		static jint FLAG_REQUEST_FINGERPRINT_GESTURES();
		static jint FLAG_REQUEST_SHORTCUT_WARNING_DIALOG_SPOKEN_FEEDBACK();
		static jint FLAG_REQUEST_TOUCH_EXPLORATION_MODE();
		static jint FLAG_RETRIEVE_INTERACTIVE_WINDOWS();
		jint eventTypes();
		jint feedbackType();
		jint flags();
		jlong notificationTimeout();
		QAndroidJniObject packageNames();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getId();
		QAndroidJniObject getResolveInfo();
		QAndroidJniObject getSettingsActivityName();
		jboolean getCanRetrieveWindowContent();
		QAndroidJniObject loadSummary(__jni_impl::android::content::pm::PackageManager arg0);
		void setNonInteractiveUiTimeoutMillis(jint arg0);
		jint getNonInteractiveUiTimeoutMillis();
		void setInteractiveUiTimeoutMillis(jint arg0);
		jint getInteractiveUiTimeoutMillis();
		static QAndroidJniObject feedbackTypeToString(jint arg0);
		static QAndroidJniObject flagToString(jint arg0);
		static QAndroidJniObject capabilityToString(jint arg0);
		jint getCapabilities();
		QAndroidJniObject getDescription();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject loadDescription(__jni_impl::android::content::pm::PackageManager arg0);
	};
} // namespace __jni_impl::android::accessibilityservice

#include "../content/pm/ResolveInfo.hpp"
#include "../content/pm/PackageManager.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::accessibilityservice
{
	// Fields
	jint AccessibilityServiceInfo::CAPABILITY_CAN_CONTROL_MAGNIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_CONTROL_MAGNIFICATION");
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_PERFORM_GESTURES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_PERFORM_GESTURES");
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY");
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_FILTER_KEY_EVENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_FILTER_KEY_EVENTS");
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_FINGERPRINT_GESTURES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_FINGERPRINT_GESTURES");
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION");
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT");
	}
	QAndroidJniObject AccessibilityServiceInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint AccessibilityServiceInfo::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"DEFAULT");
	}
	jint AccessibilityServiceInfo::FEEDBACK_ALL_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_ALL_MASK");
	}
	jint AccessibilityServiceInfo::FEEDBACK_AUDIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_AUDIBLE");
	}
	jint AccessibilityServiceInfo::FEEDBACK_BRAILLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_BRAILLE");
	}
	jint AccessibilityServiceInfo::FEEDBACK_GENERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_GENERIC");
	}
	jint AccessibilityServiceInfo::FEEDBACK_HAPTIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_HAPTIC");
	}
	jint AccessibilityServiceInfo::FEEDBACK_SPOKEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_SPOKEN");
	}
	jint AccessibilityServiceInfo::FEEDBACK_VISUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_VISUAL");
	}
	jint AccessibilityServiceInfo::FLAG_ENABLE_ACCESSIBILITY_VOLUME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_ENABLE_ACCESSIBILITY_VOLUME");
	}
	jint AccessibilityServiceInfo::FLAG_INCLUDE_NOT_IMPORTANT_VIEWS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_INCLUDE_NOT_IMPORTANT_VIEWS");
	}
	jint AccessibilityServiceInfo::FLAG_REPORT_VIEW_IDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REPORT_VIEW_IDS");
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_ACCESSIBILITY_BUTTON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_ACCESSIBILITY_BUTTON");
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY");
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_FILTER_KEY_EVENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_FILTER_KEY_EVENTS");
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_FINGERPRINT_GESTURES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_FINGERPRINT_GESTURES");
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_SHORTCUT_WARNING_DIALOG_SPOKEN_FEEDBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_SHORTCUT_WARNING_DIALOG_SPOKEN_FEEDBACK");
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_TOUCH_EXPLORATION_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_TOUCH_EXPLORATION_MODE");
	}
	jint AccessibilityServiceInfo::FLAG_RETRIEVE_INTERACTIVE_WINDOWS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_RETRIEVE_INTERACTIVE_WINDOWS");
	}
	jint AccessibilityServiceInfo::eventTypes()
	{
		return __thiz.getField<jint>(
			"eventTypes");
	}
	jint AccessibilityServiceInfo::feedbackType()
	{
		return __thiz.getField<jint>(
			"feedbackType");
	}
	jint AccessibilityServiceInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags");
	}
	jlong AccessibilityServiceInfo::notificationTimeout()
	{
		return __thiz.getField<jlong>(
			"notificationTimeout");
	}
	QAndroidJniObject AccessibilityServiceInfo::packageNames()
	{
		return __thiz.getObjectField(
			"packageNames",
			"[Ljava/lang/String;");
	}
	
	// Constructors
	void AccessibilityServiceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"()V");
	}
	
	// Methods
	jboolean AccessibilityServiceInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject AccessibilityServiceInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint AccessibilityServiceInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject AccessibilityServiceInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject AccessibilityServiceInfo::getResolveInfo()
	{
		return __thiz.callObjectMethod(
			"getResolveInfo",
			"()Landroid/content/pm/ResolveInfo;");
	}
	QAndroidJniObject AccessibilityServiceInfo::getSettingsActivityName()
	{
		return __thiz.callObjectMethod(
			"getSettingsActivityName",
			"()Ljava/lang/String;");
	}
	jboolean AccessibilityServiceInfo::getCanRetrieveWindowContent()
	{
		return __thiz.callMethod<jboolean>(
			"getCanRetrieveWindowContent",
			"()Z");
	}
	QAndroidJniObject AccessibilityServiceInfo::loadSummary(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadSummary",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
	void AccessibilityServiceInfo::setNonInteractiveUiTimeoutMillis(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNonInteractiveUiTimeoutMillis",
			"(I)V",
			arg0);
	}
	jint AccessibilityServiceInfo::getNonInteractiveUiTimeoutMillis()
	{
		return __thiz.callMethod<jint>(
			"getNonInteractiveUiTimeoutMillis",
			"()I");
	}
	void AccessibilityServiceInfo::setInteractiveUiTimeoutMillis(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInteractiveUiTimeoutMillis",
			"(I)V",
			arg0);
	}
	jint AccessibilityServiceInfo::getInteractiveUiTimeoutMillis()
	{
		return __thiz.callMethod<jint>(
			"getInteractiveUiTimeoutMillis",
			"()I");
	}
	QAndroidJniObject AccessibilityServiceInfo::feedbackTypeToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"feedbackTypeToString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject AccessibilityServiceInfo::flagToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"flagToString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject AccessibilityServiceInfo::capabilityToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"capabilityToString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jint AccessibilityServiceInfo::getCapabilities()
	{
		return __thiz.callMethod<jint>(
			"getCapabilities",
			"()I");
	}
	QAndroidJniObject AccessibilityServiceInfo::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;");
	}
	jint AccessibilityServiceInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void AccessibilityServiceInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject AccessibilityServiceInfo::loadDescription(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class AccessibilityServiceInfo : public __jni_impl::android::accessibilityservice::AccessibilityServiceInfo
	{
	public:
		AccessibilityServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityServiceInfo()
		{
			__constructor();
		}
	};
} // namespace android::accessibilityservice

#endif // ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICEINFO

