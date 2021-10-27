#include "../os/Parcel.hpp"
#include "./MacAddress.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject MacAddress::BROADCAST_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.MacAddress",
			"BROADCAST_ADDRESS",
			"Landroid/net/MacAddress;"
		);
	}
	QAndroidJniObject MacAddress::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.MacAddress",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint MacAddress::TYPE_BROADCAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_BROADCAST"
		);
	}
	jint MacAddress::TYPE_MULTICAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_MULTICAST"
		);
	}
	jint MacAddress::TYPE_UNICAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_UNICAST"
		);
	}
	
	MacAddress::MacAddress(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MacAddress::fromBytes(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.MacAddress",
			"fromBytes",
			"([B)Landroid/net/MacAddress;",
			arg0
		);
	}
	QAndroidJniObject MacAddress::fromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.MacAddress",
			"fromString",
			"(Ljava/lang/String;)Landroid/net/MacAddress;",
			arg0
		);
	}
	QAndroidJniObject MacAddress::fromString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.MacAddress",
			"fromString",
			"(Ljava/lang/String;)Landroid/net/MacAddress;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint MacAddress::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MacAddress::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MacAddress::getAddressType()
	{
		return __thiz.callMethod<jint>(
			"getAddressType",
			"()I"
		);
	}
	jint MacAddress::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MacAddress::isLocallyAssigned()
	{
		return __thiz.callMethod<jboolean>(
			"isLocallyAssigned",
			"()Z"
		);
	}
	jbyteArray MacAddress::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jstring MacAddress::toOuiString()
	{
		return __thiz.callObjectMethod(
			"toOuiString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MacAddress::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MacAddress::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

