#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}
namespace android::text
{
	class TextPaint;
}
namespace android::text
{
	class TextUtils_TruncateAt;
}
namespace java::util
{
	class Locale;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::text
{
	class TextUtils : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAP_MODE_CHARACTERS();
		static jint CAP_MODE_SENTENCES();
		static jint CAP_MODE_WORDS();
		static QAndroidJniObject CHAR_SEQUENCE_CREATOR();
		static jint SAFE_STRING_FLAG_FIRST_LINE();
		static jint SAFE_STRING_FLAG_SINGLE_LINE();
		static jint SAFE_STRING_FLAG_TRIM();
		
		TextUtils(QAndroidJniObject obj);
		// Constructors
		TextUtils() = default;
		
		// Methods
		static jstring commaEllipsize(jstring arg0, android::text::TextPaint arg1, jfloat arg2, jstring arg3, jstring arg4);
		static jstring commaEllipsize(const QString &arg0, android::text::TextPaint arg1, jfloat arg2, const QString &arg3, const QString &arg4);
		static jstring concat(jarray arg0);
		static void copySpansFrom(__JniBaseClass arg0, jint arg1, jint arg2, jclass arg3, __JniBaseClass arg4, jint arg5);
		static void dumpSpans(jstring arg0, __JniBaseClass arg1, jstring arg2);
		static void dumpSpans(const QString &arg0, __JniBaseClass arg1, const QString &arg2);
		static jstring ellipsize(jstring arg0, android::text::TextPaint arg1, jfloat arg2, android::text::TextUtils_TruncateAt arg3);
		static jstring ellipsize(const QString &arg0, android::text::TextPaint arg1, jfloat arg2, android::text::TextUtils_TruncateAt arg3);
		static jstring ellipsize(jstring arg0, android::text::TextPaint arg1, jfloat arg2, android::text::TextUtils_TruncateAt arg3, jboolean arg4, __JniBaseClass arg5);
		static jstring ellipsize(const QString &arg0, android::text::TextPaint arg1, jfloat arg2, android::text::TextUtils_TruncateAt arg3, jboolean arg4, __JniBaseClass arg5);
		static jboolean equals(jstring arg0, jstring arg1);
		static jboolean equals(const QString &arg0, const QString &arg1);
		static jstring expandTemplate(jstring arg0, jarray arg1);
		static jstring expandTemplate(const QString &arg0, jarray arg1);
		static jint getCapsMode(jstring arg0, jint arg1, jint arg2);
		static jint getCapsMode(const QString &arg0, jint arg1, jint arg2);
		static void getChars(jstring arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4);
		static void getChars(const QString &arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4);
		static jint getLayoutDirectionFromLocale(java::util::Locale arg0);
		static jint getOffsetAfter(jstring arg0, jint arg1);
		static jint getOffsetAfter(const QString &arg0, jint arg1);
		static jint getOffsetBefore(jstring arg0, jint arg1);
		static jint getOffsetBefore(const QString &arg0, jint arg1);
		static jstring getReverse(jstring arg0, jint arg1, jint arg2);
		static jstring getReverse(const QString &arg0, jint arg1, jint arg2);
		static jint getTrimmedLength(jstring arg0);
		static jint getTrimmedLength(const QString &arg0);
		static jstring htmlEncode(jstring arg0);
		static jstring htmlEncode(const QString &arg0);
		static jint indexOf(jstring arg0, jchar arg1);
		static jint indexOf(const QString &arg0, jchar arg1);
		static jint indexOf(jstring arg0, jstring arg1);
		static jint indexOf(const QString &arg0, const QString &arg1);
		static jint indexOf(jstring arg0, jchar arg1, jint arg2);
		static jint indexOf(const QString &arg0, jchar arg1, jint arg2);
		static jint indexOf(jstring arg0, jstring arg1, jint arg2);
		static jint indexOf(const QString &arg0, const QString &arg1, jint arg2);
		static jint indexOf(jstring arg0, jchar arg1, jint arg2, jint arg3);
		static jint indexOf(const QString &arg0, jchar arg1, jint arg2, jint arg3);
		static jint indexOf(jstring arg0, jstring arg1, jint arg2, jint arg3);
		static jint indexOf(const QString &arg0, const QString &arg1, jint arg2, jint arg3);
		static jboolean isDigitsOnly(jstring arg0);
		static jboolean isDigitsOnly(const QString &arg0);
		static jboolean isEmpty(jstring arg0);
		static jboolean isEmpty(const QString &arg0);
		static jboolean isGraphic(jchar arg0);
		static jboolean isGraphic(jstring arg0);
		static jboolean isGraphic(const QString &arg0);
		static jstring join(jstring arg0, jobjectArray arg1);
		static jstring join(const QString &arg0, jobjectArray arg1);
		static jstring join(jstring arg0, __JniBaseClass arg1);
		static jstring join(const QString &arg0, __JniBaseClass arg1);
		static jint lastIndexOf(jstring arg0, jchar arg1);
		static jint lastIndexOf(const QString &arg0, jchar arg1);
		static jint lastIndexOf(jstring arg0, jchar arg1, jint arg2);
		static jint lastIndexOf(const QString &arg0, jchar arg1, jint arg2);
		static jint lastIndexOf(jstring arg0, jchar arg1, jint arg2, jint arg3);
		static jint lastIndexOf(const QString &arg0, jchar arg1, jint arg2, jint arg3);
		static jstring listEllipsize(android::content::Context arg0, __JniBaseClass arg1, jstring arg2, android::text::TextPaint arg3, jfloat arg4, jint arg5);
		static jstring listEllipsize(android::content::Context arg0, __JniBaseClass arg1, const QString &arg2, android::text::TextPaint arg3, jfloat arg4, jint arg5);
		static jstring makeSafeForPresentation(jstring arg0, jint arg1, jfloat arg2, jint arg3);
		static jstring makeSafeForPresentation(const QString &arg0, jint arg1, jfloat arg2, jint arg3);
		static jboolean regionMatches(jstring arg0, jint arg1, jstring arg2, jint arg3, jint arg4);
		static jboolean regionMatches(const QString &arg0, jint arg1, const QString &arg2, jint arg3, jint arg4);
		static jstring replace(jstring arg0, jarray arg1, jarray arg2);
		static jstring replace(const QString &arg0, jarray arg1, jarray arg2);
		static jarray split(jstring arg0, jstring arg1);
		static jarray split(const QString &arg0, const QString &arg1);
		static jarray split(jstring arg0, java::util::regex::Pattern arg1);
		static jarray split(const QString &arg0, java::util::regex::Pattern arg1);
		static jstring stringOrSpannedString(jstring arg0);
		static jstring stringOrSpannedString(const QString &arg0);
		static jstring substring(jstring arg0, jint arg1, jint arg2);
		static jstring substring(const QString &arg0, jint arg1, jint arg2);
		static void writeToParcel(jstring arg0, android::os::Parcel arg1, jint arg2);
		static void writeToParcel(const QString &arg0, android::os::Parcel arg1, jint arg2);
	};
} // namespace android::text

