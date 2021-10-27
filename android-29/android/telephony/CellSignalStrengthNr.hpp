#pragma once

#ifndef ANDROID_TELEPHONY_CELLSIGNALSTRENGTHNR
#define ANDROID_TELEPHONY_CELLSIGNALSTRENGTHNR

#include "../../__JniBaseClass.hpp"
#include "CellSignalStrength.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellSignalStrengthNr : public __jni_impl::android::telephony::CellSignalStrength
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAsuLevel();
		jint getCsiRsrp();
		jint getCsiRsrq();
		jint getCsiSinr();
		jint getDbm();
		jint getLevel();
		jint getSsRsrp();
		jint getSsRsrq();
		jint getSsSinr();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellSignalStrengthNr::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellSignalStrengthNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellSignalStrengthNr::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellSignalStrengthNr",
			"(V)V");
	}
	
	// Methods
	jint CellSignalStrengthNr::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthNr::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellSignalStrengthNr::getAsuLevel()
	{
		return __thiz.callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getCsiRsrp()
	{
		return __thiz.callMethod<jint>(
			"getCsiRsrp",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getCsiRsrq()
	{
		return __thiz.callMethod<jint>(
			"getCsiRsrq",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getCsiSinr()
	{
		return __thiz.callMethod<jint>(
			"getCsiSinr",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getDbm()
	{
		return __thiz.callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getLevel()
	{
		return __thiz.callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getSsRsrp()
	{
		return __thiz.callMethod<jint>(
			"getSsRsrp",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getSsRsrq()
	{
		return __thiz.callMethod<jint>(
			"getSsRsrq",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getSsSinr()
	{
		return __thiz.callMethod<jint>(
			"getSsSinr",
			"()I"
		);
	}
	jint CellSignalStrengthNr::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellSignalStrengthNr::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellSignalStrengthNr::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellSignalStrengthNr : public __jni_impl::android::telephony::CellSignalStrengthNr
	{
	public:
		CellSignalStrengthNr(QAndroidJniObject obj) { __thiz = obj; }
		CellSignalStrengthNr()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLSIGNALSTRENGTHNR

