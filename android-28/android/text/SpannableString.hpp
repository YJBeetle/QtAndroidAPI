#pragma once

#include "../../JObject.hpp"


namespace android::text
{
	class SpannableString : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpannableString(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpannableString(QAndroidJniObject obj);
		
		// Constructors
		SpannableString(jstring arg0);
		
		// Methods
		static android::text::SpannableString valueOf(jstring arg0);
		jchar charAt(jint arg0);
		jboolean equals(jobject arg0);
		void getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3);
		jint getSpanEnd(jobject arg0);
		jint getSpanFlags(jobject arg0);
		jint getSpanStart(jobject arg0);
		jobjectArray getSpans(jint arg0, jint arg1, jclass arg2);
		jint hashCode();
		jint length();
		jint nextSpanTransition(jint arg0, jint arg1, jclass arg2);
		void removeSpan(jobject arg0);
		void setSpan(jobject arg0, jint arg1, jint arg2, jint arg3);
		jstring subSequence(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace android::text

