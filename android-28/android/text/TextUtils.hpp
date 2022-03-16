#pragma once

#include "../../JCharArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./TextPaint.def.hpp"
#include "./TextUtils_TruncateAt.def.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.def.hpp"
#include "../../java/util/regex/Pattern.def.hpp"
#include "./TextUtils.def.hpp"

namespace android::text
{
	// Fields
	inline jint TextUtils::CAP_MODE_CHARACTERS()
	{
		return getStaticField<jint>(
			"android.text.TextUtils",
			"CAP_MODE_CHARACTERS"
		);
	}
	inline jint TextUtils::CAP_MODE_SENTENCES()
	{
		return getStaticField<jint>(
			"android.text.TextUtils",
			"CAP_MODE_SENTENCES"
		);
	}
	inline jint TextUtils::CAP_MODE_WORDS()
	{
		return getStaticField<jint>(
			"android.text.TextUtils",
			"CAP_MODE_WORDS"
		);
	}
	inline JObject TextUtils::CHAR_SEQUENCE_CREATOR()
	{
		return getStaticObjectField(
			"android.text.TextUtils",
			"CHAR_SEQUENCE_CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString TextUtils::commaEllipsize(JString arg0, android::text::TextPaint arg1, jfloat arg2, JString arg3, JString arg4)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"commaEllipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLjava/lang/String;Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object<jstring>(),
			arg4.object<jstring>()
		);
	}
	inline JString TextUtils::concat(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"concat",
			"([Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jarray>()
		);
	}
	inline void TextUtils::copySpansFrom(JObject arg0, jint arg1, jint arg2, JClass arg3, JObject arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.text.TextUtils",
			"copySpansFrom",
			"(Landroid/text/Spanned;IILjava/lang/Class;Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jclass>(),
			arg4.object(),
			arg5
		);
	}
	inline void TextUtils::dumpSpans(JString arg0, JObject arg1, JString arg2)
	{
		callStaticMethod<void>(
			"android.text.TextUtils",
			"dumpSpans",
			"(Ljava/lang/CharSequence;Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline JString TextUtils::ellipsize(JString arg0, android::text::TextPaint arg1, jfloat arg2, android::text::TextUtils_TruncateAt arg3)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"ellipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLandroid/text/TextUtils$TruncateAt;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline JString TextUtils::ellipsize(JString arg0, android::text::TextPaint arg1, jfloat arg2, android::text::TextUtils_TruncateAt arg3, jboolean arg4, JObject arg5)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"ellipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLandroid/text/TextUtils$TruncateAt;ZLandroid/text/TextUtils$EllipsizeCallback;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5.object()
		);
	}
	inline jboolean TextUtils::equals(JString arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"equals",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString TextUtils::expandTemplate(JString arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"expandTemplate",
			"(Ljava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline jint TextUtils::getCapsMode(JString arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"getCapsMode",
			"(Ljava/lang/CharSequence;II)I",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void TextUtils::getChars(JString arg0, jint arg1, jint arg2, JCharArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.text.TextUtils",
			"getChars",
			"(Ljava/lang/CharSequence;II[CI)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object<jcharArray>(),
			arg4
		);
	}
	inline jint TextUtils::getLayoutDirectionFromLocale(java::util::Locale arg0)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"getLayoutDirectionFromLocale",
			"(Ljava/util/Locale;)I",
			arg0.object()
		);
	}
	inline jint TextUtils::getOffsetAfter(JString arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"getOffsetAfter",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint TextUtils::getOffsetBefore(JString arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"getOffsetBefore",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString TextUtils::getReverse(JString arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"getReverse",
			"(Ljava/lang/CharSequence;II)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jint TextUtils::getTrimmedLength(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"getTrimmedLength",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	inline JString TextUtils::htmlEncode(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"htmlEncode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jint TextUtils::indexOf(JString arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;C)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint TextUtils::indexOf(JString arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint TextUtils::indexOf(JString arg0, jchar arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;CI)I",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jint TextUtils::indexOf(JString arg0, JString arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jint TextUtils::indexOf(JString arg0, jchar arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;CII)I",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint TextUtils::indexOf(JString arg0, JString arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;II)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	inline jboolean TextUtils::isDigitsOnly(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isDigitsOnly",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean TextUtils::isEmpty(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isEmpty",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean TextUtils::isGraphic(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isGraphic",
			"(C)Z",
			arg0
		);
	}
	inline jboolean TextUtils::isGraphic(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isGraphic",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	inline JString TextUtils::join(JString arg0, JObjectArray arg1)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"join",
			"(Ljava/lang/CharSequence;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline JString TextUtils::join(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"join",
			"(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint TextUtils::lastIndexOf(JString arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;C)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint TextUtils::lastIndexOf(JString arg0, jchar arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;CI)I",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jint TextUtils::lastIndexOf(JString arg0, jchar arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;CII)I",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline JString TextUtils::listEllipsize(android::content::Context arg0, JObject arg1, JString arg2, android::text::TextPaint arg3, jfloat arg4, jint arg5)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"listEllipsize",
			"(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;Landroid/text/TextPaint;FI)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4,
			arg5
		);
	}
	inline jboolean TextUtils::regionMatches(JString arg0, jint arg1, JString arg2, jint arg3, jint arg4)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"regionMatches",
			"(Ljava/lang/CharSequence;ILjava/lang/CharSequence;II)Z",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>(),
			arg3,
			arg4
		);
	}
	inline JString TextUtils::replace(JString arg0, JArray arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"replace",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object<jarray>()
		);
	}
	inline JArray TextUtils::split(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"split",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JArray TextUtils::split(JString arg0, java::util::regex::Pattern arg1)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"split",
			"(Ljava/lang/String;Ljava/util/regex/Pattern;)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString TextUtils::stringOrSpannedString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"stringOrSpannedString",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	inline JString TextUtils::substring(JString arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"substring",
			"(Ljava/lang/CharSequence;II)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void TextUtils::writeToParcel(JString arg0, android::os::Parcel arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.text.TextUtils",
			"writeToParcel",
			"(Ljava/lang/CharSequence;Landroid/os/Parcel;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::text

// Base class headers

