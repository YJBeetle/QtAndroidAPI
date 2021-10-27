#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class AccessNetworkConstants_GeranBand : public __JniBaseClass
	{
	public:
		// Fields
		static jint BAND_450();
		static jint BAND_480();
		static jint BAND_710();
		static jint BAND_750();
		static jint BAND_850();
		static jint BAND_DCS1800();
		static jint BAND_E900();
		static jint BAND_ER900();
		static jint BAND_P900();
		static jint BAND_PCS1900();
		static jint BAND_R900();
		static jint BAND_T380();
		static jint BAND_T410();
		static jint BAND_T810();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	jint AccessNetworkConstants_GeranBand::BAND_450()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_450"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_480()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_480"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_710()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_710"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_750()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_750"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_850()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_850"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_DCS1800()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_DCS1800"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_E900()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_E900"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_ER900()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_ER900"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_P900()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_P900"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_PCS1900()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_PCS1900"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_R900()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_R900"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_T380()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_T380"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_T410()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_T410"
		);
	}
	jint AccessNetworkConstants_GeranBand::BAND_T810()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"BAND_T810"
		);
	}
	
	// Constructors
	void AccessNetworkConstants_GeranBand::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.AccessNetworkConstants$GeranBand",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class AccessNetworkConstants_GeranBand : public __jni_impl::android::telephony::AccessNetworkConstants_GeranBand
	{
	public:
		AccessNetworkConstants_GeranBand(QAndroidJniObject obj) { __thiz = obj; }
		AccessNetworkConstants_GeranBand()
		{
			__constructor();
		}
	};
} // namespace android::telephony

