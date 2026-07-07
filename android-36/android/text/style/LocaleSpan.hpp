#pragma once

#include "../../os/LocaleList.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./LocaleSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline LocaleSpan::LocaleSpan(android::os::LocaleList arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.LocaleSpan",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		) {}
	inline LocaleSpan::LocaleSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.LocaleSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline LocaleSpan::LocaleSpan(java::util::Locale arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.LocaleSpan",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint LocaleSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline java::util::Locale LocaleSpan::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	inline android::os::LocaleList LocaleSpan::getLocales() const
	{
		return callObjectMethod(
			"getLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	inline jint LocaleSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline JString LocaleSpan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void LocaleSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void LocaleSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void LocaleSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

// Base class headers
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
