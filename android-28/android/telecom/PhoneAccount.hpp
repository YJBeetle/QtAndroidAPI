#pragma once

#include "../graphics/drawable/Icon.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./PhoneAccount_Builder.def.hpp"
#include "./PhoneAccountHandle.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./PhoneAccount.def.hpp"

namespace android::telecom
{
	// Fields
	inline jint PhoneAccount::CAPABILITY_CALL_PROVIDER()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_CALL_PROVIDER"
		);
	}
	inline jint PhoneAccount::CAPABILITY_CALL_SUBJECT()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_CALL_SUBJECT"
		);
	}
	inline jint PhoneAccount::CAPABILITY_CONNECTION_MANAGER()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_CONNECTION_MANAGER"
		);
	}
	inline jint PhoneAccount::CAPABILITY_PLACE_EMERGENCY_CALLS()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_PLACE_EMERGENCY_CALLS"
		);
	}
	inline jint PhoneAccount::CAPABILITY_RTT()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_RTT"
		);
	}
	inline jint PhoneAccount::CAPABILITY_SELF_MANAGED()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_SELF_MANAGED"
		);
	}
	inline jint PhoneAccount::CAPABILITY_SIM_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_SIM_SUBSCRIPTION"
		);
	}
	inline jint PhoneAccount::CAPABILITY_SUPPORTS_VIDEO_CALLING()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_SUPPORTS_VIDEO_CALLING"
		);
	}
	inline jint PhoneAccount::CAPABILITY_VIDEO_CALLING()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_VIDEO_CALLING"
		);
	}
	inline jint PhoneAccount::CAPABILITY_VIDEO_CALLING_RELIES_ON_PRESENCE()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"CAPABILITY_VIDEO_CALLING_RELIES_ON_PRESENCE"
		);
	}
	inline JObject PhoneAccount::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString PhoneAccount::EXTRA_CALL_SUBJECT_CHARACTER_ENCODING()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_CALL_SUBJECT_CHARACTER_ENCODING",
			"Ljava/lang/String;"
		);
	}
	inline JString PhoneAccount::EXTRA_CALL_SUBJECT_MAX_LENGTH()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_CALL_SUBJECT_MAX_LENGTH",
			"Ljava/lang/String;"
		);
	}
	inline JString PhoneAccount::EXTRA_LOG_SELF_MANAGED_CALLS()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_LOG_SELF_MANAGED_CALLS",
			"Ljava/lang/String;"
		);
	}
	inline JString PhoneAccount::EXTRA_SUPPORTS_HANDOVER_FROM()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_SUPPORTS_HANDOVER_FROM",
			"Ljava/lang/String;"
		);
	}
	inline JString PhoneAccount::EXTRA_SUPPORTS_HANDOVER_TO()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"EXTRA_SUPPORTS_HANDOVER_TO",
			"Ljava/lang/String;"
		);
	}
	inline jint PhoneAccount::NO_HIGHLIGHT_COLOR()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"NO_HIGHLIGHT_COLOR"
		);
	}
	inline jint PhoneAccount::NO_RESOURCE_ID()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccount",
			"NO_RESOURCE_ID"
		);
	}
	inline JString PhoneAccount::SCHEME_SIP()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"SCHEME_SIP",
			"Ljava/lang/String;"
		);
	}
	inline JString PhoneAccount::SCHEME_TEL()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"SCHEME_TEL",
			"Ljava/lang/String;"
		);
	}
	inline JString PhoneAccount::SCHEME_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccount",
			"SCHEME_VOICEMAIL",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::telecom::PhoneAccount_Builder PhoneAccount::builder(android::telecom::PhoneAccountHandle arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.telecom.PhoneAccount",
			"builder",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/CharSequence;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jint PhoneAccount::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::telecom::PhoneAccountHandle PhoneAccount::getAccountHandle() const
	{
		return callObjectMethod(
			"getAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	inline android::net::Uri PhoneAccount::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	inline jint PhoneAccount::getCapabilities() const
	{
		return callMethod<jint>(
			"getCapabilities",
			"()I"
		);
	}
	inline android::os::Bundle PhoneAccount::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint PhoneAccount::getHighlightColor() const
	{
		return callMethod<jint>(
			"getHighlightColor",
			"()I"
		);
	}
	inline android::graphics::drawable::Icon PhoneAccount::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JString PhoneAccount::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString PhoneAccount::getShortDescription() const
	{
		return callObjectMethod(
			"getShortDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::net::Uri PhoneAccount::getSubscriptionAddress() const
	{
		return callObjectMethod(
			"getSubscriptionAddress",
			"()Landroid/net/Uri;"
		);
	}
	inline JObject PhoneAccount::getSupportedUriSchemes() const
	{
		return callObjectMethod(
			"getSupportedUriSchemes",
			"()Ljava/util/List;"
		);
	}
	inline jboolean PhoneAccount::hasCapabilities(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasCapabilities",
			"(I)Z",
			arg0
		);
	}
	inline jboolean PhoneAccount::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean PhoneAccount::supportsUriScheme(JString arg0) const
	{
		return callMethod<jboolean>(
			"supportsUriScheme",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline android::telecom::PhoneAccount_Builder PhoneAccount::toBuilder() const
	{
		return callObjectMethod(
			"toBuilder",
			"()Landroid/telecom/PhoneAccount$Builder;"
		);
	}
	inline JString PhoneAccount::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PhoneAccount::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

// Base class headers

