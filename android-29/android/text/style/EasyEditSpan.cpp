#include "../../app/PendingIntent.hpp"
#include "../../os/Parcel.hpp"
#include "./EasyEditSpan.hpp"

namespace android::text::style
{
	// Fields
	jstring EasyEditSpan::EXTRA_TEXT_CHANGED_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.EasyEditSpan",
			"EXTRA_TEXT_CHANGED_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint EasyEditSpan::TEXT_DELETED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.EasyEditSpan",
			"TEXT_DELETED"
		);
	}
	jint EasyEditSpan::TEXT_MODIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.EasyEditSpan",
			"TEXT_MODIFIED"
		);
	}
	
	EasyEditSpan::EasyEditSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EasyEditSpan::EasyEditSpan()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.EasyEditSpan",
			"()V"
		);
	}
	EasyEditSpan::EasyEditSpan(android::app::PendingIntent &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.EasyEditSpan",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	EasyEditSpan::EasyEditSpan(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.EasyEditSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint EasyEditSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint EasyEditSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void EasyEditSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

