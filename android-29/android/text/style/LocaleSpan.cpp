#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "../../../java/util/Locale.hpp"
#include "./LocaleSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	LocaleSpan::LocaleSpan(QJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
	
	// Constructors
	LocaleSpan::LocaleSpan(android::os::LocaleList arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.LocaleSpan",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		) {}
	LocaleSpan::LocaleSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.LocaleSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	LocaleSpan::LocaleSpan(java::util::Locale arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.LocaleSpan",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	jint LocaleSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	java::util::Locale LocaleSpan::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	android::os::LocaleList LocaleSpan::getLocales()
	{
		return callObjectMethod(
			"getLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint LocaleSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void LocaleSpan::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void LocaleSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void LocaleSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

