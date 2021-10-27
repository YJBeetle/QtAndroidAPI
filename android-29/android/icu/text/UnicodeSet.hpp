#pragma once

#include "../../../__JniBaseClass.hpp"
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
		static QAndroidJniObject ALL_CODE_POINTS();
		static jint CASE();
		static jint CASE_INSENSITIVE();
		static QAndroidJniObject EMPTY();
		static jint IGNORE_SPACE();
		static jint MAX_VALUE();
		static jint MIN_VALUE();
		
		UnicodeSet(QAndroidJniObject obj);
		// Constructors
		UnicodeSet();
		UnicodeSet(jintArray &arg0);
		UnicodeSet(android::icu::text::UnicodeSet &arg0);
		UnicodeSet(jstring &arg0);
		UnicodeSet(const QString &arg0);
		UnicodeSet(jint &arg0, jint &arg1);
		UnicodeSet(jstring &arg0, jboolean &arg1);
		UnicodeSet(const QString &arg0, jboolean &arg1);
		UnicodeSet(jstring &arg0, jint &arg1);
		UnicodeSet(const QString &arg0, jint &arg1);
		UnicodeSet(jstring &arg0, java::text::ParsePosition &arg1, __JniBaseClass &arg2);
		UnicodeSet(const QString &arg0, java::text::ParsePosition &arg1, __JniBaseClass &arg2);
		UnicodeSet(jstring &arg0, java::text::ParsePosition &arg1, __JniBaseClass &arg2, jint &arg3);
		UnicodeSet(const QString &arg0, java::text::ParsePosition &arg1, __JniBaseClass &arg2, jint &arg3);
		
		// Methods
		static QAndroidJniObject from(jstring arg0);
		static QAndroidJniObject from(const QString &arg0);
		static QAndroidJniObject fromAll(jstring arg0);
		static QAndroidJniObject fromAll(const QString &arg0);
		QAndroidJniObject _generatePattern(java::lang::StringBuffer arg0, jboolean arg1);
		QAndroidJniObject _generatePattern(java::lang::StringBuffer arg0, jboolean arg1, jboolean arg2);
		QAndroidJniObject add(jint arg0);
		QAndroidJniObject add(jstring arg0);
		QAndroidJniObject add(const QString &arg0);
		QAndroidJniObject add(__JniBaseClass arg0);
		QAndroidJniObject add(jint arg0, jint arg1);
		QAndroidJniObject addAll(jarray arg0);
		QAndroidJniObject addAll(android::icu::text::UnicodeSet arg0);
		QAndroidJniObject addAll(jstring arg0);
		QAndroidJniObject addAll(const QString &arg0);
		QAndroidJniObject addAll(__JniBaseClass arg0);
		QAndroidJniObject addAll(jint arg0, jint arg1);
		QAndroidJniObject addAllTo(__JniBaseClass arg0);
		void addMatchSetTo(android::icu::text::UnicodeSet arg0);
		QAndroidJniObject applyIntPropertyValue(jint arg0, jint arg1);
		QAndroidJniObject applyPattern(jstring arg0);
		QAndroidJniObject applyPattern(const QString &arg0);
		QAndroidJniObject applyPattern(jstring arg0, jboolean arg1);
		QAndroidJniObject applyPattern(const QString &arg0, jboolean arg1);
		QAndroidJniObject applyPattern(jstring arg0, jint arg1);
		QAndroidJniObject applyPattern(const QString &arg0, jint arg1);
		QAndroidJniObject applyPropertyAlias(jstring arg0, jstring arg1);
		QAndroidJniObject applyPropertyAlias(const QString &arg0, const QString &arg1);
		QAndroidJniObject applyPropertyAlias(jstring arg0, jstring arg1, __JniBaseClass arg2);
		QAndroidJniObject applyPropertyAlias(const QString &arg0, const QString &arg1, __JniBaseClass arg2);
		jint charAt(jint arg0);
		QAndroidJniObject clear();
		jobject clone();
		QAndroidJniObject cloneAsThawed();
		QAndroidJniObject closeOver(jint arg0);
		QAndroidJniObject compact();
		jint compareTo(android::icu::text::UnicodeSet arg0);
		jint compareTo(__JniBaseClass arg0);
		jint compareTo(jobject arg0);
		jint compareTo(android::icu::text::UnicodeSet arg0, android::icu::text::UnicodeSet_ComparisonStyle arg1);
		QAndroidJniObject complement();
		QAndroidJniObject complement(jint arg0);
		QAndroidJniObject complement(jstring arg0);
		QAndroidJniObject complement(const QString &arg0);
		QAndroidJniObject complement(jint arg0, jint arg1);
		QAndroidJniObject complementAll(android::icu::text::UnicodeSet arg0);
		QAndroidJniObject complementAll(jstring arg0);
		QAndroidJniObject complementAll(const QString &arg0);
		jboolean contains(jint arg0);
		jboolean contains(jstring arg0);
		jboolean contains(const QString &arg0);
		jboolean contains(jint arg0, jint arg1);
		jboolean containsAll(android::icu::text::UnicodeSet arg0);
		jboolean containsAll(__JniBaseClass arg0);
		jboolean containsAll(jstring arg0);
		jboolean containsAll(const QString &arg0);
		jboolean containsNone(android::icu::text::UnicodeSet arg0);
		jboolean containsNone(jstring arg0);
		jboolean containsNone(const QString &arg0);
		jboolean containsNone(__JniBaseClass arg0);
		jboolean containsNone(jint arg0, jint arg1);
		jboolean containsSome(android::icu::text::UnicodeSet arg0);
		jboolean containsSome(jstring arg0);
		jboolean containsSome(const QString &arg0);
		jboolean containsSome(__JniBaseClass arg0);
		jboolean containsSome(jint arg0, jint arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject freeze();
		jint getRangeCount();
		jint getRangeEnd(jint arg0);
		jint getRangeStart(jint arg0);
		jint hashCode();
		jint indexOf(jint arg0);
		jboolean isEmpty();
		jboolean isFrozen();
		QAndroidJniObject iterator();
		jint matches(__JniBaseClass arg0, jintArray arg1, jint arg2, jboolean arg3);
		jboolean matchesIndexValue(jint arg0);
		QAndroidJniObject ranges();
		QAndroidJniObject remove(jint arg0);
		QAndroidJniObject remove(jstring arg0);
		QAndroidJniObject remove(const QString &arg0);
		QAndroidJniObject remove(jint arg0, jint arg1);
		QAndroidJniObject removeAll(android::icu::text::UnicodeSet arg0);
		QAndroidJniObject removeAll(jstring arg0);
		QAndroidJniObject removeAll(const QString &arg0);
		QAndroidJniObject removeAll(__JniBaseClass arg0);
		QAndroidJniObject removeAllStrings();
		QAndroidJniObject retain(jint arg0);
		QAndroidJniObject retain(jstring arg0);
		QAndroidJniObject retain(const QString &arg0);
		QAndroidJniObject retain(jint arg0, jint arg1);
		QAndroidJniObject retainAll(android::icu::text::UnicodeSet arg0);
		QAndroidJniObject retainAll(jstring arg0);
		QAndroidJniObject retainAll(const QString &arg0);
		QAndroidJniObject retainAll(__JniBaseClass arg0);
		QAndroidJniObject set(android::icu::text::UnicodeSet arg0);
		QAndroidJniObject set(jint arg0, jint arg1);
		jint size();
		jint span(jstring arg0, android::icu::text::UnicodeSet_SpanCondition arg1);
		jint span(const QString &arg0, android::icu::text::UnicodeSet_SpanCondition arg1);
		jint span(jstring arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		jint span(const QString &arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		jint spanBack(jstring arg0, android::icu::text::UnicodeSet_SpanCondition arg1);
		jint spanBack(const QString &arg0, android::icu::text::UnicodeSet_SpanCondition arg1);
		jint spanBack(jstring arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		jint spanBack(const QString &arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2);
		QAndroidJniObject strings();
		jstring toPattern(jboolean arg0);
		jstring toString();
	};
} // namespace android::icu::text

