#pragma once

#ifndef ANDROID_SERVICE_CARRIER_CARRIERIDENTIFIER
#define ANDROID_SERVICE_CARRIER_CARRIERIDENTIFIER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::carrier
{
	class CarrierIdentifier : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jbyteArray arg0, jstring arg1, jstring arg2);
		void __constructor(jbyteArray arg0, const QString &arg1, const QString &arg2);
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5, jint arg6, jint arg7);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5, jint arg6, jint arg7);
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getMcc();
		jstring getMnc();
		jstring getSpn();
		jstring getImsi();
		jstring getGid1();
		jstring getGid2();
		jint getCarrierId();
		jint getSpecificCarrierId();
	};
} // namespace __jni_impl::android::service::carrier

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::carrier
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
	
	// Constructors
	void CarrierIdentifier::__constructor(jbyteArray arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierIdentifier",
			"([BLjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void CarrierIdentifier::__constructor(jbyteArray arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierIdentifier",
			"([BLjava/lang/String;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void CarrierIdentifier::__constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5, jint arg6, jint arg7)
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
	void CarrierIdentifier::__constructor(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5, jint arg6, jint arg7)
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
	void CarrierIdentifier::__constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5)
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
	void CarrierIdentifier::__constructor(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5)
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
	
	// Methods
	jboolean CarrierIdentifier::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CarrierIdentifier::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
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
	jint CarrierIdentifier::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CarrierIdentifier::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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
	jstring CarrierIdentifier::getSpn()
	{
		return __thiz.callObjectMethod(
			"getSpn",
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
	jint CarrierIdentifier::getCarrierId()
	{
		return __thiz.callMethod<jint>(
			"getCarrierId",
			"()I"
		);
	}
	jint CarrierIdentifier::getSpecificCarrierId()
	{
		return __thiz.callMethod<jint>(
			"getSpecificCarrierId",
			"()I"
		);
	}
} // namespace __jni_impl::android::service::carrier

namespace android::service::carrier
{
	class CarrierIdentifier : public __jni_impl::android::service::carrier::CarrierIdentifier
	{
	public:
		CarrierIdentifier(QAndroidJniObject obj) { __thiz = obj; }
		CarrierIdentifier(jbyteArray arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		CarrierIdentifier(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5, jint arg6, jint arg7)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7);
		}
		CarrierIdentifier(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::service::carrier

#endif // ANDROID_SERVICE_CARRIER_CARRIERIDENTIFIER

