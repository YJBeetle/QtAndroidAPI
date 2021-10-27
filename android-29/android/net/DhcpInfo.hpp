#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net
{
	class DhcpInfo : public __JniBaseClass
	{
	public:
		// Fields
		jint dns1();
		jint dns2();
		jint gateway();
		jint ipAddress();
		jint leaseDuration();
		jint netmask();
		jint serverAddress();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net

#include "../os/Parcel.hpp"

namespace __jni_impl::android::net
{
	// Fields
	jint DhcpInfo::dns1()
	{
		return __thiz.getField<jint>(
			"dns1"
		);
	}
	jint DhcpInfo::dns2()
	{
		return __thiz.getField<jint>(
			"dns2"
		);
	}
	jint DhcpInfo::gateway()
	{
		return __thiz.getField<jint>(
			"gateway"
		);
	}
	jint DhcpInfo::ipAddress()
	{
		return __thiz.getField<jint>(
			"ipAddress"
		);
	}
	jint DhcpInfo::leaseDuration()
	{
		return __thiz.getField<jint>(
			"leaseDuration"
		);
	}
	jint DhcpInfo::netmask()
	{
		return __thiz.getField<jint>(
			"netmask"
		);
	}
	jint DhcpInfo::serverAddress()
	{
		return __thiz.getField<jint>(
			"serverAddress"
		);
	}
	
	// Constructors
	void DhcpInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.DhcpInfo",
			"()V"
		);
	}
	
	// Methods
	jint DhcpInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring DhcpInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DhcpInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class DhcpInfo : public __jni_impl::android::net::DhcpInfo
	{
	public:
		DhcpInfo(QAndroidJniObject obj) { __thiz = obj; }
		DhcpInfo()
		{
			__constructor();
		}
	};
} // namespace android::net

