#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "../../../java/util/Locale.hpp"
#include "./LocaleSpan.hpp"

namespace android::text::style
{
	// Fields
	
	LocaleSpan::LocaleSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LocaleSpan::LocaleSpan(android::os::LocaleList arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LocaleSpan",
			"(Landroid/os/LocaleList;)V",
			arg0.__jniObject().object()
		);
	}
	LocaleSpan::LocaleSpan(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LocaleSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	LocaleSpan::LocaleSpan(java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LocaleSpan",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint LocaleSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject LocaleSpan::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject LocaleSpan::getLocales()
	{
		return __thiz.callObjectMethod(
			"getLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint LocaleSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void LocaleSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void LocaleSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void LocaleSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

