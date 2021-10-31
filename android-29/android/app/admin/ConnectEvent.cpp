#include "../../os/Parcel.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./ConnectEvent.hpp"

namespace android::app::admin
{
	// Fields
	QAndroidJniObject ConnectEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.ConnectEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ConnectEvent::ConnectEvent(QAndroidJniObject obj) : android::app::admin::NetworkEvent(obj) {}
	
	// Constructors
	
	// Methods
	jint ConnectEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ConnectEvent::getInetAddress()
	{
		return callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint ConnectEvent::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring ConnectEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ConnectEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin
