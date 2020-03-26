#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_DOWNLOADREQUEST
#define ANDROID_TELEPHONY_MBMS_DOWNLOADREQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::telephony::mbms
{
	class DownloadRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jbyteArray toByteArray();
		jstring getFileServiceId();
		QAndroidJniObject getSourceUri();
		QAndroidJniObject getDestinationUri();
		static jint getMaxAppIntentSize();
		static jint getMaxDestinationUriSize();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getSubscriptionId();
	};
} // namespace __jni_impl::android::telephony::mbms

#include "../../os/Parcel.hpp"
#include "../../net/Uri.hpp"

namespace __jni_impl::android::telephony::mbms
{
	// Fields
	QAndroidJniObject DownloadRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.mbms.DownloadRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void DownloadRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.DownloadRequest",
			"(V)V");
	}
	
	// Methods
	jboolean DownloadRequest::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DownloadRequest::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray DownloadRequest::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jstring DownloadRequest::getFileServiceId()
	{
		return __thiz.callObjectMethod(
			"getFileServiceId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DownloadRequest::getSourceUri()
	{
		return __thiz.callObjectMethod(
			"getSourceUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject DownloadRequest::getDestinationUri()
	{
		return __thiz.callObjectMethod(
			"getDestinationUri",
			"()Landroid/net/Uri;"
		);
	}
	jint DownloadRequest::getMaxAppIntentSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.mbms.DownloadRequest",
			"getMaxAppIntentSize",
			"()I"
		);
	}
	jint DownloadRequest::getMaxDestinationUriSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.mbms.DownloadRequest",
			"getMaxDestinationUriSize",
			"()I"
		);
	}
	jint DownloadRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DownloadRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint DownloadRequest::getSubscriptionId()
	{
		return __thiz.callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class DownloadRequest : public __jni_impl::android::telephony::mbms::DownloadRequest
	{
	public:
		DownloadRequest(QAndroidJniObject obj) { __thiz = obj; }
		DownloadRequest()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_DOWNLOADREQUEST

