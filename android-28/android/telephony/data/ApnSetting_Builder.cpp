#include "../../net/Uri.hpp"
#include "./ApnSetting.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./ApnSetting_Builder.hpp"

namespace android::telephony::data
{
	// Fields
	
	// QJniObject forward
	ApnSetting_Builder::ApnSetting_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ApnSetting_Builder::ApnSetting_Builder()
		: JObject(
			"android.telephony.data.ApnSetting$Builder",
			"()V"
		) {}
	
	// Methods
	android::telephony::data::ApnSetting ApnSetting_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/data/ApnSetting;"
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setApnName(JString arg0)
	{
		return callObjectMethod(
			"setApnName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object<jstring>()
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setApnTypeBitmask(jint arg0)
	{
		return callObjectMethod(
			"setApnTypeBitmask",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setAuthType(jint arg0)
	{
		return callObjectMethod(
			"setAuthType",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setCarrierEnabled(jboolean arg0)
	{
		return callObjectMethod(
			"setCarrierEnabled",
			"(Z)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setEntryName(JString arg0)
	{
		return callObjectMethod(
			"setEntryName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object<jstring>()
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setMmsProxyAddress(java::net::InetAddress arg0)
	{
		return callObjectMethod(
			"setMmsProxyAddress",
			"(Ljava/net/InetAddress;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object()
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setMmsProxyPort(jint arg0)
	{
		return callObjectMethod(
			"setMmsProxyPort",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setMmsc(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setMmsc",
			"(Landroid/net/Uri;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object()
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setMvnoType(jint arg0)
	{
		return callObjectMethod(
			"setMvnoType",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setNetworkTypeBitmask(jint arg0)
	{
		return callObjectMethod(
			"setNetworkTypeBitmask",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setOperatorNumeric(JString arg0)
	{
		return callObjectMethod(
			"setOperatorNumeric",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object<jstring>()
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setPassword(JString arg0)
	{
		return callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object<jstring>()
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setProtocol(jint arg0)
	{
		return callObjectMethod(
			"setProtocol",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setProxyAddress(java::net::InetAddress arg0)
	{
		return callObjectMethod(
			"setProxyAddress",
			"(Ljava/net/InetAddress;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object()
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setProxyPort(jint arg0)
	{
		return callObjectMethod(
			"setProxyPort",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setRoamingProtocol(jint arg0)
	{
		return callObjectMethod(
			"setRoamingProtocol",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setUser(JString arg0)
	{
		return callObjectMethod(
			"setUser",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::telephony::data

