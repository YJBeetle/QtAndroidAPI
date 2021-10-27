#include "../os/Parcel.hpp"
#include "./NeighboringCellInfo.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject NeighboringCellInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.NeighboringCellInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint NeighboringCellInfo::UNKNOWN_CID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NeighboringCellInfo",
			"UNKNOWN_CID"
		);
	}
	jint NeighboringCellInfo::UNKNOWN_RSSI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NeighboringCellInfo",
			"UNKNOWN_RSSI"
		);
	}
	
	NeighboringCellInfo::NeighboringCellInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NeighboringCellInfo::NeighboringCellInfo()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NeighboringCellInfo",
			"()V"
		);
	}
	NeighboringCellInfo::NeighboringCellInfo(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NeighboringCellInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	NeighboringCellInfo::NeighboringCellInfo(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NeighboringCellInfo",
			"(II)V",
			arg0,
			arg1
		);
	}
	NeighboringCellInfo::NeighboringCellInfo(jint &arg0, jstring &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NeighboringCellInfo",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	NeighboringCellInfo::NeighboringCellInfo(jint &arg0, const QString &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NeighboringCellInfo",
			"(ILjava/lang/String;I)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	
	// Methods
	jint NeighboringCellInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint NeighboringCellInfo::getCid()
	{
		return __thiz.callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint NeighboringCellInfo::getLac()
	{
		return __thiz.callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint NeighboringCellInfo::getNetworkType()
	{
		return __thiz.callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jint NeighboringCellInfo::getPsc()
	{
		return __thiz.callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint NeighboringCellInfo::getRssi()
	{
		return __thiz.callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	void NeighboringCellInfo::setCid(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCid",
			"(I)V",
			arg0
		);
	}
	void NeighboringCellInfo::setRssi(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRssi",
			"(I)V",
			arg0
		);
	}
	jstring NeighboringCellInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NeighboringCellInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

