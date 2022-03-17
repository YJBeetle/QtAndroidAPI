#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./Connection_RttTextStream.def.hpp"
#include "./PhoneAccountHandle.def.hpp"
#include "../../JString.hpp"
#include "./ConnectionRequest.def.hpp"

namespace android::telecom
{
	// Fields
	inline JObject ConnectionRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.ConnectionRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ConnectionRequest::ConnectionRequest(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1, android::os::Bundle arg2)
		: JObject(
			"android.telecom.ConnectionRequest",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	inline ConnectionRequest::ConnectionRequest(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1, android::os::Bundle arg2, jint arg3)
		: JObject(
			"android.telecom.ConnectionRequest",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/net/Uri;Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	inline jint ConnectionRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::telecom::PhoneAccountHandle ConnectionRequest::getAccountHandle() const
	{
		return callObjectMethod(
			"getAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	inline android::net::Uri ConnectionRequest::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	inline android::os::Bundle ConnectionRequest::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JObject ConnectionRequest::getParticipants() const
	{
		return callObjectMethod(
			"getParticipants",
			"()Ljava/util/List;"
		);
	}
	inline android::telecom::Connection_RttTextStream ConnectionRequest::getRttTextStream() const
	{
		return callObjectMethod(
			"getRttTextStream",
			"()Landroid/telecom/Connection$RttTextStream;"
		);
	}
	inline jint ConnectionRequest::getVideoState() const
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	inline jboolean ConnectionRequest::isAdhocConferenceCall() const
	{
		return callMethod<jboolean>(
			"isAdhocConferenceCall",
			"()Z"
		);
	}
	inline jboolean ConnectionRequest::isRequestingRtt() const
	{
		return callMethod<jboolean>(
			"isRequestingRtt",
			"()Z"
		);
	}
	inline JString ConnectionRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ConnectionRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
