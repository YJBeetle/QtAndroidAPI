#include "../os/Parcel.hpp"
#include "./GnssNavigationMessage.hpp"

namespace android::location
{
	// Fields
	JObject GnssNavigationMessage::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssNavigationMessage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint GnssNavigationMessage::STATUS_PARITY_PASSED()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"STATUS_PARITY_PASSED"
		);
	}
	jint GnssNavigationMessage::STATUS_PARITY_REBUILT()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"STATUS_PARITY_REBUILT"
		);
	}
	jint GnssNavigationMessage::STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"STATUS_UNKNOWN"
		);
	}
	jint GnssNavigationMessage::TYPE_BDS_CNAV1()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_BDS_CNAV1"
		);
	}
	jint GnssNavigationMessage::TYPE_BDS_CNAV2()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_BDS_CNAV2"
		);
	}
	jint GnssNavigationMessage::TYPE_BDS_D1()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_BDS_D1"
		);
	}
	jint GnssNavigationMessage::TYPE_BDS_D2()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_BDS_D2"
		);
	}
	jint GnssNavigationMessage::TYPE_GAL_F()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GAL_F"
		);
	}
	jint GnssNavigationMessage::TYPE_GAL_I()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GAL_I"
		);
	}
	jint GnssNavigationMessage::TYPE_GLO_L1CA()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GLO_L1CA"
		);
	}
	jint GnssNavigationMessage::TYPE_GPS_CNAV2()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_CNAV2"
		);
	}
	jint GnssNavigationMessage::TYPE_GPS_L1CA()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_L1CA"
		);
	}
	jint GnssNavigationMessage::TYPE_GPS_L2CNAV()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_L2CNAV"
		);
	}
	jint GnssNavigationMessage::TYPE_GPS_L5CNAV()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_L5CNAV"
		);
	}
	jint GnssNavigationMessage::TYPE_IRN_L5CA()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_IRN_L5CA"
		);
	}
	jint GnssNavigationMessage::TYPE_QZS_L1CA()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_QZS_L1CA"
		);
	}
	jint GnssNavigationMessage::TYPE_SBS()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_SBS"
		);
	}
	jint GnssNavigationMessage::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	GnssNavigationMessage::GnssNavigationMessage(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint GnssNavigationMessage::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jbyteArray GnssNavigationMessage::getData()
	{
		return callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jint GnssNavigationMessage::getMessageId()
	{
		return callMethod<jint>(
			"getMessageId",
			"()I"
		);
	}
	jint GnssNavigationMessage::getStatus()
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jint GnssNavigationMessage::getSubmessageId()
	{
		return callMethod<jint>(
			"getSubmessageId",
			"()I"
		);
	}
	jint GnssNavigationMessage::getSvid()
	{
		return callMethod<jint>(
			"getSvid",
			"()I"
		);
	}
	jint GnssNavigationMessage::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring GnssNavigationMessage::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void GnssNavigationMessage::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

