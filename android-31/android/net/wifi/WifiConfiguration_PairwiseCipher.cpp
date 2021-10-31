#include "./WifiConfiguration_PairwiseCipher.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_PairwiseCipher::CCMP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"CCMP"
		);
	}
	jint WifiConfiguration_PairwiseCipher::GCMP_128()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"GCMP_128"
		);
	}
	jint WifiConfiguration_PairwiseCipher::GCMP_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"GCMP_256"
		);
	}
	jint WifiConfiguration_PairwiseCipher::NONE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"NONE"
		);
	}
	jint WifiConfiguration_PairwiseCipher::SMS4()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"SMS4"
		);
	}
	jint WifiConfiguration_PairwiseCipher::TKIP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"TKIP"
		);
	}
	jarray WifiConfiguration_PairwiseCipher::strings()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WifiConfiguration_PairwiseCipher::varName()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"varName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	WifiConfiguration_PairwiseCipher::WifiConfiguration_PairwiseCipher(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

