#include "../graphics/drawable/Icon.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./PhoneAccount_Builder.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./PhoneAccount.hpp"

namespace android::telecom
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
	
	// QAndroidJniObject forward
	PhoneAccount::PhoneAccount(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject PhoneAccount::builder(android::telecom::PhoneAccountHandle arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.PhoneAccount",
			"builder",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/CharSequence;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object(),
			arg1
		);
	}
	jint PhoneAccount::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PhoneAccount::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject PhoneAccount::getAccountHandle()
	{
		return callObjectMethod(
			"getAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	QAndroidJniObject PhoneAccount::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	jint PhoneAccount::getCapabilities()
	{
		return callMethod<jint>(
			"getCapabilities",
			"()I"
		);
	}
	QAndroidJniObject PhoneAccount::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint PhoneAccount::getHighlightColor()
	{
		return callMethod<jint>(
			"getHighlightColor",
			"()I"
		);
	}
	QAndroidJniObject PhoneAccount::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring PhoneAccount::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring PhoneAccount::getShortDescription()
	{
		return callObjectMethod(
			"getShortDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject PhoneAccount::getSubscriptionAddress()
	{
		return callObjectMethod(
			"getSubscriptionAddress",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject PhoneAccount::getSupportedUriSchemes()
	{
		return callObjectMethod(
			"getSupportedUriSchemes",
			"()Ljava/util/List;"
		);
	}
	jboolean PhoneAccount::hasCapabilities(jint arg0)
	{
		return callMethod<jboolean>(
			"hasCapabilities",
			"(I)Z",
			arg0
		);
	}
	jint PhoneAccount::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PhoneAccount::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean PhoneAccount::supportsUriScheme(jstring arg0)
	{
		return callMethod<jboolean>(
			"supportsUriScheme",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject PhoneAccount::toBuilder()
	{
		return callObjectMethod(
			"toBuilder",
			"()Landroid/telecom/PhoneAccount$Builder;"
		);
	}
	jstring PhoneAccount::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PhoneAccount::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

