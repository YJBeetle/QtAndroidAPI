#include "./AccessNetworkConstants_GeranBand.hpp"

namespace android::telephony
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
	
	AccessNetworkConstants_GeranBand::AccessNetworkConstants_GeranBand(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::telephony

