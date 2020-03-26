#pragma once

#ifndef ANDROID_TELEPHONY_CELLSIGNALSTRENGTHTDSCDMA
#define ANDROID_TELEPHONY_CELLSIGNALSTRENGTHTDSCDMA

#include "../../__JniBaseClass.hpp"
#include "CellSignalStrength.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellSignalStrengthTdscdma : public __jni_impl::android::telephony::CellSignalStrength
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint getLevel();
		jint getAsuLevel();
		jint getDbm();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getRscp();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellSignalStrengthTdscdma::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellSignalStrengthTdscdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellSignalStrengthTdscdma::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellSignalStrengthTdscdma",
			"(V)V");
	}
	
	// Methods
	jboolean CellSignalStrengthTdscdma::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CellSignalStrengthTdscdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellSignalStrengthTdscdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint CellSignalStrengthTdscdma::getLevel()
	{
		return __thiz.callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthTdscdma::getAsuLevel()
	{
		return __thiz.callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthTdscdma::getDbm()
	{
		return __thiz.callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthTdscdma::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CellSignalStrengthTdscdma::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint CellSignalStrengthTdscdma::getRscp()
	{
		return __thiz.callMethod<jint>(
			"getRscp",
			"()I"
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellSignalStrengthTdscdma : public __jni_impl::android::telephony::CellSignalStrengthTdscdma
	{
	public:
		CellSignalStrengthTdscdma(QAndroidJniObject obj) { __thiz = obj; }
		CellSignalStrengthTdscdma()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLSIGNALSTRENGTHTDSCDMA

