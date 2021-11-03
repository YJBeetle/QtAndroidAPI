#include "../../../JArray.hpp"
#include "../../content/Context.hpp"
#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./SuggestionSpan.hpp"

namespace android::text::style
{
	// Fields
	JString SuggestionSpan::ACTION_SUGGESTION_PICKED()
	{
		return getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"ACTION_SUGGESTION_PICKED",
			"Ljava/lang/String;"
		);
	}
	JObject SuggestionSpan::CREATOR()
	{
		return getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SuggestionSpan::FLAG_AUTO_CORRECTION()
	{
		return getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"FLAG_AUTO_CORRECTION"
		);
	}
	jint SuggestionSpan::FLAG_EASY_CORRECT()
	{
		return getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"FLAG_EASY_CORRECT"
		);
	}
	jint SuggestionSpan::FLAG_MISSPELLED()
	{
		return getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"FLAG_MISSPELLED"
		);
	}
	jint SuggestionSpan::SUGGESTIONS_MAX_SIZE()
	{
		return getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"SUGGESTIONS_MAX_SIZE"
		);
	}
	JString SuggestionSpan::SUGGESTION_SPAN_PICKED_AFTER()
	{
		return getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"SUGGESTION_SPAN_PICKED_AFTER",
			"Ljava/lang/String;"
		);
	}
	JString SuggestionSpan::SUGGESTION_SPAN_PICKED_BEFORE()
	{
		return getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"SUGGESTION_SPAN_PICKED_BEFORE",
			"Ljava/lang/String;"
		);
	}
	JString SuggestionSpan::SUGGESTION_SPAN_PICKED_HASHCODE()
	{
		return getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"SUGGESTION_SPAN_PICKED_HASHCODE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	SuggestionSpan::SuggestionSpan(QJniObject obj) : android::text::style::CharacterStyle(obj) {}
	
	// Constructors
	SuggestionSpan::SuggestionSpan(android::os::Parcel arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.SuggestionSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	SuggestionSpan::SuggestionSpan(android::content::Context arg0, JArray arg1, jint arg2)
		: android::text::style::CharacterStyle(
			"android.text.style.SuggestionSpan",
			"(Landroid/content/Context;[Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2
		) {}
	SuggestionSpan::SuggestionSpan(java::util::Locale arg0, JArray arg1, jint arg2)
		: android::text::style::CharacterStyle(
			"android.text.style.SuggestionSpan",
			"(Ljava/util/Locale;[Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2
		) {}
	SuggestionSpan::SuggestionSpan(android::content::Context arg0, java::util::Locale arg1, JArray arg2, jint arg3, JClass arg4)
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
	jint SuggestionSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SuggestionSpan::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint SuggestionSpan::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	JString SuggestionSpan::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		);
	}
	java::util::Locale SuggestionSpan::getLocaleObject()
	{
		return callObjectMethod(
			"getLocaleObject",
			"()Ljava/util/Locale;"
		);
	}
	jint SuggestionSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	JArray SuggestionSpan::getSuggestions()
	{
		return callObjectMethod(
			"getSuggestions",
			"()[Ljava/lang/String;"
		);
	}
	jint SuggestionSpan::getUnderlineColor()
	{
		return callMethod<jint>(
			"getUnderlineColor",
			"()I"
		);
	}
	jint SuggestionSpan::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void SuggestionSpan::setFlags(jint arg0)
	{
		callMethod<void>(
			"setFlags",
			"(I)V",
			arg0
		);
	}
	void SuggestionSpan::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void SuggestionSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

