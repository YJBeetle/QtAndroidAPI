#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./Connection_RttTextStream.hpp"
#include "./PhoneAccountHandle.hpp"
#include "../../JString.hpp"
#include "./ConnectionRequest.hpp"

namespace android::telecom
{
	// Fields
	JObject ConnectionRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.ConnectionRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ConnectionRequest::ConnectionRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConnectionRequest::ConnectionRequest(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1, android::os::Bundle arg2)
		: JObject(
			"android.telecom.ConnectionRequest",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	ConnectionRequest::ConnectionRequest(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1, android::os::Bundle arg2, jint arg3)
		: JObject(
			"android.telecom.ConnectionRequest",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/net/Uri;Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	jint ConnectionRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::telecom::PhoneAccountHandle ConnectionRequest::getAccountHandle() const
	{
		return callObjectMethod(
			"getAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	android::net::Uri ConnectionRequest::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	android::os::Bundle ConnectionRequest::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JObject ConnectionRequest::getParticipants() const
	{
		return callObjectMethod(
			"getParticipants",
			"()Ljava/util/List;"
		);
	}
	android::telecom::Connection_RttTextStream ConnectionRequest::getRttTextStream() const
	{
		return callObjectMethod(
			"getRttTextStream",
			"()Landroid/telecom/Connection$RttTextStream;"
		);
	}
	jint ConnectionRequest::getVideoState() const
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	jboolean ConnectionRequest::isAdhocConferenceCall() const
	{
		return callMethod<jboolean>(
			"isAdhocConferenceCall",
			"()Z"
		);
	}
	jboolean ConnectionRequest::isRequestingRtt() const
	{
		return callMethod<jboolean>(
			"isRequestingRtt",
			"()Z"
		);
	}
	JString ConnectionRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ConnectionRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

