#include "../../net/Uri.hpp"
#include "./ApnSetting.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./ApnSetting_Builder.hpp"

namespace android::telephony::data
{
	// Fields
	
	ApnSetting_Builder::ApnSetting_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ApnSetting_Builder::ApnSetting_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.data.ApnSetting$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ApnSetting_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/telephony/data/ApnSetting;"
		);
	}
	QAndroidJniObject ApnSetting_Builder::setApnName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setApnName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setApnTypeBitmask(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setApnTypeBitmask",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setAuthType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAuthType",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setCarrierEnabled(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setCarrierEnabled",
			"(Z)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setCarrierId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setCarrierId",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setEntryName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setEntryName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsProxyAddress(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setMmsProxyAddress",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsProxyAddress(java::net::InetAddress arg0)
	{
		return __thiz.callObjectMethod(
			"setMmsProxyAddress",
			"(Ljava/net/InetAddress;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsProxyPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMmsProxyPort",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsc(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setMmsc",
			"(Landroid/net/Uri;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMvnoType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMvnoType",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setNetworkTypeBitmask(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setNetworkTypeBitmask",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setOperatorNumeric(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setOperatorNumeric",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setPassword(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProtocol(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setProtocol",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProxyAddress(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setProxyAddress",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProxyAddress(java::net::InetAddress arg0)
	{
		return __thiz.callObjectMethod(
			"setProxyAddress",
			"(Ljava/net/InetAddress;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProxyPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setProxyPort",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setRoamingProtocol(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRoamingProtocol",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setUser(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setUser",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
} // namespace android::telephony::data

