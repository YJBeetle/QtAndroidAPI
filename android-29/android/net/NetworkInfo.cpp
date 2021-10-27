#include "./NetworkInfo_DetailedState.hpp"
#include "./NetworkInfo_State.hpp"
#include "../os/Parcel.hpp"
#include "./NetworkInfo.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject NetworkInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	NetworkInfo::NetworkInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint NetworkInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject NetworkInfo::getDetailedState()
	{
		return __thiz.callObjectMethod(
			"getDetailedState",
			"()Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	jstring NetworkInfo::getExtraInfo()
	{
		return __thiz.callObjectMethod(
			"getExtraInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NetworkInfo::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject NetworkInfo::getState()
	{
		return __thiz.callObjectMethod(
			"getState",
			"()Landroid/net/NetworkInfo$State;"
		);
	}
	jint NetworkInfo::getSubtype()
	{
		return __thiz.callMethod<jint>(
			"getSubtype",
			"()I"
		);
	}
	jstring NetworkInfo::getSubtypeName()
	{
		return __thiz.callObjectMethod(
			"getSubtypeName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint NetworkInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring NetworkInfo::getTypeName()
	{
		return __thiz.callObjectMethod(
			"getTypeName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean NetworkInfo::isAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	jboolean NetworkInfo::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean NetworkInfo::isConnectedOrConnecting()
	{
		return __thiz.callMethod<jboolean>(
			"isConnectedOrConnecting",
			"()Z"
		);
	}
	jboolean NetworkInfo::isFailover()
	{
		return __thiz.callMethod<jboolean>(
			"isFailover",
			"()Z"
		);
	}
	jboolean NetworkInfo::isRoaming()
	{
		return __thiz.callMethod<jboolean>(
			"isRoaming",
			"()Z"
		);
	}
	jstring NetworkInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NetworkInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

