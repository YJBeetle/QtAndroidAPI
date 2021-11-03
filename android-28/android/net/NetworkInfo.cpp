#include "./NetworkInfo_DetailedState.hpp"
#include "./NetworkInfo_State.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./NetworkInfo.hpp"

namespace android::net
{
	// Fields
	JObject NetworkInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	NetworkInfo::NetworkInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint NetworkInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo::getDetailedState() const
	{
		return callObjectMethod(
			"getDetailedState",
			"()Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	JString NetworkInfo::getExtraInfo() const
	{
		return callObjectMethod(
			"getExtraInfo",
			"()Ljava/lang/String;"
		);
	}
	JString NetworkInfo::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
	android::net::NetworkInfo_State NetworkInfo::getState() const
	{
		return callObjectMethod(
			"getState",
			"()Landroid/net/NetworkInfo$State;"
		);
	}
	jint NetworkInfo::getSubtype() const
	{
		return callMethod<jint>(
			"getSubtype",
			"()I"
		);
	}
	JString NetworkInfo::getSubtypeName() const
	{
		return callObjectMethod(
			"getSubtypeName",
			"()Ljava/lang/String;"
		);
	}
	jint NetworkInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	JString NetworkInfo::getTypeName() const
	{
		return callObjectMethod(
			"getTypeName",
			"()Ljava/lang/String;"
		);
	}
	jboolean NetworkInfo::isAvailable() const
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	jboolean NetworkInfo::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean NetworkInfo::isConnectedOrConnecting() const
	{
		return callMethod<jboolean>(
			"isConnectedOrConnecting",
			"()Z"
		);
	}
	jboolean NetworkInfo::isFailover() const
	{
		return callMethod<jboolean>(
			"isFailover",
			"()Z"
		);
	}
	jboolean NetworkInfo::isRoaming() const
	{
		return callMethod<jboolean>(
			"isRoaming",
			"()Z"
		);
	}
	JString NetworkInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NetworkInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

