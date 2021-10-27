#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ContentCaptureCondition : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_IS_REGEX();
		
		// Constructors
		void __constructor(__jni_impl::android::content::LocusId arg0, jint arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getFlags();
		QAndroidJniObject getLocusId();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::contentcapture

#include "../../content/LocusId.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::contentcapture
{
	// Fields
	QAndroidJniObject ContentCaptureCondition::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.contentcapture.ContentCaptureCondition",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ContentCaptureCondition::FLAG_IS_REGEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.contentcapture.ContentCaptureCondition",
			"FLAG_IS_REGEX"
		);
	}
	
	// Constructors
	void ContentCaptureCondition::__constructor(__jni_impl::android::content::LocusId arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.contentcapture.ContentCaptureCondition",
			"(Landroid/content/LocusId;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint ContentCaptureCondition::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ContentCaptureCondition::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ContentCaptureCondition::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	QAndroidJniObject ContentCaptureCondition::getLocusId()
	{
		return __thiz.callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	jint ContentCaptureCondition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ContentCaptureCondition::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ContentCaptureCondition::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ContentCaptureCondition : public __jni_impl::android::view::contentcapture::ContentCaptureCondition
	{
	public:
		ContentCaptureCondition(QAndroidJniObject obj) { __thiz = obj; }
		ContentCaptureCondition(__jni_impl::android::content::LocusId arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::contentcapture

