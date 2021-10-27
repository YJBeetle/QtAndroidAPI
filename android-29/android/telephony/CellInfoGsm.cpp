#include "../os/Parcel.hpp"
#include "./CellIdentityGsm.hpp"
#include "./CellSignalStrengthGsm.hpp"
#include "./CellInfoGsm.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject CellInfoGsm::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellInfoGsm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CellInfoGsm::CellInfoGsm(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint CellInfoGsm::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfoGsm::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CellInfoGsm::getCellIdentity()
	{
		return __thiz.callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityGsm;"
		);
	}
	QAndroidJniObject CellInfoGsm::getCellSignalStrength()
	{
		return __thiz.callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthGsm;"
		);
	}
	jint CellInfoGsm::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellInfoGsm::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellInfoGsm::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

