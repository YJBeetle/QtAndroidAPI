#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./SubscriptSpan.hpp"

namespace android::text::style
{
	// Fields
	
	SubscriptSpan::SubscriptSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SubscriptSpan::SubscriptSpan()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.SubscriptSpan",
			"()V"
		);
	}
	SubscriptSpan::SubscriptSpan(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.SubscriptSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint SubscriptSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SubscriptSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void SubscriptSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void SubscriptSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void SubscriptSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

