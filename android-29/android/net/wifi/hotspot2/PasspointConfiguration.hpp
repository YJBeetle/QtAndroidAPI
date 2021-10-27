#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	class Credential;
}
namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	class HomeSp;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::hotspot2
{
	class PasspointConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::hotspot2::PasspointConfiguration arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getCredential();
		QAndroidJniObject getHomeSp();
		jint hashCode();
		void setCredential(__jni_impl::android::net::wifi::hotspot2::pps::Credential arg0);
		void setHomeSp(__jni_impl::android::net::wifi::hotspot2::pps::HomeSp arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::hotspot2

#include "./pps/Credential.hpp"
#include "./pps/HomeSp.hpp"
#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::hotspot2
{
	// Fields
	QAndroidJniObject PasspointConfiguration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void PasspointConfiguration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"()V"
		);
	}
	void PasspointConfiguration::__constructor(__jni_impl::android::net::wifi::hotspot2::PasspointConfiguration arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"(Landroid/net/wifi/hotspot2/PasspointConfiguration;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint PasspointConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PasspointConfiguration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject PasspointConfiguration::getCredential()
	{
		return __thiz.callObjectMethod(
			"getCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential;"
		);
	}
	QAndroidJniObject PasspointConfiguration::getHomeSp()
	{
		return __thiz.callObjectMethod(
			"getHomeSp",
			"()Landroid/net/wifi/hotspot2/pps/HomeSp;"
		);
	}
	jint PasspointConfiguration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void PasspointConfiguration::setCredential(__jni_impl::android::net::wifi::hotspot2::pps::Credential arg0)
	{
		__thiz.callMethod<void>(
			"setCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential;)V",
			arg0.__jniObject().object()
		);
	}
	void PasspointConfiguration::setHomeSp(__jni_impl::android::net::wifi::hotspot2::pps::HomeSp arg0)
	{
		__thiz.callMethod<void>(
			"setHomeSp",
			"(Landroid/net/wifi/hotspot2/pps/HomeSp;)V",
			arg0.__jniObject().object()
		);
	}
	jstring PasspointConfiguration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PasspointConfiguration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::hotspot2

namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration : public __jni_impl::android::net::wifi::hotspot2::PasspointConfiguration
	{
	public:
		PasspointConfiguration(QAndroidJniObject obj) { __thiz = obj; }
		PasspointConfiguration()
		{
			__constructor();
		}
		PasspointConfiguration(__jni_impl::android::net::wifi::hotspot2::PasspointConfiguration arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::hotspot2

