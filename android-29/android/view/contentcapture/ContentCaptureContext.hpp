#pragma once

#ifndef ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURECONTEXT
#define ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURECONTEXT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::contentcapture
{
	class ContentCaptureContext_Builder;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content
{
	class LocusId;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::contentcapture
{
	class ContentCaptureContext : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getExtras();
		QAndroidJniObject getLocusId();
		static QAndroidJniObject forLocusId(jstring arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::contentcapture

#include "ContentCaptureContext_Builder.hpp"
#include "../../os/Bundle.hpp"
#include "../../content/LocusId.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::contentcapture
{
	// Fields
	QAndroidJniObject ContentCaptureContext::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.contentcapture.ContentCaptureContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void ContentCaptureContext::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.contentcapture.ContentCaptureContext",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ContentCaptureContext::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ContentCaptureContext::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject ContentCaptureContext::getLocusId()
	{
		return __thiz.callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;");
	}
	QAndroidJniObject ContentCaptureContext::forLocusId(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.contentcapture.ContentCaptureContext",
			"forLocusId",
			"(Ljava/lang/String;)Landroid/view/contentcapture/ContentCaptureContext;",
			arg0);
	}
	jint ContentCaptureContext::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ContentCaptureContext::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view::contentcapture

namespace android::view::contentcapture
{
	class ContentCaptureContext : public __jni_impl::android::view::contentcapture::ContentCaptureContext
	{
	public:
		ContentCaptureContext(QAndroidJniObject obj) { __thiz = obj; }
		ContentCaptureContext()
		{
			__constructor();
		}
	};
} // namespace android::view::contentcapture

#endif // ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURECONTEXT

