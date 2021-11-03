#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./ConnectEvent.hpp"

namespace android::app::admin
{
	// Fields
	JObject ConnectEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.ConnectEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ConnectEvent::ConnectEvent(QAndroidJniObject obj) : android::app::admin::NetworkEvent(obj) {}
	
	// Constructors
	
	// Methods
	jint ConnectEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	java::net::InetAddress ConnectEvent::getInetAddress() const
	{
		return callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint ConnectEvent::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString ConnectEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ConnectEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

