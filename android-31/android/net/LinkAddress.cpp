#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/net/InetAddress.hpp"
#include "./LinkAddress.hpp"

namespace android::net
{
	// Fields
	JObject LinkAddress::CREATOR()
	{
		return getStaticObjectField(
			"android.net.LinkAddress",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	LinkAddress::LinkAddress(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint LinkAddress::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LinkAddress::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::net::InetAddress LinkAddress::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint LinkAddress::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jint LinkAddress::getPrefixLength() const
	{
		return callMethod<jint>(
			"getPrefixLength",
			"()I"
		);
	}
	jint LinkAddress::getScope() const
	{
		return callMethod<jint>(
			"getScope",
			"()I"
		);
	}
	jint LinkAddress::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString LinkAddress::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void LinkAddress::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

