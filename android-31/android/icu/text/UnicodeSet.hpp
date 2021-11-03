#pragma once

#include "../../../JObject.hpp"
#include "./UnicodeFilter.hpp"

namespace android::icu::text
{
	class UnicodeSet_ComparisonStyle;
}
namespace android::icu::text
{
	class UnicodeSet_SpanCondition;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit UnicodeSet(const char *className, const char *sig, Ts...agv) : android::icu::text::UnicodeFilter(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSet(QJniObject obj);
		
		// Constructors
		UnicodeSet();
		UnicodeSet(jintArray arg0);
		UnicodeSet(android::icu::text::UnicodeSet &arg0);
		UnicodeSet(jstring arg0);
		UnicodeSet(jint arg0, jint arg1);
		UnicodeSet(jstring arg0, jboolean arg1);
		UnicodeSet(jstring arg0, jint arg1);
		UnicodeSet(jstring arg0, java::text::ParsePosition arg1, JObject arg2);
		UnicodeSet(jstring arg0, java::text::ParsePosition arg1, JObject arg2, jint arg3);
		
		// Methods
		static android::icu::text::UnicodeSet from(jstring arg0);
		static android::icu::text::UnicodeSet fromAll(jstring arg0);
		java::lang::StringBuffer _generatePattern(java::lang::StringBuffer arg0, jboolean arg1);
		java::lang::StringBuffer _generatePattern(java::lang::StringBuffer arg0, jboolean arg1, jboolean arg2);
		android::icu::text::UnicodeSet add(jint arg0);
		android::icu::text::UnicodeSet add(jstring arg0);
		android::icu::text::UnicodeSet add(JObject arg0);
		android::icu::text::UnicodeSet add(jint arg0, jint arg1);
		android::icu::text::UnicodeSet addAll(jarray arg0);
		android::icu::text::UnicodeSet addAll(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet addAll(jstring arg0);
		android::icu::text::UnicodeSet addAll(JObject arg0);
		android::icu::text::UnicodeSet addAll(jint arg0, jint arg1);
		JObject addAllTo(JObject arg0);
		void addMatchSetTo(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet applyIntPropertyValue(jint arg0, jint arg1);
		android::icu::text::UnicodeSet applyPattern(jstring arg0);
		android::icu::text::UnicodeSet applyPattern(jstring arg0, jboolean arg1);
		android::icu::text::UnicodeSet applyPattern(jstring arg0, jint arg1);
		android::icu::text::UnicodeSet applyPropertyAlias(jstring arg0, jstring arg1);
		android::icu::text::UnicodeSet applyPropertyAlias(jstring arg0, jstring arg1, JObject arg2);
		jint charAt(jint arg0);
		android::icu::text::UnicodeSet clear();
		jobject clone();
		android::icu::text::UnicodeSet cloneAsThawed();
		android::icu::text::UnicodeSet closeOver(jint arg0);
		android::icu::text::UnicodeSet compact();
		jint compareTo(android::icu::text::UnicodeSet arg0);
		jint compareTo(JObject arg0);
		jint compareTo(jobject arg0);
		jint compareTo(android::icu::text::UnicodeSet arg0, android::icu::text::UnicodeSet_ComparisonStyle arg1);
		android::icu::text::UnicodeSet complement();
		android::icu::text::UnicodeSet complement(jint arg0);
		android::icu::text::UnicodeSet complement(jstring arg0);
		android::icu::text::UnicodeSet complement(jint arg0, jint arg1);
		android::icu::text::UnicodeSet complementAll(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet complementAll(jstring arg0);
		jboolean contains(jint arg0);
		jboolean contains(jstring arg0);
		jboolean contains(jint arg0, jint arg1);
		jboolean containsAll(android::icu::text::UnicodeSet arg0);
		jboolean containsAll(JObject arg0);
		jboolean containsAll(jstring arg0);
		jboolean containsNone(android::icu::text::UnicodeSet arg0);
		jboolean containsNone(jstring arg0);
		jboolean containsNone(JObject arg0);
		jboolean containsNone(jint arg0, jint arg1);
		jboolean containsSome(android::icu::text::UnicodeSet arg0);
		jboolean containsSome(jstring arg0);
		jboolean containsSome(JObject arg0);
		jboolean containsSome(jint arg0, jint arg1);
		jboolean equals(jobject arg0);
		android::icu::text::UnicodeSet freeze();
		jint getRangeCount();
		jint getRangeEnd(jint arg0);
		jint getRangeStart(jint arg0);
		jint hashCode();
		jint indexOf(jint arg0);
		jboolean isEmpty();
		jboolean isFrozen();
		JObject iterator();
		jint matches(JObject arg0, jintArray arg1, jint arg2, jboolean arg3);
		jboolean matchesIndexValue(jint arg0);
		JObject ranges();
		android::icu::text::UnicodeSet remove(jint arg0);
		android::icu::text::UnicodeSet remove(jstring arg0);
		android::icu::text::UnicodeSet remove(jint arg0, jint arg1);
		android::icu::text::UnicodeSet removeAll(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet removeAll(jstring arg0);
		android::icu::text::UnicodeSet removeAll(JObject arg0);
		android::icu::text::UnicodeSet removeAllStrings();
		android::icu::text::UnicodeSet retain(jint arg0);
		android::icu::text::UnicodeSet retain(jstring arg0);
		android::icu::text::UnicodeSet retain(jint arg0, jint arg1);
		android::icu::text::UnicodeSet retainAll(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet retainAll(jstring arg0);
		android::icu::text::UnicodeSet retainAll(JObject arg0);
		android::icu::text::UnicodeSet set(android::icu::text::UnicodeSet arg0);
		android::icu::text::UnicodeSet set(jint arg0, jint arg1);
		jint size();
		jint span(jstring arg0, android::icu::text::UnicodeSet_SpanCondition arg1);
		jint span(jstring arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		jint spanBack(jstring arg0, android::icu::text::UnicodeSet_SpanCondition arg1);
		jint spanBack(jstring arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		JObject strings();
		jstring toPattern(jboolean arg0);
		jstring toString();
	};
} // namespace android::icu::text

