#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi
{
	class WifiConfiguration_PairwiseCipher : public __JniBaseClass
	{
	public:
		// Fields
		static jint CCMP();
		static jint GCMP_256();
		static jint NONE();
		static jint TKIP();
		static jarray strings();
		static jstring varName();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::net::wifi


namespace __jni_impl::android::net::wifi
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
	
	// Constructors
	void WifiConfiguration_PairwiseCipher::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiConfiguration_PairwiseCipher : public __jni_impl::android::net::wifi::WifiConfiguration_PairwiseCipher
	{
	public:
		WifiConfiguration_PairwiseCipher(QAndroidJniObject obj) { __thiz = obj; }
		WifiConfiguration_PairwiseCipher()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

