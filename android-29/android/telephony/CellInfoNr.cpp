#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"
#include "./CellSignalStrength.hpp"
#include "./CellInfoNr.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject CellInfoNr::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellInfoNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CellInfoNr::CellInfoNr(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean CellInfoNr::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CellInfoNr::getCellIdentity()
	{
		return __thiz.callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentity;"
		);
	}
	QAndroidJniObject CellInfoNr::getCellSignalStrength()
	{
		return __thiz.callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrength;"
		);
	}
	jint CellInfoNr::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellInfoNr::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellInfoNr::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

