#include "../os/Parcel.hpp"
#include "./CellIdentityLte.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject CellIdentityLte::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentityLte",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CellIdentityLte::CellIdentityLte(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean CellIdentityLte::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellIdentityLte::getBandwidth()
	{
		return __thiz.callMethod<jint>(
			"getBandwidth",
			"()I"
		);
	}
	jint CellIdentityLte::getCi()
	{
		return __thiz.callMethod<jint>(
			"getCi",
			"()I"
		);
	}
	jint CellIdentityLte::getEarfcn()
	{
		return __thiz.callMethod<jint>(
			"getEarfcn",
			"()I"
		);
	}
	jint CellIdentityLte::getMcc()
	{
		return __thiz.callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	jstring CellIdentityLte::getMccString()
	{
		return __thiz.callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityLte::getMnc()
	{
		return __thiz.callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	jstring CellIdentityLte::getMncString()
	{
		return __thiz.callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CellIdentityLte::getMobileNetworkOperator()
	{
		return __thiz.callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityLte::getPci()
	{
		return __thiz.callMethod<jint>(
			"getPci",
			"()I"
		);
	}
	jint CellIdentityLte::getTac()
	{
		return __thiz.callMethod<jint>(
			"getTac",
			"()I"
		);
	}
	jint CellIdentityLte::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellIdentityLte::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellIdentityLte::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

