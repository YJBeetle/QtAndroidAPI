#pragma once

#ifndef ANDROID_TELEPHONY_ACCESSNETWORKCONSTANTS_ACCESSNETWORKTYPE
#define ANDROID_TELEPHONY_ACCESSNETWORKCONSTANTS_ACCESSNETWORKTYPE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class AccessNetworkConstants_AccessNetworkType : public __JniBaseClass
	{
	public:
		// Fields
		static jint CDMA2000();
		static jint EUTRAN();
		static jint GERAN();
		static jint IWLAN();
		static jint UNKNOWN();
		static jint UTRAN();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	jint AccessNetworkConstants_AccessNetworkType::CDMA2000()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"CDMA2000"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::EUTRAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"EUTRAN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::GERAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"GERAN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::IWLAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"IWLAN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"UNKNOWN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::UTRAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"UTRAN"
		);
	}
	
	// Constructors
	void AccessNetworkConstants_AccessNetworkType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class AccessNetworkConstants_AccessNetworkType : public __jni_impl::android::telephony::AccessNetworkConstants_AccessNetworkType
	{
	public:
		AccessNetworkConstants_AccessNetworkType(QAndroidJniObject obj) { __thiz = obj; }
		AccessNetworkConstants_AccessNetworkType()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_ACCESSNETWORKCONSTANTS_ACCESSNETWORKTYPE

