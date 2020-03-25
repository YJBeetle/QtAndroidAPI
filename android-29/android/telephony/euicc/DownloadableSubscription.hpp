#pragma once

#ifndef ANDROID_TELEPHONY_EUICC_DOWNLOADABLESUBSCRIPTION
#define ANDROID_TELEPHONY_EUICC_DOWNLOADABLESUBSCRIPTION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony::euicc
{
	class DownloadableSubscription : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getEncodedActivationCode();
		static QAndroidJniObject forActivationCode(jstring arg0);
		QAndroidJniObject getConfirmationCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony::euicc

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::telephony::euicc
{
	// Fields
	QAndroidJniObject DownloadableSubscription::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.DownloadableSubscription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void DownloadableSubscription::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.euicc.DownloadableSubscription",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DownloadableSubscription::getEncodedActivationCode()
	{
		return __thiz.callObjectMethod(
			"getEncodedActivationCode",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject DownloadableSubscription::forActivationCode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.euicc.DownloadableSubscription",
			"forActivationCode",
			"(Ljava/lang/String;)Landroid/telephony/euicc/DownloadableSubscription;",
			arg0);
	}
	QAndroidJniObject DownloadableSubscription::getConfirmationCode()
	{
		return __thiz.callObjectMethod(
			"getConfirmationCode",
			"()Ljava/lang/String;");
	}
	jint DownloadableSubscription::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void DownloadableSubscription::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::telephony::euicc

namespace android::telephony::euicc
{
	class DownloadableSubscription : public __jni_impl::android::telephony::euicc::DownloadableSubscription
	{
	public:
		DownloadableSubscription(QAndroidJniObject obj) { __thiz = obj; }
		DownloadableSubscription()
		{
			__constructor();
		}
	};
} // namespace android::telephony::euicc

#endif // ANDROID_TELEPHONY_EUICC_DOWNLOADABLESUBSCRIPTION

