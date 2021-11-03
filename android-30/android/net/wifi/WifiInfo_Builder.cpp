#include "../../../JByteArray.hpp"
#include "./WifiInfo.hpp"
#include "../../../JString.hpp"
#include "./WifiInfo_Builder.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QJniObject forward
	WifiInfo_Builder::WifiInfo_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiInfo_Builder::WifiInfo_Builder()
		: JObject(
			"android.net.wifi.WifiInfo$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::wifi::WifiInfo WifiInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/WifiInfo;"
		);
	}
	android::net::wifi::WifiInfo_Builder WifiInfo_Builder::setBssid(JString arg0) const
	{
		return callObjectMethod(
			"setBssid",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::WifiInfo_Builder WifiInfo_Builder::setNetworkId(jint arg0) const
	{
		return callObjectMethod(
			"setNetworkId",
			"(I)Landroid/net/wifi/WifiInfo$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiInfo_Builder WifiInfo_Builder::setRssi(jint arg0) const
	{
		return callObjectMethod(
			"setRssi",
			"(I)Landroid/net/wifi/WifiInfo$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiInfo_Builder WifiInfo_Builder::setSsid(JByteArray arg0) const
	{
		return callObjectMethod(
			"setSsid",
			"([B)Landroid/net/wifi/WifiInfo$Builder;",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::net::wifi

