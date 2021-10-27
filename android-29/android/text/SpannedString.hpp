#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class SpannedString : public __JniBaseClass
	{
	public:
		// Fields
		
		SpannedString(QAndroidJniObject obj);
		// Constructors
		SpannedString(jstring &arg0);
		SpannedString(const QString &arg0);
		SpannedString() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
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

