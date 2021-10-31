#include "./NetworkInfo_DetailedState.hpp"
#include "./NetworkInfo_State.hpp"
#include "../os/Parcel.hpp"
#include "./NetworkInfo.hpp"

namespace android::net
{
	// Fields
	__JniBaseClass NetworkInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	NetworkInfo::NetworkInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NetworkInfo::NetworkInfo(jint arg0, jint arg1, jstring arg2, jstring arg3)
		: __JniBaseClass(
			"android.net.NetworkInfo",
			"(IILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
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
	jstring NetworkInfo::getExtraInfo()
	{
		return callObjectMethod(
			"getExtraInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NetworkInfo::getReason()
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring NetworkInfo::getSubtypeName()
	{
		return callObjectMethod(
			"getSubtypeName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint NetworkInfo::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring NetworkInfo::getTypeName()
	{
		return callObjectMethod(
			"getTypeName",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	void NetworkInfo::setDetailedState(android::net::NetworkInfo_DetailedState arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"setDetailedState",
			"(Landroid/net/NetworkInfo$DetailedState;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jstring NetworkInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

