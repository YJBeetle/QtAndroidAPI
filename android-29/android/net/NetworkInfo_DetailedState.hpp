#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::net
{
	class NetworkInfo_DetailedState : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject AUTHENTICATING();
		static QAndroidJniObject BLOCKED();
		static QAndroidJniObject CAPTIVE_PORTAL_CHECK();
		static QAndroidJniObject CONNECTED();
		static QAndroidJniObject CONNECTING();
		static QAndroidJniObject DISCONNECTED();
		static QAndroidJniObject DISCONNECTING();
		static QAndroidJniObject FAILED();
		static QAndroidJniObject IDLE();
		static QAndroidJniObject OBTAINING_IPADDR();
		static QAndroidJniObject SCANNING();
		static QAndroidJniObject SUSPENDED();
		static QAndroidJniObject VERIFYING_POOR_LINK();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkInfo_DetailedState(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInfo_DetailedState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::net

