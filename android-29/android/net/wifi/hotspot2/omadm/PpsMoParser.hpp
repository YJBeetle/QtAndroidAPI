#pragma once

#ifndef ANDROID_NET_WIFI_HOTSPOT2_OMADM_PPSMOPARSER
#define ANDROID_NET_WIFI_HOTSPOT2_OMADM_PPSMOPARSER

#include "../../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}

namespace __jni_impl::android::net::wifi::hotspot2::omadm
{
	class PpsMoParser : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject parseMoText(jstring arg0);
	};
} // namespace __jni_impl::android::net::wifi::hotspot2::omadm

#include "../PasspointConfiguration.hpp"

namespace __jni_impl::android::net::wifi::hotspot2::omadm
{
	// Fields
	
	// Constructors
	void PpsMoParser::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.omadm.PpsMoParser",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PpsMoParser::parseMoText(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.hotspot2.omadm.PpsMoParser",
			"parseMoText",
			"(Ljava/lang/String;)Landroid/net/wifi/hotspot2/PasspointConfiguration;",
			arg0);
	}
} // namespace __jni_impl::android::net::wifi::hotspot2::omadm

namespace android::net::wifi::hotspot2::omadm
{
	class PpsMoParser : public __jni_impl::android::net::wifi::hotspot2::omadm::PpsMoParser
	{
	public:
		PpsMoParser(QAndroidJniObject obj) { __thiz = obj; }
		PpsMoParser()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::hotspot2::omadm

#endif // ANDROID_NET_WIFI_HOTSPOT2_OMADM_PPSMOPARSER

