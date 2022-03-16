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
		SpannableStringBuilder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SpannableStringBuilder();
		SpannableStringBuilder(JString arg0);
		SpannableStringBuilder(JString arg0, jint arg1, jint arg2);
		
		// Methods
		static android::text::SpannableStringBuilder valueOf(JString arg0);
		android::text::SpannableStringBuilder append(jchar arg0) const;
		android::text::SpannableStringBuilder append(JString arg0) const;
		android::text::SpannableStringBuilder append(JString arg0, jint arg1, jint arg2) const;
		android::text::SpannableStringBuilder append(JString arg0, JObject arg1, jint arg2) const;
		jchar charAt(jint arg0) const;
		void clear() const;
		void clearSpans() const;
		android::text::SpannableStringBuilder delete_(jint arg0, jint arg1) const;
		jboolean equals(JObject arg0) const;
		void getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const;
		JArray getFilters() const;
		jint getSpanEnd(JObject arg0) const;
		jint getSpanFlags(JObject arg0) const;
		jint getSpanStart(JObject arg0) const;
		JObjectArray getSpans(jint arg0, jint arg1, JClass arg2) const;
		jint getTextRunCursor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint arg5) const;
		jint getTextWatcherDepth() const;
		jint hashCode() const;
		android::text::SpannableStringBuilder insert(jint arg0, JString arg1) const;
		android::text::SpannableStringBuilder insert(jint arg0, JString arg1, jint arg2, jint arg3) const;
		jint length() const;
		jint nextSpanTransition(jint arg0, jint arg1, JClass arg2) const;
		void removeSpan(JObject arg0) const;
		android::text::SpannableStringBuilder replace(jint arg0, jint arg1, JString arg2) const;
		android::text::SpannableStringBuilder replace(jint arg0, jint arg1, JString arg2, jint arg3, jint arg4) const;
		void setFilters(JArray arg0) const;
		void setSpan(JObject arg0, jint arg1, jint arg2, jint arg3) const;
		JString subSequence(jint arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace android::text

