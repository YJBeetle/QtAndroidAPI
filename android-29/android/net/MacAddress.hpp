#pragma once

#ifndef ANDROID_NET_MACADDRESS
#define ANDROID_NET_MACADDRESS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net
{
	class MacAddress : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject BROADCAST_ADDRESS();
		static QAndroidJniObject CREATOR();
		static jint TYPE_BROADCAST();
		static jint TYPE_MULTICAST();
		static jint TYPE_UNICAST();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject toByteArray();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getAddressType();
		jboolean isLocallyAssigned();
		QAndroidJniObject toOuiString();
		static QAndroidJniObject fromBytes(jbyteArray arg0);
		static QAndroidJniObject fromString(jstring arg0);
	};
} // namespace __jni_impl::android::net

#include "../os/Parcel.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject MacAddress::BROADCAST_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.MacAddress",
			"BROADCAST_ADDRESS",
			"Landroid/net/MacAddress;");
	}
	QAndroidJniObject MacAddress::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.MacAddress",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint MacAddress::TYPE_BROADCAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_BROADCAST");
	}
	jint MacAddress::TYPE_MULTICAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_MULTICAST");
	}
	jint MacAddress::TYPE_UNICAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_UNICAST");
	}
	
	// Constructors
	void MacAddress::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.MacAddress",
			"(V)V");
	}
	
	// Methods
	jboolean MacAddress::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject MacAddress::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint MacAddress::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject MacAddress::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B");
	}
	jint MacAddress::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void MacAddress::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint MacAddress::getAddressType()
	{
		return __thiz.callMethod<jint>(
			"getAddressType",
			"()I");
	}
	jboolean MacAddress::isLocallyAssigned()
	{
		return __thiz.callMethod<jboolean>(
			"isLocallyAssigned",
			"()Z");
	}
	QAndroidJniObject MacAddress::toOuiString()
	{
		return __thiz.callObjectMethod(
			"toOuiString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MacAddress::fromBytes(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.MacAddress",
			"fromBytes",
			"([B)Landroid/net/MacAddress;",
			arg0);
	}
	QAndroidJniObject MacAddress::fromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.MacAddress",
			"fromString",
			"(Ljava/lang/String;)Landroid/net/MacAddress;",
			arg0);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class MacAddress : public __jni_impl::android::net::MacAddress
	{
	public:
		MacAddress(QAndroidJniObject obj) { __thiz = obj; }
		MacAddress()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_MACADDRESS

