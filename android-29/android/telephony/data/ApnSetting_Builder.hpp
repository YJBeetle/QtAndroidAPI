#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::telephony::data
{
	class ApnSetting;
}
namespace java::net
{
	class InetAddress;
}

namespace android::telephony::data
{
	class ApnSetting_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		ApnSetting_Builder(QAndroidJniObject obj);
		// Constructors
		ApnSetting_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setApnName(jstring arg0);
		QAndroidJniObject setApnName(const QString &arg0);
		QAndroidJniObject setApnTypeBitmask(jint arg0);
		QAndroidJniObject setAuthType(jint arg0);
		QAndroidJniObject setCarrierEnabled(jboolean arg0);
		QAndroidJniObject setCarrierId(jint arg0);
		QAndroidJniObject setEntryName(jstring arg0);
		QAndroidJniObject setEntryName(const QString &arg0);
		QAndroidJniObject setMmsProxyAddress(jstring arg0);
		QAndroidJniObject setMmsProxyAddress(const QString &arg0);
		QAndroidJniObject setMmsProxyAddress(java::net::InetAddress arg0);
		QAndroidJniObject setMmsProxyPort(jint arg0);
		QAndroidJniObject setMmsc(android::net::Uri arg0);
		QAndroidJniObject setMvnoType(jint arg0);
		QAndroidJniObject setNetworkTypeBitmask(jint arg0);
		QAndroidJniObject setOperatorNumeric(jstring arg0);
		QAndroidJniObject setOperatorNumeric(const QString &arg0);
		QAndroidJniObject setPassword(jstring arg0);
		QAndroidJniObject setPassword(const QString &arg0);
		QAndroidJniObject setProtocol(jint arg0);
		QAndroidJniObject setProxyAddress(jstring arg0);
		QAndroidJniObject setProxyAddress(const QString &arg0);
		QAndroidJniObject setProxyAddress(java::net::InetAddress arg0);
		QAndroidJniObject setProxyPort(jint arg0);
		QAndroidJniObject setRoamingProtocol(jint arg0);
		QAndroidJniObject setUser(jstring arg0);
		QAndroidJniObject setUser(const QString &arg0);
	};
} // namespace android::telephony::data

