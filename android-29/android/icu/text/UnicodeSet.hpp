#pragma once

#include "./UnicodeFilter.hpp"

class JIntArray;
class JArray;
namespace android::icu::text
{
	class UnicodeSet_ComparisonStyle;
}
namespace android::icu::text
{
	class UnicodeSet_SpanCondition;
}
class JString;
class JObject;
class JString;
namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class ParsePosition;
}

namespace android::icu::text
{
	class UnicodeSet : public android::icu::text::UnicodeFilter
	{
	public:
		// Fields
		static jint ADD_CASE_MAPPINGS();
		static android::icu::text::UnicodeSet ALL_CODE_POINTS();
		static jint CASE();
		static jint CASE_INSENSITIVE();
		static android::icu::text::UnicodeSet EMPTY();
		static jint IGNORE_SPACE();
		static jint MAX_VALUE();
		static jint MIN_VALUE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnicodeSet(const char *className, const char *sig, Ts...agv) : android::icu::text::UnicodeFilter(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSet(QAndroidJniObject obj);
		
		// Constructors
		UnicodeSet();
		UnicodeSet(JIntArray arg0);
		UnicodeSet(android::icu::text::UnicodeSet &arg0);
		UnicodeSet(JString arg0);
		UnicodeSet(jint arg0, jint arg1);
		UnicodeSet(JString arg0, jboolean arg1);
		UnicodeSet(JString arg0, jint arg1);
		UnicodeSet(JString arg0, java::text::ParsePosition arg1, JObject arg2);
		UnicodeSet(JString arg0, java::text::ParsePosition arg1, JObject arg2, jint arg3);
		
		// Methods
		static android::icu::text::UnicodeSet from(JString arg0);
		static android::icu::text::UnicodeSet fromAll(JString arg0);
		java::lang::StringBuffer _generatePattern(java::lang::StringBuffer arg0, jboolean arg1);
		java::lang::StringBuffer _generatePattern(java::lang::StringBuffer arg0, jboolean arg1, jboolean arg2);
		android::icu::text::UnicodeSet add(jint arg0);
		android::icu::text::UnicodeSet add(JString arg0);
		android::icu::text::UnicodeSet add(JObject arg0);
		android::icu::text::UnicodeSet add(jint arg0, jint arg1);
		android::icu::text::UnicodeSet addAll(JArray arg0);
		android::icu::text::UnicodeSet addAll(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet addAll(JString arg0);
		android::icu::text::UnicodeSet addAll(JObject arg0);
		android::icu::text::UnicodeSet addAll(jint arg0, jint arg1);
		JObject addAllTo(JObject arg0);
		void addMatchSetTo(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet applyIntPropertyValue(jint arg0, jint arg1);
		android::icu::text::UnicodeSet applyPattern(JString arg0);
		android::icu::text::UnicodeSet applyPattern(JString arg0, jboolean arg1);
		android::icu::text::UnicodeSet applyPattern(JString arg0, jint arg1);
		android::icu::text::UnicodeSet applyPropertyAlias(JString arg0, JString arg1);
		android::icu::text::UnicodeSet applyPropertyAlias(JString arg0, JString arg1, JObject arg2);
		jint charAt(jint arg0);
		android::icu::text::UnicodeSet clear();
		JObject clone();
		android::icu::text::UnicodeSet cloneAsThawed();
		android::icu::text::UnicodeSet closeOver(jint arg0);
		android::icu::text::UnicodeSet compact();
		jint compareTo(android::icu::text::UnicodeSet arg0);
		jint compareTo(JObject arg0);
		jint compareTo(android::icu::text::UnicodeSet arg0, android::icu::text::UnicodeSet_ComparisonStyle arg1);
		android::icu::text::UnicodeSet complement();
		android::icu::text::UnicodeSet complement(jint arg0);
		android::icu::text::UnicodeSet complement(JString arg0);
		android::icu::text::UnicodeSet complement(jint arg0, jint arg1);
		android::icu::text::UnicodeSet complementAll(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet complementAll(JString arg0);
		jboolean contains(jint arg0);
		jboolean contains(JString arg0);
		jboolean contains(jint arg0, jint arg1);
		jboolean containsAll(android::icu::text::UnicodeSet arg0);
		jboolean containsAll(JObject arg0);
		jboolean containsAll(JString arg0);
		jboolean containsNone(android::icu::text::UnicodeSet arg0);
		jboolean containsNone(JString arg0);
		jboolean containsNone(JObject arg0);
		jboolean containsNone(jint arg0, jint arg1);
		jboolean containsSome(android::icu::text::UnicodeSet arg0);
		jboolean containsSome(JString arg0);
		jboolean containsSome(JObject arg0);
		jboolean containsSome(jint arg0, jint arg1);
		jboolean equals(JObject arg0);
		android::icu::text::UnicodeSet freeze();
		jint getRangeCount();
		jint getRangeEnd(jint arg0);
		jint getRangeStart(jint arg0);
		jint hashCode();
		jint indexOf(jint arg0);
		jboolean isEmpty();
		jboolean isFrozen();
		JObject iterator();
		jint matches(JObject arg0, JIntArray arg1, jint arg2, jboolean arg3);
		jboolean matchesIndexValue(jint arg0);
		JObject ranges();
		android::icu::text::UnicodeSet remove(jint arg0);
		android::icu::text::UnicodeSet remove(JString arg0);
		android::icu::text::UnicodeSet remove(jint arg0, jint arg1);
		android::icu::text::UnicodeSet removeAll(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet removeAll(JString arg0);
		android::icu::text::UnicodeSet removeAll(JObject arg0);
		android::icu::text::UnicodeSet removeAllStrings();
		android::icu::text::UnicodeSet retain(jint arg0);
		android::icu::text::UnicodeSet retain(JString arg0);
		android::icu::text::UnicodeSet retain(jint arg0, jint arg1);
		android::icu::text::UnicodeSet retainAll(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet retainAll(JString arg0);
		android::icu::text::UnicodeSet retainAll(JObject arg0);
		android::icu::text::UnicodeSet set(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet set(jint arg0, jint arg1);
		jint size();
		jint span(JString arg0, android::icu::text::UnicodeSet_SpanCondition arg1);
		jint span(JString arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		jint spanBack(JString arg0, android::icu::text::UnicodeSet_SpanCondition arg1);
		jint spanBack(JString arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		JObject strings();
		JString toPattern(jboolean arg0);
		JString toString();
	};
} // namespace android::icu::text

