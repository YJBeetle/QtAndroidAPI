#pragma once

#ifndef ANDROID_TELEPHONY_SIGNALSTRENGTH
#define ANDROID_TELEPHONY_SIGNALSTRENGTH

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class SignalStrength : public __JniBaseClass
	{
	public:
		// Fields
		static jint INVALID();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getLevel();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getCellSignalStrengths();
		QAndroidJniObject getCellSignalStrengths(jclass arg0);
		jint getGsmSignalStrength();
		jint getGsmBitErrorRate();
		jint getCdmaDbm();
		jint getCdmaEcio();
		jint getEvdoDbm();
		jint getEvdoEcio();
		jint getEvdoSnr();
		jboolean isGsm();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	jint SignalStrength::INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SignalStrength",
			"INVALID");
	}
	
	// Constructors
	void SignalStrength::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SignalStrength",
			"(V)V");
	}
	
	// Methods
	jboolean SignalStrength::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject SignalStrength::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint SignalStrength::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint SignalStrength::getLevel()
	{
		return __thiz.callMethod<jint>(
			"getLevel",
			"()I");
	}
	jint SignalStrength::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SignalStrength::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SignalStrength::getCellSignalStrengths()
	{
		return __thiz.callObjectMethod(
			"getCellSignalStrengths",
			"()Ljava/util/List;");
	}
	QAndroidJniObject SignalStrength::getCellSignalStrengths(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getCellSignalStrengths",
			"(Ljava/lang/Class;)Ljava/util/List;",
			arg0);
	}
	jint SignalStrength::getGsmSignalStrength()
	{
		return __thiz.callMethod<jint>(
			"getGsmSignalStrength",
			"()I");
	}
	jint SignalStrength::getGsmBitErrorRate()
	{
		return __thiz.callMethod<jint>(
			"getGsmBitErrorRate",
			"()I");
	}
	jint SignalStrength::getCdmaDbm()
	{
		return __thiz.callMethod<jint>(
			"getCdmaDbm",
			"()I");
	}
	jint SignalStrength::getCdmaEcio()
	{
		return __thiz.callMethod<jint>(
			"getCdmaEcio",
			"()I");
	}
	jint SignalStrength::getEvdoDbm()
	{
		return __thiz.callMethod<jint>(
			"getEvdoDbm",
			"()I");
	}
	jint SignalStrength::getEvdoEcio()
	{
		return __thiz.callMethod<jint>(
			"getEvdoEcio",
			"()I");
	}
	jint SignalStrength::getEvdoSnr()
	{
		return __thiz.callMethod<jint>(
			"getEvdoSnr",
			"()I");
	}
	jboolean SignalStrength::isGsm()
	{
		return __thiz.callMethod<jboolean>(
			"isGsm",
			"()Z");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class SignalStrength : public __jni_impl::android::telephony::SignalStrength
	{
	public:
		SignalStrength(QAndroidJniObject obj) { __thiz = obj; }
		SignalStrength()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_SIGNALSTRENGTH

