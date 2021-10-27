#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Paint;
}

namespace android::text
{
	class SpannableStringBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		SpannableStringBuilder(QAndroidJniObject obj);
		// Constructors
		SpannableStringBuilder();
		SpannableStringBuilder(jstring &arg0);
		SpannableStringBuilder(const QString &arg0);
		SpannableStringBuilder(jstring &arg0, jint &arg1, jint &arg2);
		SpannableStringBuilder(const QString &arg0, jint &arg1, jint &arg2);
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(const QString &arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(const QString &arg0, jint arg1, jint arg2);
		QAndroidJniObject append(jstring arg0, jobject arg1, jint arg2);
		QAndroidJniObject append(const QString &arg0, jobject arg1, jint arg2);
		jchar charAt(jint arg0);
		void clear();
		void clearSpans();
		QAndroidJniObject _delete(jint arg0, jint arg1);
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
		QAndroidJniObject insert(jint arg0, jstring arg1);
		QAndroidJniObject insert(jint arg0, const QString &arg1);
		QAndroidJniObject insert(jint arg0, jstring arg1, jint arg2, jint arg3);
		QAndroidJniObject insert(jint arg0, const QString &arg1, jint arg2, jint arg3);
		jint length();
		jint nextSpanTransition(jint arg0, jint arg1, jclass arg2);
		void removeSpan(jobject arg0);
		QAndroidJniObject replace(jint arg0, jint arg1, jstring arg2);
		QAndroidJniObject replace(jint arg0, jint arg1, const QString &arg2);
		QAndroidJniObject replace(jint arg0, jint arg1, jstring arg2, jint arg3, jint arg4);
		QAndroidJniObject replace(jint arg0, jint arg1, const QString &arg2, jint arg3, jint arg4);
		void setFilters(jarray arg0);
		void setSpan(jobject arg0, jint arg1, jint arg2, jint arg3);
		jstring subSequence(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace android::text

