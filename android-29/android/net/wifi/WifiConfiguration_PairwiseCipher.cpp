#include "./WifiConfiguration_PairwiseCipher.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_PairwiseCipher::CCMP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"CCMP"
		);
	}
	jint WifiConfiguration_PairwiseCipher::GCMP_256()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"GCMP_256"
		);
	}
	jint WifiConfiguration_PairwiseCipher::NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"NONE"
		);
	}
	jint WifiConfiguration_PairwiseCipher::TKIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"TKIP"
		);
	}
	jarray WifiConfiguration_PairwiseCipher::strings()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WifiConfiguration_PairwiseCipher::varName()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"varName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	WifiConfiguration_PairwiseCipher::WifiConfiguration_PairwiseCipher(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

