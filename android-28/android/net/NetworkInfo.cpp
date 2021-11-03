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
	jint NetworkInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo::getDetailedState()
	{
		return callObjectMethod(
			"getDetailedState",
			"()Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	JString NetworkInfo::getExtraInfo()
	{
		return callObjectMethod(
			"getExtraInfo",
			"()Ljava/lang/String;"
		);
	}
	JString NetworkInfo::getReason()
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
	android::net::NetworkInfo_State NetworkInfo::getState()
	{
		return callObjectMethod(
			"getState",
			"()Landroid/net/NetworkInfo$State;"
		);
	}
	jint NetworkInfo::getSubtype()
	{
		return callMethod<jint>(
			"getSubtype",
			"()I"
		);
	}
	JString NetworkInfo::getSubtypeName()
	{
		return callObjectMethod(
			"getSubtypeName",
			"()Ljava/lang/String;"
		);
	}
	jint NetworkInfo::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	JString NetworkInfo::getTypeName()
	{
		return callObjectMethod(
			"getTypeName",
			"()Ljava/lang/String;"
		);
	}
	jboolean NetworkInfo::isAvailable()
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	jboolean NetworkInfo::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean NetworkInfo::isConnectedOrConnecting()
	{
		return callMethod<jboolean>(
			"isConnectedOrConnecting",
			"()Z"
		);
	}
	jboolean NetworkInfo::isFailover()
	{
		return callMethod<jboolean>(
			"isFailover",
			"()Z"
		);
	}
	jboolean NetworkInfo::isRoaming()
	{
		return callMethod<jboolean>(
			"isRoaming",
			"()Z"
		);
	}
	JString NetworkInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NetworkInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

