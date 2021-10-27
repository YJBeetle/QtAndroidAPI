#pragma once

#ifndef ANDROID_TELECOM_PHONEACCOUNT
#define ANDROID_TELECOM_PHONEACCOUNT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccount_Builder;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle;
}

namespace __jni_impl::android::telecom
{
	class PhoneAccount : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAPABILITY_CALL_PROVIDER();
		static jint CAPABILITY_CALL_SUBJECT();
		static jint CAPABILITY_CONNECTION_MANAGER();
		static jint CAPABILITY_PLACE_EMERGENCY_CALLS();
		static jint CAPABILITY_RTT();
		static jint CAPABILITY_SELF_MANAGED();
		static jint CAPABILITY_SIM_SUBSCRIPTION();
		static jint CAPABILITY_SUPPORTS_VIDEO_CALLING();
		static jint CAPABILITY_VIDEO_CALLING();
		static jint CAPABILITY_VIDEO_CALLING_RELIES_ON_PRESENCE();
		static QAndroidJniObject CREATOR();
		static jstring EXTRA_CALL_SUBJECT_CHARACTER_ENCODING();
		static jstring EXTRA_CALL_SUBJECT_MAX_LENGTH();
		static jstring EXTRA_LOG_SELF_MANAGED_CALLS();
		static jstring EXTRA_SUPPORTS_HANDOVER_FROM();
		static jstring EXTRA_SUPPORTS_HANDOVER_TO();
		static jint NO_HIGHLIGHT_COLOR();
		static jint NO_RESOURCE_ID();
		static jstring SCHEME_SIP();
		static jstring SCHEME_TEL();
		static jstring SCHEME_VOICEMAIL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject builder(__jni_impl::android::telecom::PhoneAccountHandle arg0, jstring arg1);
		static QAndroidJniObject builder(__jni_impl::android::telecom::PhoneAccountHandle arg0, const QString &arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getAccountHandle();
		QAndroidJniObject getAddress();
		jint getCapabilities();
		QAndroidJniObject getExtras();
		jint getHighlightColor();
		QAndroidJniObject getIcon();
		jstring getLabel();
		jstring getShortDescription();
		QAndroidJniObject getSubscriptionAddress();
		QAndroidJniObject getSupportedUriSchemes();
		jboolean hasCapabilities(jint arg0);
		jint hashCode();
		jboolean isEnabled();
		jboolean supportsUriScheme(jstring arg0);
		jboolean supportsUriScheme(const QString &arg0);
		QAndroidJniObject toBuilder();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telecom

#include "../graphics/drawable/Icon.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "PhoneAccount_Builder.hpp"
#include "PhoneAccountHandle.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	jint PhoneAccount::CAPABILITY_CALL_PROVIDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_CALL_PROVIDER"
		);
	}
	jint PhoneAccount::CAPABILITY_CALL_SUBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_CALL_SUBJECT"
		);
	}
	jint PhoneAccount::CAPABILITY_CONNECTION_MANAGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_CONNECTION_MANAGER"
		);
	}
	jint PhoneAccount::CAPABILITY_PLACE_EMERGENCY_CALLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_PLACE_EMERGENCY_CALLS"
		);
	}
	jint PhoneAccount::CAPABILITY_RTT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_RTT"
		);
	}
	jint PhoneAccount::CAPABILITY_SELF_MANAGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_SELF_MANAGED"
		);
	}
	jint PhoneAccount::CAPABILITY_SIM_SUBSCRIPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_SIM_SUBSCRIPTION"
		);
	}
	jint PhoneAccount::CAPABILITY_SUPPORTS_VIDEO_CALLING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_SUPPORTS_VIDEO_CALLING"
		);
	}
	jint PhoneAccount::CAPABILITY_VIDEO_CALLING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_VIDEO_CALLING"
		);
	}
	jint PhoneAccount::CAPABILITY_VIDEO_CALLING_RELIES_ON_PRESENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_VIDEO_CALLING_RELIES_ON_PRESENCE"
		);
	}
	QAndroidJniObject PhoneAccount::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccount",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring PhoneAccount::EXTRA_CALL_SUBJECT_CHARACTER_ENCODING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_CALL_SUBJECT_CHARACTER_ENCODING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PhoneAccount::EXTRA_CALL_SUBJECT_MAX_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_CALL_SUBJECT_MAX_LENGTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PhoneAccount::EXTRA_LOG_SELF_MANAGED_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_LOG_SELF_MANAGED_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PhoneAccount::EXTRA_SUPPORTS_HANDOVER_FROM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_SUPPORTS_HANDOVER_FROM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PhoneAccount::EXTRA_SUPPORTS_HANDOVER_TO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_SUPPORTS_HANDOVER_TO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint PhoneAccount::NO_HIGHLIGHT_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"NO_HIGHLIGHT_COLOR"
		);
	}
	jint PhoneAccount::NO_RESOURCE_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"NO_RESOURCE_ID"
		);
	}
	jstring PhoneAccount::SCHEME_SIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccount",
			"SCHEME_SIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PhoneAccount::SCHEME_TEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccount",
			"SCHEME_TEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PhoneAccount::SCHEME_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccount",
			"SCHEME_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void PhoneAccount::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccount",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PhoneAccount::builder(__jni_impl::android::telecom::PhoneAccountHandle arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.PhoneAccount",
			"builder",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/CharSequence;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PhoneAccount::builder(__jni_impl::android::telecom::PhoneAccountHandle arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.PhoneAccount",
			"builder",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/CharSequence;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint PhoneAccount::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PhoneAccount::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject PhoneAccount::getAccountHandle()
	{
		return __thiz.callObjectMethod(
			"getAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	QAndroidJniObject PhoneAccount::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	jint PhoneAccount::getCapabilities()
	{
		return __thiz.callMethod<jint>(
			"getCapabilities",
			"()I"
		);
	}
	QAndroidJniObject PhoneAccount::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint PhoneAccount::getHighlightColor()
	{
		return __thiz.callMethod<jint>(
			"getHighlightColor",
			"()I"
		);
	}
	QAndroidJniObject PhoneAccount::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring PhoneAccount::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring PhoneAccount::getShortDescription()
	{
		return __thiz.callObjectMethod(
			"getShortDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject PhoneAccount::getSubscriptionAddress()
	{
		return __thiz.callObjectMethod(
			"getSubscriptionAddress",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject PhoneAccount::getSupportedUriSchemes()
	{
		return __thiz.callObjectMethod(
			"getSupportedUriSchemes",
			"()Ljava/util/List;"
		);
	}
	jboolean PhoneAccount::hasCapabilities(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCapabilities",
			"(I)Z",
			arg0
		);
	}
	jint PhoneAccount::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PhoneAccount::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean PhoneAccount::supportsUriScheme(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"supportsUriScheme",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PhoneAccount::supportsUriScheme(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"supportsUriScheme",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PhoneAccount::toBuilder()
	{
		return __thiz.callObjectMethod(
			"toBuilder",
			"()Landroid/telecom/PhoneAccount$Builder;"
		);
	}
	jstring PhoneAccount::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PhoneAccount::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class PhoneAccount : public __jni_impl::android::telecom::PhoneAccount
	{
	public:
		PhoneAccount(QAndroidJniObject obj) { __thiz = obj; }
		PhoneAccount()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_PHONEACCOUNT

