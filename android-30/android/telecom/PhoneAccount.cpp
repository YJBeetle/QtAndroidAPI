#include "../graphics/drawable/Icon.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./PhoneAccount_Builder.hpp"
#include "./PhoneAccountHandle.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PhoneAccount.hpp"

namespace android::telecom
{
	// Fields
	jint PhoneAccount::CAPABILITY_ADHOC_CONFERENCE_CALLING()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_ADHOC_CONFERENCE_CALLING"
		);
	}
	jint PhoneAccount::CAPABILITY_CALL_PROVIDER()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_CALL_PROVIDER"
		);
	}
	jint PhoneAccount::CAPABILITY_CALL_SUBJECT()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_CALL_SUBJECT"
		);
	}
	jint PhoneAccount::CAPABILITY_CONNECTION_MANAGER()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_CONNECTION_MANAGER"
		);
	}
	jint PhoneAccount::CAPABILITY_PLACE_EMERGENCY_CALLS()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_PLACE_EMERGENCY_CALLS"
		);
	}
	jint PhoneAccount::CAPABILITY_RTT()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_RTT"
		);
	}
	jint PhoneAccount::CAPABILITY_SELF_MANAGED()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_SELF_MANAGED"
		);
	}
	jint PhoneAccount::CAPABILITY_SIM_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_SIM_SUBSCRIPTION"
		);
	}
	jint PhoneAccount::CAPABILITY_SUPPORTS_VIDEO_CALLING()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_SUPPORTS_VIDEO_CALLING"
		);
	}
	jint PhoneAccount::CAPABILITY_VIDEO_CALLING()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_VIDEO_CALLING"
		);
	}
	jint PhoneAccount::CAPABILITY_VIDEO_CALLING_RELIES_ON_PRESENCE()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_VIDEO_CALLING_RELIES_ON_PRESENCE"
		);
	}
	JObject PhoneAccount::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString PhoneAccount::EXTRA_CALL_SUBJECT_CHARACTER_ENCODING()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_CALL_SUBJECT_CHARACTER_ENCODING",
			"Ljava/lang/String;"
		);
	}
	JString PhoneAccount::EXTRA_CALL_SUBJECT_MAX_LENGTH()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_CALL_SUBJECT_MAX_LENGTH",
			"Ljava/lang/String;"
		);
	}
	JString PhoneAccount::EXTRA_LOG_SELF_MANAGED_CALLS()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_LOG_SELF_MANAGED_CALLS",
			"Ljava/lang/String;"
		);
	}
	JString PhoneAccount::EXTRA_SUPPORTS_HANDOVER_FROM()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_SUPPORTS_HANDOVER_FROM",
			"Ljava/lang/String;"
		);
	}
	JString PhoneAccount::EXTRA_SUPPORTS_HANDOVER_TO()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_SUPPORTS_HANDOVER_TO",
			"Ljava/lang/String;"
		);
	}
	jint PhoneAccount::NO_HIGHLIGHT_COLOR()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"NO_HIGHLIGHT_COLOR"
		);
	}
	jint PhoneAccount::NO_RESOURCE_ID()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"NO_RESOURCE_ID"
		);
	}
	JString PhoneAccount::SCHEME_SIP()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"SCHEME_SIP",
			"Ljava/lang/String;"
		);
	}
	JString PhoneAccount::SCHEME_TEL()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"SCHEME_TEL",
			"Ljava/lang/String;"
		);
	}
	JString PhoneAccount::SCHEME_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"SCHEME_VOICEMAIL",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	android::telecom::PhoneAccount_Builder PhoneAccount::builder(android::telecom::PhoneAccountHandle arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.telecom.PhoneAccount",
			"builder",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/CharSequence;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jint PhoneAccount::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PhoneAccount::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::telecom::PhoneAccountHandle PhoneAccount::getAccountHandle() const
	{
		return callObjectMethod(
			"getAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	android::net::Uri PhoneAccount::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	jint PhoneAccount::getCapabilities() const
	{
		return callMethod<jint>(
			"getCapabilities",
			"()I"
		);
	}
	android::os::Bundle PhoneAccount::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint PhoneAccount::getHighlightColor() const
	{
		return callMethod<jint>(
			"getHighlightColor",
			"()I"
		);
	}
	android::graphics::drawable::Icon PhoneAccount::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString PhoneAccount::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString PhoneAccount::getShortDescription() const
	{
		return callObjectMethod(
			"getShortDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::net::Uri PhoneAccount::getSubscriptionAddress() const
	{
		return callObjectMethod(
			"getSubscriptionAddress",
			"()Landroid/net/Uri;"
		);
	}
	JObject PhoneAccount::getSupportedUriSchemes() const
	{
		return callObjectMethod(
			"getSupportedUriSchemes",
			"()Ljava/util/List;"
		);
	}
	jboolean PhoneAccount::hasCapabilities(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasCapabilities",
			"(I)Z",
			arg0
		);
	}
	jint PhoneAccount::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PhoneAccount::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean PhoneAccount::supportsUriScheme(JString arg0) const
	{
		return callMethod<jboolean>(
			"supportsUriScheme",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	android::telecom::PhoneAccount_Builder PhoneAccount::toBuilder() const
	{
		return callObjectMethod(
			"toBuilder",
			"()Landroid/telecom/PhoneAccount$Builder;"
		);
	}
	JString PhoneAccount::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PhoneAccount::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

