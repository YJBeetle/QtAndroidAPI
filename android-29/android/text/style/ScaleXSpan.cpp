#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./ScaleXSpan.hpp"

namespace android::text::style
{
	// Fields
	
	ScaleXSpan::ScaleXSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ScaleXSpan::ScaleXSpan(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ScaleXSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	ScaleXSpan::ScaleXSpan(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ScaleXSpan",
			"(F)V",
			arg0
		);
	}
	
	// Methods
	jint ScaleXSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat ScaleXSpan::getScaleX()
	{
		return __thiz.callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	jint ScaleXSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void ScaleXSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void ScaleXSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void ScaleXSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

