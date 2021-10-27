#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::sip
{
	class SipProfile;
}

namespace android::net::sip
{
	class SipProfile_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		SipProfile_Builder(QAndroidJniObject obj);
		// Constructors
		SipProfile_Builder(android::net::sip::SipProfile &arg0);
		SipProfile_Builder(jstring &arg0);
		SipProfile_Builder(const QString &arg0);
		SipProfile_Builder(jstring &arg0, jstring &arg1);
		SipProfile_Builder(const QString &arg0, const QString &arg1);
		SipProfile_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAuthUserName(jstring arg0);
		QAndroidJniObject setAuthUserName(const QString &arg0);
		QAndroidJniObject setAutoRegistration(jboolean arg0);
		QAndroidJniObject setDisplayName(jstring arg0);
		QAndroidJniObject setDisplayName(const QString &arg0);
		QAndroidJniObject setOutboundProxy(jstring arg0);
		QAndroidJniObject setOutboundProxy(const QString &arg0);
		QAndroidJniObject setPassword(jstring arg0);
		QAndroidJniObject setPassword(const QString &arg0);
		QAndroidJniObject setPort(jint arg0);
		QAndroidJniObject setProfileName(jstring arg0);
		QAndroidJniObject setProfileName(const QString &arg0);
		QAndroidJniObject setProtocol(jstring arg0);
		QAndroidJniObject setProtocol(const QString &arg0);
		QAndroidJniObject setSendKeepAlive(jboolean arg0);
	};
} // namespace android::net::sip

