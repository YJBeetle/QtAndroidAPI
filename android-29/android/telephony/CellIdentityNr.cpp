#include "../os/Parcel.hpp"
#include "./CellIdentityNr.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject CellIdentityNr::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentityNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CellIdentityNr::CellIdentityNr(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean CellIdentityNr::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CellIdentityNr::getMccString()
	{
		return __thiz.callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CellIdentityNr::getMncString()
	{
		return __thiz.callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong CellIdentityNr::getNci()
	{
		return __thiz.callMethod<jlong>(
			"getNci",
			"()J"
		);
	}
	jint CellIdentityNr::getNrarfcn()
	{
		return __thiz.callMethod<jint>(
			"getNrarfcn",
			"()I"
		);
	}
	jint CellIdentityNr::getPci()
	{
		return __thiz.callMethod<jint>(
			"getPci",
			"()I"
		);
	}
	jint CellIdentityNr::getTac()
	{
		return __thiz.callMethod<jint>(
			"getTac",
			"()I"
		);
	}
	jint CellIdentityNr::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellIdentityNr::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellIdentityNr::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

