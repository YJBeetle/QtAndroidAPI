#pragma once

#include "../../../JObject.hpp"

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
class JString;
class JObject;
class JString;

namespace android::icu::text
{
	class UnicodeSetSpanner : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnicodeSetSpanner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSetSpanner(QAndroidJniObject obj);
		
		// Constructors
		UnicodeSetSpanner(android::icu::text::UnicodeSet arg0);
		
		// Methods
		jint countIn(JString arg0);
		jint countIn(JString arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1);
		jint countIn(JString arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		JString deleteFrom(JString arg0);
		JString deleteFrom(JString arg0, android::icu::text::UnicodeSet_SpanCondition arg1);
		jboolean equals(JObject arg0);
		android::icu::text::UnicodeSet getUnicodeSet();
		jint hashCode();
		JString replaceFrom(JString arg0, JString arg1);
		JString replaceFrom(JString arg0, JString arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2);
		JString replaceFrom(JString arg0, JString arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2, android::icu::text::UnicodeSet_SpanCondition arg3);
		JString trim(JString arg0);
		JString trim(JString arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1);
		JString trim(JString arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
	};
} // namespace android::icu::text

