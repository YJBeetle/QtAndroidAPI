#include "../os/Parcel.hpp"
#include "./CellSignalStrengthLte.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject CellSignalStrengthLte::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellSignalStrengthLte",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CellSignalStrengthLte::CellSignalStrengthLte(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint CellSignalStrengthLte::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthLte::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellSignalStrengthLte::getAsuLevel()
	{
		return __thiz.callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getCqi()
	{
		return __thiz.callMethod<jint>(
			"getCqi",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getDbm()
	{
		return __thiz.callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getLevel()
	{
		return __thiz.callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRsrp()
	{
		return __thiz.callMethod<jint>(
			"getRsrp",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRsrq()
	{
		return __thiz.callMethod<jint>(
			"getRsrq",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRssi()
	{
		return __thiz.callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRssnr()
	{
		return __thiz.callMethod<jint>(
			"getRssnr",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getTimingAdvance()
	{
		return __thiz.callMethod<jint>(
			"getTimingAdvance",
			"()I"
		);
	}
	jint CellSignalStrengthLte::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellSignalStrengthLte::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellSignalStrengthLte::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

