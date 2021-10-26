#pragma once

#ifndef ANDROID_TELEPHONY_EUICC_EUICCINFO
#define ANDROID_TELEPHONY_EUICC_EUICCINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony::euicc
{
	class EuiccInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jstring getOsVersion();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony::euicc

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::telephony::euicc
{
	// Fields
	QAndroidJniObject EuiccInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void EuiccInfo::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.euicc.EuiccInfo",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void EuiccInfo::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.euicc.EuiccInfo",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring EuiccInfo::getOsVersion()
	{
		return __thiz.callObjectMethod(
			"getOsVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint EuiccInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void EuiccInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telephony::euicc

namespace android::telephony::euicc
{
	class EuiccInfo : public __jni_impl::android::telephony::euicc::EuiccInfo
	{
	public:
		EuiccInfo(QAndroidJniObject obj) { __thiz = obj; }
		EuiccInfo(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::telephony::euicc

#endif // ANDROID_TELEPHONY_EUICC_EUICCINFO

