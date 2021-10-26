#pragma once

#ifndef ANDROID_TELEPHONY_CELLSIGNALSTRENGTHLTE
#define ANDROID_TELEPHONY_CELLSIGNALSTRENGTHLTE

#include "../../__JniBaseClass.hpp"
#include "CellSignalStrength.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellSignalStrengthLte : public __jni_impl::android::telephony::CellSignalStrength
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
		jint getRssi();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getAsuLevel();
		jint getRsrq();
		jint getRssnr();
		jint getRsrp();
		jint getCqi();
		jint getDbm();
		jint getTimingAdvance();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellSignalStrengthLte::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellSignalStrengthLte",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellSignalStrengthLte::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellSignalStrengthLte",
			"(V)V");
	}
	
	// Methods
	jboolean CellSignalStrengthLte::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CellSignalStrengthLte::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellSignalStrengthLte::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getLevel()
	{
		return __thiz.callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRssi()
	{
		return __thiz.callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	jint CellSignalStrengthLte::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CellSignalStrengthLte::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint CellSignalStrengthLte::getAsuLevel()
	{
		return __thiz.callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRsrq()
	{
		return __thiz.callMethod<jint>(
			"getRsrq",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRssnr()
	{
		return __thiz.callMethod<jint>(
			"getRssnr",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRsrp()
	{
		return __thiz.callMethod<jint>(
			"getRsrp",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getCqi()
	{
		return __thiz.callMethod<jint>(
			"getCqi",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getDbm()
	{
		return __thiz.callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getTimingAdvance()
	{
		return __thiz.callMethod<jint>(
			"getTimingAdvance",
			"()I"
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellSignalStrengthLte : public __jni_impl::android::telephony::CellSignalStrengthLte
	{
	public:
		CellSignalStrengthLte(QAndroidJniObject obj) { __thiz = obj; }
		CellSignalStrengthLte()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLSIGNALSTRENGTHLTE

