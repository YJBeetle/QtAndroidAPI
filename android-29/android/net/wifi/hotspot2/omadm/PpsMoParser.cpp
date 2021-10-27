#include "../PasspointConfiguration.hpp"
#include "./PpsMoParser.hpp"

namespace android::net::wifi::hotspot2::omadm
{
	// Fields
	
	PpsMoParser::PpsMoParser(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PpsMoParser::parseMoText(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.hotspot2.omadm.PpsMoParser",
			"parseMoText",
			"(Ljava/lang/String;)Landroid/net/wifi/hotspot2/PasspointConfiguration;",
			arg0
		);
	}
	QAndroidJniObject PpsMoParser::parseMoText(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.hotspot2.omadm.PpsMoParser",
			"parseMoText",
			"(Ljava/lang/String;)Landroid/net/wifi/hotspot2/PasspointConfiguration;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::net::wifi::hotspot2::omadm

