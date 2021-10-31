#include "../os/Parcel.hpp"
#include "./CellInfo.hpp"

namespace android::telephony
{
	// Fields
	jint CellInfo::CONNECTION_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_NONE"
		);
	}
	jint CellInfo::CONNECTION_PRIMARY_SERVING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_PRIMARY_SERVING"
		);
	}
	jint CellInfo::CONNECTION_SECONDARY_SERVING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_SECONDARY_SERVING"
		);
	}
	jint CellInfo::CONNECTION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_UNKNOWN"
		);
	}
	QAndroidJniObject CellInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint CellInfo::UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellInfo",
			"UNAVAILABLE"
		);
	}
	jlong CellInfo::UNAVAILABLE_LONG()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.telephony.CellInfo",
			"UNAVAILABLE_LONG"
		);
	}
	
	// QAndroidJniObject forward
	CellInfo::CellInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint CellInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellInfo::getCellConnectionStatus()
	{
		return callMethod<jint>(
			"getCellConnectionStatus",
			"()I"
		);
	}
	jlong CellInfo::getTimeStamp()
	{
		return callMethod<jlong>(
			"getTimeStamp",
			"()J"
		);
	}
	jint CellInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean CellInfo::isRegistered()
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	jstring CellInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony
