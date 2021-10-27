#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class Locale;
}

namespace java::text
{
	class BreakIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint DONE();
		
		BreakIterator(QAndroidJniObject obj);
		// Constructors
		BreakIterator() = default;
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getCharacterInstance();
		static QAndroidJniObject getCharacterInstance(java::util::Locale arg0);
		static QAndroidJniObject getLineInstance();
		static QAndroidJniObject getLineInstance(java::util::Locale arg0);
		static QAndroidJniObject getSentenceInstance();
		static QAndroidJniObject getSentenceInstance(java::util::Locale arg0);
		static QAndroidJniObject getWordInstance();
		static QAndroidJniObject getWordInstance(java::util::Locale arg0);
		jobject clone();
		jint current();
		jint first();
		jint following(jint arg0);
		QAndroidJniObject getText();
		jboolean isBoundary(jint arg0);
		jint last();
		jint next();
		jint next(jint arg0);
		jint preceding(jint arg0);
		jint previous();
		void setText(jstring arg0);
		void setText(const QString &arg0);
		void setText(__JniBaseClass arg0);
	};
} // namespace java::text

