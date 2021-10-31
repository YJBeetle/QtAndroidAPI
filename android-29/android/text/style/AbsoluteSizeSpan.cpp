#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./AbsoluteSizeSpan.hpp"

namespace android::text::style
{
	// Fields
	
	AbsoluteSizeSpan::AbsoluteSizeSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbsoluteSizeSpan::AbsoluteSizeSpan(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.AbsoluteSizeSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	AbsoluteSizeSpan::AbsoluteSizeSpan(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.AbsoluteSizeSpan",
			"(I)V",
			arg0
		);
	}
	AbsoluteSizeSpan::AbsoluteSizeSpan(jint arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.AbsoluteSizeSpan",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint AbsoluteSizeSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AbsoluteSizeSpan::getDip()
	{
		return __thiz.callMethod<jboolean>(
			"getDip",
			"()Z"
		);
	}
	jint AbsoluteSizeSpan::getSize()
	{
		return __thiz.callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	jint AbsoluteSizeSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void AbsoluteSizeSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsoluteSizeSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsoluteSizeSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

