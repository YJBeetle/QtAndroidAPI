#include "../../content/LocusId.hpp"
#include "../../os/Parcel.hpp"
#include "./ContentCaptureCondition.hpp"

namespace android::view::contentcapture
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
	
	ContentCaptureCondition::ContentCaptureCondition(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContentCaptureCondition::ContentCaptureCondition(android::content::LocusId &arg0, jint &arg1)
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
	void ContentCaptureCondition::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::contentcapture

