#include "../PasspointConfiguration.hpp"
#include "./PpsMoParser.hpp"

namespace android::net::wifi::hotspot2::omadm
{
	// Fields
	
	// QAndroidJniObject forward
	PpsMoParser::PpsMoParser(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
} // namespace android::net::wifi::hotspot2::omadm

