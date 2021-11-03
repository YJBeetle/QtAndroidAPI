#include "../content/Context.hpp"
#include "../os/Parcel.hpp"
#include "./TextPaint.hpp"
#include "./TextUtils_TruncateAt.hpp"
#include "../../java/util/Locale.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./TextUtils.hpp"

namespace android::text
{
	// Fields
	jint TextUtils::CAP_MODE_CHARACTERS()
	{
		return getStaticField<jint>(
			"android.text.TextUtils",
			"CAP_MODE_CHARACTERS"
		);
	}
	jint TextUtils::CAP_MODE_SENTENCES()
	{
		return getStaticField<jint>(
			"android.text.TextUtils",
			"CAP_MODE_SENTENCES"
		);
	}
	jint TextUtils::CAP_MODE_WORDS()
	{
		return getStaticField<jint>(
			"android.text.TextUtils",
			"CAP_MODE_WORDS"
		);
	}
	JObject TextUtils::CHAR_SEQUENCE_CREATOR()
	{
		return getStaticObjectField(
			"android.text.TextUtils",
			"CHAR_SEQUENCE_CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextUtils::TextUtils(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring TextUtils::commaEllipsize(jstring arg0, android::text::TextPaint arg1, jfloat arg2, jstring arg3, jstring arg4)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"commaEllipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLjava/lang/String;Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4
		).object<jstring>();
	}
	jstring TextUtils::concat(jarray arg0)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"concat",
			"([Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	void TextUtils::copySpansFrom(JObject arg0, jint arg1, jint arg2, jclass arg3, JObject arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.text.TextUtils",
			"copySpansFrom",
			"(Landroid/text/Spanned;IILjava/lang/Class;Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
	void TextUtils::dumpSpans(jstring arg0, JObject arg1, jstring arg2)
	{
		callStaticMethod<void>(
			"android.text.TextUtils",
			"dumpSpans",
			"(Ljava/lang/CharSequence;Landroid/util/Printer;Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	jstring TextUtils::ellipsize(jstring arg0, android::text::TextPaint arg1, jfloat arg2, android::text::TextUtils_TruncateAt arg3)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"ellipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLandroid/text/TextUtils$TruncateAt;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		).object<jstring>();
	}
	jstring TextUtils::ellipsize(jstring arg0, android::text::TextPaint arg1, jfloat arg2, android::text::TextUtils_TruncateAt arg3, jboolean arg4, JObject arg5)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"ellipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLandroid/text/TextUtils$TruncateAt;ZLandroid/text/TextUtils$EllipsizeCallback;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5.object()
		).object<jstring>();
	}
	jboolean TextUtils::equals(jstring arg0, jstring arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"equals",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z",
			arg0,
			arg1
		);
	}
	jstring TextUtils::expandTemplate(jstring arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"expandTemplate",
			"(Ljava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jint TextUtils::getCapsMode(jstring arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"getCapsMode",
			"(Ljava/lang/CharSequence;II)I",
			arg0,
			arg1,
			arg2
		);
	}
	void TextUtils::getChars(jstring arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.text.TextUtils",
			"getChars",
			"(Ljava/lang/CharSequence;II[CI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint TextUtils::getLayoutDirectionFromLocale(java::util::Locale arg0)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"getLayoutDirectionFromLocale",
			"(Ljava/util/Locale;)I",
			arg0.object()
		);
	}
	jint TextUtils::getOffsetAfter(jstring arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"getOffsetAfter",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint TextUtils::getOffsetBefore(jstring arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"getOffsetBefore",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jstring TextUtils::getReverse(jstring arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"getReverse",
			"(Ljava/lang/CharSequence;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jint TextUtils::getTrimmedLength(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"getTrimmedLength",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	jstring TextUtils::htmlEncode(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"htmlEncode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint TextUtils::indexOf(jstring arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;C)I",
			arg0,
			arg1
		);
	}
	jint TextUtils::indexOf(jstring arg0, jstring arg1)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I",
			arg0,
			arg1
		);
	}
	jint TextUtils::indexOf(jstring arg0, jchar arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;CI)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextUtils::indexOf(jstring arg0, jstring arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;I)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextUtils::indexOf(jstring arg0, jchar arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;CII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint TextUtils::indexOf(jstring arg0, jstring arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;II)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean TextUtils::isDigitsOnly(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isDigitsOnly",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean TextUtils::isEmpty(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isEmpty",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean TextUtils::isGraphic(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isGraphic",
			"(C)Z",
			arg0
		);
	}
	jboolean TextUtils::isGraphic(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isGraphic",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jstring TextUtils::join(jstring arg0, jobjectArray arg1)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"join",
			"(Ljava/lang/CharSequence;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TextUtils::join(jstring arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"join",
			"(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jint TextUtils::lastIndexOf(jstring arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;C)I",
			arg0,
			arg1
		);
	}
	jint TextUtils::lastIndexOf(jstring arg0, jchar arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;CI)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextUtils::lastIndexOf(jstring arg0, jchar arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;CII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jstring TextUtils::listEllipsize(android::content::Context arg0, JObject arg1, jstring arg2, android::text::TextPaint arg3, jfloat arg4, jint arg5)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"listEllipsize",
			"(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;Landroid/text/TextPaint;FI)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jboolean TextUtils::regionMatches(jstring arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
	{
		return callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"regionMatches",
			"(Ljava/lang/CharSequence;ILjava/lang/CharSequence;II)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jstring TextUtils::replace(jstring arg0, jarray arg1, jarray arg2)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"replace",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jarray TextUtils::split(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"split",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray TextUtils::split(jstring arg0, java::util::regex::Pattern arg1)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"split",
			"(Ljava/lang/String;Ljava/util/regex/Pattern;)[Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jarray>();
	}
	jstring TextUtils::stringOrSpannedString(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"stringOrSpannedString",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring TextUtils::substring(jstring arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils",
			"substring",
			"(Ljava/lang/CharSequence;II)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	void TextUtils::writeToParcel(jstring arg0, android::os::Parcel arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.text.TextUtils",
			"writeToParcel",
			"(Ljava/lang/CharSequence;Landroid/os/Parcel;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
} // namespace android::text

