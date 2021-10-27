#include "../../os/Parcel.hpp"
#include "./CarrierIdentifier.hpp"

namespace android::service::carrier
{
	// Fields
	QAndroidJniObject CarrierIdentifier::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.carrier.CarrierIdentifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CarrierIdentifier::CarrierIdentifier(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CarrierIdentifier::CarrierIdentifier(jbyteArray &arg0, jstring &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierIdentifier",
			"([BLjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	CarrierIdentifier::CarrierIdentifier(jbyteArray &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierIdentifier",
			"([BLjava/lang/String;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	CarrierIdentifier::CarrierIdentifier(jstring &arg0, jstring &arg1, jstring &arg2, jstring &arg3, jstring &arg4, jstring &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	CarrierIdentifier::CarrierIdentifier(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>()
		);
	}
	CarrierIdentifier::CarrierIdentifier(jstring &arg0, jstring &arg1, jstring &arg2, jstring &arg3, jstring &arg4, jstring &arg5, jint &arg6, jint &arg7)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	CarrierIdentifier::CarrierIdentifier(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5, jint &arg6, jint &arg7)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			arg6,
			arg7
		);
	}
	
	// Methods
	jint CarrierIdentifier::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CarrierIdentifier::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CarrierIdentifier::getCarrierId()
	{
		return __thiz.callMethod<jint>(
			"getCarrierId",
			"()I"
		);
	}
	jstring CarrierIdentifier::getGid1()
	{
		return __thiz.callObjectMethod(
			"getGid1",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierIdentifier::getGid2()
	{
		return __thiz.callObjectMethod(
			"getGid2",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierIdentifier::getImsi()
	{
		return __thiz.callObjectMethod(
			"getImsi",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierIdentifier::getMcc()
	{
		return __thiz.callObjectMethod(
			"getMcc",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierIdentifier::getMnc()
	{
		return __thiz.callObjectMethod(
			"getMnc",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CarrierIdentifier::getSpecificCarrierId()
	{
		return __thiz.callMethod<jint>(
			"getSpecificCarrierId",
			"()I"
		);
	}
	jstring CarrierIdentifier::getSpn()
	{
		return __thiz.callObjectMethod(
			"getSpn",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CarrierIdentifier::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CarrierIdentifier::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CarrierIdentifier::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::carrier

