#include "../../net/Uri.hpp"
#include "./ApnSetting.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./ApnSetting_Builder.hpp"

namespace android::telephony::data
{
	// Fields
	
	// QAndroidJniObject forward
	ApnSetting_Builder::ApnSetting_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ApnSetting_Builder::ApnSetting_Builder()
		: __JniBaseClass(
			"android.telephony.data.ApnSetting$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject ApnSetting_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/data/ApnSetting;"
		);
	}
	QAndroidJniObject ApnSetting_Builder::setApnName(jstring arg0)
	{
		return callObjectMethod(
			"setApnName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setApnTypeBitmask(jint arg0)
	{
		return callObjectMethod(
			"setApnTypeBitmask",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setAuthType(jint arg0)
	{
		return callObjectMethod(
			"setAuthType",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setCarrierEnabled(jboolean arg0)
	{
		return callObjectMethod(
			"setCarrierEnabled",
			"(Z)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setCarrierId(jint arg0)
	{
		return callObjectMethod(
			"setCarrierId",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setEntryName(jstring arg0)
	{
		return callObjectMethod(
			"setEntryName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsProxyAddress(jstring arg0)
	{
		return callObjectMethod(
			"setMmsProxyAddress",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsProxyAddress(java::net::InetAddress arg0)
	{
		return callObjectMethod(
			"setMmsProxyAddress",
			"(Ljava/net/InetAddress;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsProxyPort(jint arg0)
	{
		return callObjectMethod(
			"setMmsProxyPort",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsc(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setMmsc",
			"(Landroid/net/Uri;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMvnoType(jint arg0)
	{
		return callObjectMethod(
			"setMvnoType",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setNetworkTypeBitmask(jint arg0)
	{
		return callObjectMethod(
			"setNetworkTypeBitmask",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setOperatorNumeric(jstring arg0)
	{
		return callObjectMethod(
			"setOperatorNumeric",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setPassword(jstring arg0)
	{
		return callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProtocol(jint arg0)
	{
		return callObjectMethod(
			"setProtocol",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProxyAddress(jstring arg0)
	{
		return callObjectMethod(
			"setProxyAddress",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProxyAddress(java::net::InetAddress arg0)
	{
		return callObjectMethod(
			"setProxyAddress",
			"(Ljava/net/InetAddress;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProxyPort(jint arg0)
	{
		return callObjectMethod(
			"setProxyPort",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setRoamingProtocol(jint arg0)
	{
		return callObjectMethod(
			"setRoamingProtocol",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setUser(jstring arg0)
	{
		return callObjectMethod(
			"setUser",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
} // namespace android::telephony::data

