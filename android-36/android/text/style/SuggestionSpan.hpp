#pragma once

#include "../../../JArray.hpp"
#include "../../content/Context.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./SuggestionSpan.def.hpp"

namespace android::text::style
{
	// Fields
	inline JString SuggestionSpan::ACTION_SUGGESTION_PICKED()
	{
		return getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"ACTION_SUGGESTION_PICKED",
			"Ljava/lang/String;"
		);
	}
	inline JObject SuggestionSpan::CREATOR()
	{
		return getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SuggestionSpan::FLAG_AUTO_CORRECTION()
	{
		return getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"FLAG_AUTO_CORRECTION"
		);
	}
	inline jint SuggestionSpan::FLAG_EASY_CORRECT()
	{
		return getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"FLAG_EASY_CORRECT"
		);
	}
	inline jint SuggestionSpan::FLAG_GRAMMAR_ERROR()
	{
		return getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"FLAG_GRAMMAR_ERROR"
		);
	}
	inline jint SuggestionSpan::FLAG_MISSPELLED()
	{
		return getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"FLAG_MISSPELLED"
		);
	}
	inline jint SuggestionSpan::SUGGESTIONS_MAX_SIZE()
	{
		return getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"SUGGESTIONS_MAX_SIZE"
		);
	}
	inline JString SuggestionSpan::SUGGESTION_SPAN_PICKED_AFTER()
	{
		return getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"SUGGESTION_SPAN_PICKED_AFTER",
			"Ljava/lang/String;"
		);
	}
	inline JString SuggestionSpan::SUGGESTION_SPAN_PICKED_BEFORE()
	{
		return getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"SUGGESTION_SPAN_PICKED_BEFORE",
			"Ljava/lang/String;"
		);
	}
	inline JString SuggestionSpan::SUGGESTION_SPAN_PICKED_HASHCODE()
	{
		return getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"SUGGESTION_SPAN_PICKED_HASHCODE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline SuggestionSpan::SuggestionSpan(android::os::Parcel arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.SuggestionSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline SuggestionSpan::SuggestionSpan(android::content::Context arg0, JArray arg1, jint arg2)
		: android::text::style::CharacterStyle(
			"android.text.style.SuggestionSpan",
			"(Landroid/content/Context;[Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2
		) {}
	inline SuggestionSpan::SuggestionSpan(java::util::Locale arg0, JArray arg1, jint arg2)
		: android::text::style::CharacterStyle(
			"android.text.style.SuggestionSpan",
			"(Ljava/util/Locale;[Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2
		) {}
	inline SuggestionSpan::SuggestionSpan(android::content::Context arg0, java::util::Locale arg1, JArray arg2, jint arg3, JClass arg4)
		: android::text::style::CharacterStyle(
			"android.text.style.SuggestionSpan",
			"(Landroid/content/Context;Ljava/util/Locale;[Ljava/lang/String;ILjava/lang/Class;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3,
			arg4.object<jclass>()
		) {}
	
	// Methods
	inline jint SuggestionSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SuggestionSpan::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SuggestionSpan::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline JString SuggestionSpan::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::Locale SuggestionSpan::getLocaleObject() const
	{
		return callObjectMethod(
			"getLocaleObject",
			"()Ljava/util/Locale;"
		);
	}
	inline jint SuggestionSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline JArray SuggestionSpan::getSuggestions() const
	{
		return callObjectMethod(
			"getSuggestions",
			"()[Ljava/lang/String;"
		);
	}
	inline jint SuggestionSpan::getUnderlineColor() const
	{
		return callMethod<jint>(
			"getUnderlineColor",
			"()I"
		);
	}
	inline jint SuggestionSpan::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void SuggestionSpan::setFlags(jint arg0) const
	{
		callMethod<void>(
			"setFlags",
			"(I)V",
			arg0
		);
	}
	inline void SuggestionSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void SuggestionSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
