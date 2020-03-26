#pragma once

#ifndef ANDROID_TELEPHONY_ACCESSNETWORKCONSTANTS_UTRANBAND
#define ANDROID_TELEPHONY_ACCESSNETWORKCONSTANTS_UTRANBAND

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class AccessNetworkConstants_UtranBand : public __JniBaseClass
	{
	public:
		// Fields
		static jint BAND_1();
		static jint BAND_10();
		static jint BAND_11();
		static jint BAND_12();
		static jint BAND_13();
		static jint BAND_14();
		static jint BAND_19();
		static jint BAND_2();
		static jint BAND_20();
		static jint BAND_21();
		static jint BAND_22();
		static jint BAND_25();
		static jint BAND_26();
		static jint BAND_3();
		static jint BAND_4();
		static jint BAND_5();
		static jint BAND_6();
		static jint BAND_7();
		static jint BAND_8();
		static jint BAND_9();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	jint AccessNetworkConstants_UtranBand::BAND_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_1"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_10()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_10"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_11()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_11"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_12()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_12"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_13()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_13"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_14()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_14"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_19()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_19"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_2"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_20()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_20"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_21()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_21"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_22()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_22"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_25()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_25"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_26()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_26"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_3"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_4"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_5"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_6"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_7"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_8"
		);
	}
	jint AccessNetworkConstants_UtranBand::BAND_9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"BAND_9"
		);
	}
	
	// Constructors
	void AccessNetworkConstants_UtranBand::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.AccessNetworkConstants$UtranBand",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class AccessNetworkConstants_UtranBand : public __jni_impl::android::telephony::AccessNetworkConstants_UtranBand
	{
	public:
		AccessNetworkConstants_UtranBand(QAndroidJniObject obj) { __thiz = obj; }
		AccessNetworkConstants_UtranBand()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_ACCESSNETWORKCONSTANTS_UTRANBAND

