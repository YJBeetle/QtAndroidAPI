#pragma once

#ifndef ANDROID_TELEPHONY_CELLSIGNALSTRENGTHCDMA
#define ANDROID_TELEPHONY_CELLSIGNALSTRENGTHCDMA

#include "../../__JniBaseClass.hpp"
#include "CellSignalStrength.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellSignalStrengthCdma : public __jni_impl::android::telephony::CellSignalStrength
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
		jint getCdmaDbm();
		jint getCdmaEcio();
		jint getEvdoDbm();
		jint getEvdoEcio();
		jint getEvdoSnr();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getCdmaLevel();
		jint getEvdoLevel();
		jint getAsuLevel();
		jint getDbm();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellSignalStrengthCdma::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellSignalStrengthCdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellSignalStrengthCdma::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellSignalStrengthCdma",
			"(V)V");
	}
	
	// Methods
	jboolean CellSignalStrengthCdma::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CellSignalStrengthCdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellSignalStrengthCdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getLevel()
	{
		return __thiz.callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getCdmaDbm()
	{
		return __thiz.callMethod<jint>(
			"getCdmaDbm",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getCdmaEcio()
	{
		return __thiz.callMethod<jint>(
			"getCdmaEcio",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoDbm()
	{
		return __thiz.callMethod<jint>(
			"getEvdoDbm",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoEcio()
	{
		return __thiz.callMethod<jint>(
			"getEvdoEcio",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoSnr()
	{
		return __thiz.callMethod<jint>(
			"getEvdoSnr",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CellSignalStrengthCdma::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint CellSignalStrengthCdma::getCdmaLevel()
	{
		return __thiz.callMethod<jint>(
			"getCdmaLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoLevel()
	{
		return __thiz.callMethod<jint>(
			"getEvdoLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getAsuLevel()
	{
		return __thiz.callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getDbm()
	{
		return __thiz.callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellSignalStrengthCdma : public __jni_impl::android::telephony::CellSignalStrengthCdma
	{
	public:
		CellSignalStrengthCdma(QAndroidJniObject obj) { __thiz = obj; }
		CellSignalStrengthCdma()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLSIGNALSTRENGTHCDMA

