#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class UnicodeSet;
}
namespace android::icu::text
{
	class UnicodeSet_SpanCondition;
}
namespace android::icu::text
{
	class UnicodeSetSpanner_CountMethod;
}
namespace android::icu::text
{
	class UnicodeSetSpanner_TrimOption;
}

namespace android::icu::text
{
	class UnicodeSetSpanner : public __JniBaseClass
	{
	public:
		// Fields
		
		UnicodeSetSpanner(QAndroidJniObject obj);
		// Constructors
		UnicodeSetSpanner(android::icu::text::UnicodeSet &arg0);
		UnicodeSetSpanner() = default;
		
		// Methods
		jint countIn(jstring arg0);
		jint countIn(const QString &arg0);
		jint countIn(jstring arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1);
		jint countIn(const QString &arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1);
		jint countIn(jstring arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		jint countIn(const QString &arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		jstring deleteFrom(jstring arg0);
		jstring deleteFrom(const QString &arg0);
		jstring deleteFrom(jstring arg0, android::icu::text::UnicodeSet_SpanCondition arg1);
		jstring deleteFrom(const QString &arg0, android::icu::text::UnicodeSet_SpanCondition arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject getUnicodeSet();
		jint hashCode();
		jstring replaceFrom(jstring arg0, jstring arg1);
		jstring replaceFrom(const QString &arg0, const QString &arg1);
		jstring replaceFrom(jstring arg0, jstring arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2);
		jstring replaceFrom(const QString &arg0, const QString &arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2);
		jstring replaceFrom(jstring arg0, jstring arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2, android::icu::text::UnicodeSet_SpanCondition arg3);
		jstring replaceFrom(const QString &arg0, const QString &arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2, android::icu::text::UnicodeSet_SpanCondition arg3);
		jstring trim(jstring arg0);
		jstring trim(const QString &arg0);
		jstring trim(jstring arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1);
		jstring trim(const QString &arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1);
		jstring trim(jstring arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		jstring trim(const QString &arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
	};
} // namespace android::icu::text

