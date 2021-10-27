#pragma once

#ifndef ANDROID_TELEPHONY_DATA_APNSETTING
#define ANDROID_TELEPHONY_DATA_APNSETTING

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::telephony::data
{
	class ApnSetting_Builder;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::android::telephony::data
{
	class ApnSetting : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUTH_TYPE_CHAP();
		static jint AUTH_TYPE_NONE();
		static jint AUTH_TYPE_PAP();
		static jint AUTH_TYPE_PAP_OR_CHAP();
		static QAndroidJniObject CREATOR();
		static jint MVNO_TYPE_GID();
		static jint MVNO_TYPE_ICCID();
		static jint MVNO_TYPE_IMSI();
		static jint MVNO_TYPE_SPN();
		static jint PROTOCOL_IP();
		static jint PROTOCOL_IPV4V6();
		static jint PROTOCOL_IPV6();
		static jint PROTOCOL_NON_IP();
		static jint PROTOCOL_PPP();
		static jint PROTOCOL_UNSTRUCTURED();
		static jint TYPE_CBS();
		static jint TYPE_DEFAULT();
		static jint TYPE_DUN();
		static jint TYPE_EMERGENCY();
		static jint TYPE_FOTA();
		static jint TYPE_HIPRI();
		static jint TYPE_IA();
		static jint TYPE_IMS();
		static jint TYPE_MCX();
		static jint TYPE_MMS();
		static jint TYPE_SUPL();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getApnName();
		jint getApnTypeBitmask();
		jint getAuthType();
		jint getCarrierId();
		jstring getEntryName();
		jint getId();
		QAndroidJniObject getMmsProxyAddress();
		jstring getMmsProxyAddressAsString();
		jint getMmsProxyPort();
		QAndroidJniObject getMmsc();
		jint getMvnoType();
		jint getNetworkTypeBitmask();
		jstring getOperatorNumeric();
		jstring getPassword();
		jint getProtocol();
		QAndroidJniObject getProxyAddress();
		jstring getProxyAddressAsString();
		jint getProxyPort();
		jint getRoamingProtocol();
		jstring getUser();
		jboolean isEnabled();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony::data

#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "ApnSetting_Builder.hpp"
#include "../../../java/net/InetAddress.hpp"

namespace __jni_impl::android::telephony::data
{
	// Fields
	jint ApnSetting::AUTH_TYPE_CHAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_CHAP"
		);
	}
	jint ApnSetting::AUTH_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_NONE"
		);
	}
	jint ApnSetting::AUTH_TYPE_PAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_PAP"
		);
	}
	jint ApnSetting::AUTH_TYPE_PAP_OR_CHAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_PAP_OR_CHAP"
		);
	}
	QAndroidJniObject ApnSetting::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.data.ApnSetting",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ApnSetting::MVNO_TYPE_GID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_GID"
		);
	}
	jint ApnSetting::MVNO_TYPE_ICCID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_ICCID"
		);
	}
	jint ApnSetting::MVNO_TYPE_IMSI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_IMSI"
		);
	}
	jint ApnSetting::MVNO_TYPE_SPN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_SPN"
		);
	}
	jint ApnSetting::PROTOCOL_IP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IP"
		);
	}
	jint ApnSetting::PROTOCOL_IPV4V6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IPV4V6"
		);
	}
	jint ApnSetting::PROTOCOL_IPV6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IPV6"
		);
	}
	jint ApnSetting::PROTOCOL_NON_IP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_NON_IP"
		);
	}
	jint ApnSetting::PROTOCOL_PPP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_PPP"
		);
	}
	jint ApnSetting::PROTOCOL_UNSTRUCTURED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_UNSTRUCTURED"
		);
	}
	jint ApnSetting::TYPE_CBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_CBS"
		);
	}
	jint ApnSetting::TYPE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_DEFAULT"
		);
	}
	jint ApnSetting::TYPE_DUN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_DUN"
		);
	}
	jint ApnSetting::TYPE_EMERGENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_EMERGENCY"
		);
	}
	jint ApnSetting::TYPE_FOTA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_FOTA"
		);
	}
	jint ApnSetting::TYPE_HIPRI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_HIPRI"
		);
	}
	jint ApnSetting::TYPE_IA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_IA"
		);
	}
	jint ApnSetting::TYPE_IMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_IMS"
		);
	}
	jint ApnSetting::TYPE_MCX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_MCX"
		);
	}
	jint ApnSetting::TYPE_MMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_MMS"
		);
	}
	jint ApnSetting::TYPE_SUPL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_SUPL"
		);
	}
	
	// Constructors
	void ApnSetting::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.data.ApnSetting",
			"(V)V");
	}
	
	// Methods
	jint ApnSetting::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ApnSetting::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ApnSetting::getApnName()
	{
		return __thiz.callObjectMethod(
			"getApnName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApnSetting::getApnTypeBitmask()
	{
		return __thiz.callMethod<jint>(
			"getApnTypeBitmask",
			"()I"
		);
	}
	jint ApnSetting::getAuthType()
	{
		return __thiz.callMethod<jint>(
			"getAuthType",
			"()I"
		);
	}
	jint ApnSetting::getCarrierId()
	{
		return __thiz.callMethod<jint>(
			"getCarrierId",
			"()I"
		);
	}
	jstring ApnSetting::getEntryName()
	{
		return __thiz.callObjectMethod(
			"getEntryName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApnSetting::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	QAndroidJniObject ApnSetting::getMmsProxyAddress()
	{
		return __thiz.callObjectMethod(
			"getMmsProxyAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jstring ApnSetting::getMmsProxyAddressAsString()
	{
		return __thiz.callObjectMethod(
			"getMmsProxyAddressAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApnSetting::getMmsProxyPort()
	{
		return __thiz.callMethod<jint>(
			"getMmsProxyPort",
			"()I"
		);
	}
	QAndroidJniObject ApnSetting::getMmsc()
	{
		return __thiz.callObjectMethod(
			"getMmsc",
			"()Landroid/net/Uri;"
		);
	}
	jint ApnSetting::getMvnoType()
	{
		return __thiz.callMethod<jint>(
			"getMvnoType",
			"()I"
		);
	}
	jint ApnSetting::getNetworkTypeBitmask()
	{
		return __thiz.callMethod<jint>(
			"getNetworkTypeBitmask",
			"()I"
		);
	}
	jstring ApnSetting::getOperatorNumeric()
	{
		return __thiz.callObjectMethod(
			"getOperatorNumeric",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApnSetting::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApnSetting::getProtocol()
	{
		return __thiz.callMethod<jint>(
			"getProtocol",
			"()I"
		);
	}
	QAndroidJniObject ApnSetting::getProxyAddress()
	{
		return __thiz.callObjectMethod(
			"getProxyAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jstring ApnSetting::getProxyAddressAsString()
	{
		return __thiz.callObjectMethod(
			"getProxyAddressAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApnSetting::getProxyPort()
	{
		return __thiz.callMethod<jint>(
			"getProxyPort",
			"()I"
		);
	}
	jint ApnSetting::getRoamingProtocol()
	{
		return __thiz.callMethod<jint>(
			"getRoamingProtocol",
			"()I"
		);
	}
	jstring ApnSetting::getUser()
	{
		return __thiz.callObjectMethod(
			"getUser",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ApnSetting::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jstring ApnSetting::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ApnSetting::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telephony::data

namespace android::telephony::data
{
	class ApnSetting : public __jni_impl::android::telephony::data::ApnSetting
	{
	public:
		ApnSetting(QAndroidJniObject obj) { __thiz = obj; }
		ApnSetting()
		{
			__constructor();
		}
	};
} // namespace android::telephony::data

#endif // ANDROID_TELEPHONY_DATA_APNSETTING

