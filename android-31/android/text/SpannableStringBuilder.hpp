#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JArray;
class JObjectArray;
namespace android::graphics
{
	class Paint;
}
class JString;
class JClass;
class JObject;
class JString;

namespace android::text
{
	class SpannableStringBuilder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SpannableStringBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpannableStringBuilder(QJniObject obj);
		
		// Constructors
		SpannableStringBuilder();
		SpannableStringBuilder(JString arg0);
		SpannableStringBuilder(JString arg0, jint arg1, jint arg2);
		
		// Methods
		static android::text::SpannableStringBuilder valueOf(JString arg0);
		android::text::SpannableStringBuilder append(jchar arg0);
		android::text::SpannableStringBuilder append(JString arg0);
		android::text::SpannableStringBuilder append(JString arg0, jint arg1, jint arg2);
		android::text::SpannableStringBuilder append(JString arg0, JObject arg1, jint arg2);
		jchar charAt(jint arg0);
		void clear();
		void clearSpans();
		android::text::SpannableStringBuilder _delete(jint arg0, jint arg1);
		jboolean equals(JObject arg0);
		void getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3);
		JArray getFilters();
		jint getSpanEnd(JObject arg0);
		jint getSpanFlags(JObject arg0);
		jint getSpanStart(JObject arg0);
		JObjectArray getSpans(jint arg0, jint arg1, JClass arg2);
		jint getTextRunCursor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint arg5);
		jint getTextWatcherDepth();
		jint hashCode();
		android::text::SpannableStringBuilder insert(jint arg0, JString arg1);
		android::text::SpannableStringBuilder insert(jint arg0, JString arg1, jint arg2, jint arg3);
		jint length();
		jint nextSpanTransition(jint arg0, jint arg1, JClass arg2);
		void removeSpan(JObject arg0);
		android::text::SpannableStringBuilder replace(jint arg0, jint arg1, JString arg2);
		android::text::SpannableStringBuilder replace(jint arg0, jint arg1, JString arg2, jint arg3, jint arg4);
		void setFilters(JArray arg0);
		void setSpan(JObject arg0, jint arg1, jint arg2, jint arg3);
		JString subSequence(jint arg0, jint arg1);
		JString toString();
	};
} // namespace android::text

