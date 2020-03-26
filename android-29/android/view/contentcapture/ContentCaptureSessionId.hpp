#pragma once

#ifndef ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURESESSIONID
#define ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURESESSIONID

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::contentcapture
{
	class ContentCaptureSessionId : public __JniBaseClass
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
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::contentcapture

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::contentcapture
{
	// Fields
	QAndroidJniObject ContentCaptureSessionId::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.contentcapture.ContentCaptureSessionId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ContentCaptureSessionId::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.contentcapture.ContentCaptureSessionId",
			"(V)V");
	}
	
	// Methods
	jboolean ContentCaptureSessionId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ContentCaptureSessionId::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContentCaptureSessionId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint ContentCaptureSessionId::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ContentCaptureSessionId::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::contentcapture

namespace android::view::contentcapture
{
	class ContentCaptureSessionId : public __jni_impl::android::view::contentcapture::ContentCaptureSessionId
	{
	public:
		ContentCaptureSessionId(QAndroidJniObject obj) { __thiz = obj; }
		ContentCaptureSessionId()
		{
			__constructor();
		}
	};
} // namespace android::view::contentcapture

#endif // ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURESESSIONID

