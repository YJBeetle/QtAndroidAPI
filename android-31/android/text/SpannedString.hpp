#pragma once

#include "../../JObject.hpp"


namespace android::text
{
	class SpannedString : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SpannedString(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpannedString(QJniObject obj);
		
		// Constructors
		SpannedString(jstring arg0);
		
		// Methods
		static android::text::SpannedString valueOf(jstring arg0);
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
		jstring subSequence(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace android::text

