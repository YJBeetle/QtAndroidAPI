#include "../os/Parcel.hpp"
#include "./CellIdentityCdma.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject CellIdentityCdma::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentityCdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CellIdentityCdma::CellIdentityCdma(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean CellIdentityCdma::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellIdentityCdma::getBasestationId()
	{
		return __thiz.callMethod<jint>(
			"getBasestationId",
			"()I"
		);
	}
	jint CellIdentityCdma::getLatitude()
	{
		return __thiz.callMethod<jint>(
			"getLatitude",
			"()I"
		);
	}
	jint CellIdentityCdma::getLongitude()
	{
		return __thiz.callMethod<jint>(
			"getLongitude",
			"()I"
		);
	}
	jint CellIdentityCdma::getNetworkId()
	{
		return __thiz.callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	jint CellIdentityCdma::getSystemId()
	{
		return __thiz.callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	jint CellIdentityCdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellIdentityCdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellIdentityCdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

