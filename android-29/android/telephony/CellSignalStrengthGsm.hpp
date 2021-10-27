#pragma once

#include "../../__JniBaseClass.hpp"
#include "CellSignalStrength.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellSignalStrengthGsm : public __jni_impl::android::telephony::CellSignalStrength
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
		jint getBitErrorRate();
		jint getDbm();
		jint getLevel();
		jint getTimingAdvance();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellSignalStrengthGsm::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellSignalStrengthGsm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellSignalStrengthGsm::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellSignalStrengthGsm",
			"(V)V");
	}
	
	// Methods
	jint CellSignalStrengthGsm::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthGsm::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellSignalStrengthGsm::getAsuLevel()
	{
		return __thiz.callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getBitErrorRate()
	{
		return __thiz.callMethod<jint>(
			"getBitErrorRate",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getDbm()
	{
		return __thiz.callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getLevel()
	{
		return __thiz.callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getTimingAdvance()
	{
		return __thiz.callMethod<jint>(
			"getTimingAdvance",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellSignalStrengthGsm::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellSignalStrengthGsm::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class CellSignalStrengthGsm : public __jni_impl::android::telephony::CellSignalStrengthGsm
	{
	public:
		CellSignalStrengthGsm(QAndroidJniObject obj) { __thiz = obj; }
		CellSignalStrengthGsm()
		{
			__constructor();
		}
	};
} // namespace android::telephony

