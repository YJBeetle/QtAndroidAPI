#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JArray;
class JObjectArray;
class JArray;
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
class JString;
class JClass;
class JString;
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
	class TextUtils : public JObject
	{
	public:
		// Fields
		static jint CAP_MODE_CHARACTERS();
		static jint CAP_MODE_SENTENCES();
		static jint CAP_MODE_WORDS();
		static JObject CHAR_SEQUENCE_CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextUtils(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JString commaEllipsize(JString arg0, android::text::TextPaint arg1, jfloat arg2, JString arg3, JString arg4);
		static JString concat(JArray arg0);
		static void copySpansFrom(JObject arg0, jint arg1, jint arg2, JClass arg3, JObject arg4, jint arg5);
		static void dumpSpans(JString arg0, JObject arg1, JString arg2);
		static JString ellipsize(JString arg0, android::text::TextPaint arg1, jfloat arg2, android::text::TextUtils_TruncateAt arg3);
		static JString ellipsize(JString arg0, android::text::TextPaint arg1, jfloat arg2, android::text::TextUtils_TruncateAt arg3, jboolean arg4, JObject arg5);
		static jboolean equals(JString arg0, JString arg1);
		static JString expandTemplate(JString arg0, JArray arg1);
		static jint getCapsMode(JString arg0, jint arg1, jint arg2);
		static void getChars(JString arg0, jint arg1, jint arg2, JCharArray arg3, jint arg4);
		static jint getLayoutDirectionFromLocale(java::util::Locale arg0);
		static jint getOffsetAfter(JString arg0, jint arg1);
		static jint getOffsetBefore(JString arg0, jint arg1);
		static JString getReverse(JString arg0, jint arg1, jint arg2);
		static jint getTrimmedLength(JString arg0);
		static JString htmlEncode(JString arg0);
		static jint indexOf(JString arg0, jchar arg1);
		static jint indexOf(JString arg0, JString arg1);
		static jint indexOf(JString arg0, jchar arg1, jint arg2);
		static jint indexOf(JString arg0, JString arg1, jint arg2);
		static jint indexOf(JString arg0, jchar arg1, jint arg2, jint arg3);
		static jint indexOf(JString arg0, JString arg1, jint arg2, jint arg3);
		static jboolean isDigitsOnly(JString arg0);
		static jboolean isEmpty(JString arg0);
		static jboolean isGraphic(jchar arg0);
		static jboolean isGraphic(JString arg0);
		static JString join(JString arg0, JObjectArray arg1);
		static JString join(JString arg0, JObject arg1);
		static jint lastIndexOf(JString arg0, jchar arg1);
		static jint lastIndexOf(JString arg0, jchar arg1, jint arg2);
		static jint lastIndexOf(JString arg0, jchar arg1, jint arg2, jint arg3);
		static JString listEllipsize(android::content::Context arg0, JObject arg1, JString arg2, android::text::TextPaint arg3, jfloat arg4, jint arg5);
		static jboolean regionMatches(JString arg0, jint arg1, JString arg2, jint arg3, jint arg4);
		static JString replace(JString arg0, JArray arg1, JArray arg2);
		static JArray split(JString arg0, JString arg1);
		static JArray split(JString arg0, java::util::regex::Pattern arg1);
		static JString stringOrSpannedString(JString arg0);
		static JString substring(JString arg0, jint arg1, jint arg2);
		static void writeToParcel(JString arg0, android::os::Parcel arg1, jint arg2);
	};
} // namespace android::text

