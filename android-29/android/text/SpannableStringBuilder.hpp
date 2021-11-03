#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Paint;
}

namespace android::text
{
	class SpannableStringBuilder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpannableStringBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpannableStringBuilder(QAndroidJniObject obj);
		
		// Constructors
		SpannableStringBuilder();
		SpannableStringBuilder(jstring arg0);
		SpannableStringBuilder(jstring arg0, jint arg1, jint arg2);
		
		// Methods
		static android::text::SpannableStringBuilder valueOf(jstring arg0);
		android::text::SpannableStringBuilder append(jchar arg0);
		android::text::SpannableStringBuilder append(jstring arg0);
		android::text::SpannableStringBuilder append(jstring arg0, jint arg1, jint arg2);
		android::text::SpannableStringBuilder append(jstring arg0, jobject arg1, jint arg2);
		jchar charAt(jint arg0);
		void clear();
		void clearSpans();
		android::text::SpannableStringBuilder _delete(jint arg0, jint arg1);
		jboolean equals(jobject arg0);
		void getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3);
		jarray getFilters();
		jint getSpanEnd(jobject arg0);
		jint getSpanFlags(jobject arg0);
		jint getSpanStart(jobject arg0);
		jobjectArray getSpans(jint arg0, jint arg1, jclass arg2);
		jint getTextRunCursor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint arg5);
		jint getTextWatcherDepth();
		jint hashCode();
		android::text::SpannableStringBuilder insert(jint arg0, jstring arg1);
		android::text::SpannableStringBuilder insert(jint arg0, jstring arg1, jint arg2, jint arg3);
		jint length();
		jint nextSpanTransition(jint arg0, jint arg1, jclass arg2);
		void removeSpan(jobject arg0);
		android::text::SpannableStringBuilder replace(jint arg0, jint arg1, jstring arg2);
		android::text::SpannableStringBuilder replace(jint arg0, jint arg1, jstring arg2, jint arg3, jint arg4);
		void setFilters(jarray arg0);
		void setSpan(jobject arg0, jint arg1, jint arg2, jint arg3);
		jstring subSequence(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace android::text

