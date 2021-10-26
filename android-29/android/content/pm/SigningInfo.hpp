#pragma once

#ifndef ANDROID_CONTENT_PM_SIGNINGINFO
#define ANDROID_CONTENT_PM_SIGNINGINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class SigningInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::SigningInfo arg0);
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jboolean hasMultipleSigners();
		jboolean hasPastSigningCertificates();
		jarray getSigningCertificateHistory();
		jarray getApkContentsSigners();
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject SigningInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.SigningInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void SigningInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.SigningInfo",
			"()V"
		);
	}
	void SigningInfo::__constructor(__jni_impl::android::content::pm::SigningInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.SigningInfo",
			"(Landroid/content/pm/SigningInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint SigningInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SigningInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean SigningInfo::hasMultipleSigners()
	{
		return __thiz.callMethod<jboolean>(
			"hasMultipleSigners",
			"()Z"
		);
	}
	jboolean SigningInfo::hasPastSigningCertificates()
	{
		return __thiz.callMethod<jboolean>(
			"hasPastSigningCertificates",
			"()Z"
		);
	}
	jarray SigningInfo::getSigningCertificateHistory()
	{
		return __thiz.callObjectMethod(
			"getSigningCertificateHistory",
			"()[Landroid/content/pm/Signature;"
		).object<jarray>();
	}
	jarray SigningInfo::getApkContentsSigners()
	{
		return __thiz.callObjectMethod(
			"getApkContentsSigners",
			"()[Landroid/content/pm/Signature;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class SigningInfo : public __jni_impl::android::content::pm::SigningInfo
	{
	public:
		SigningInfo(QAndroidJniObject obj) { __thiz = obj; }
		SigningInfo()
		{
			__constructor();
		}
		SigningInfo(__jni_impl::android::content::pm::SigningInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_SIGNINGINFO

