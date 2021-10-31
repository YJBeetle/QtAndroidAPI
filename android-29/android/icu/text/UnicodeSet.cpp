#include "./UnicodeSet_ComparisonStyle.hpp"
#include "./UnicodeSet_SpanCondition.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "./UnicodeSet.hpp"

namespace android::icu::text
{
	// Fields
	jint UnicodeSet::ADD_CASE_MAPPINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"ADD_CASE_MAPPINGS"
		);
	}
	QAndroidJniObject UnicodeSet::ALL_CODE_POINTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet",
			"ALL_CODE_POINTS",
			"Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSet::CASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"CASE"
		);
	}
	jint UnicodeSet::CASE_INSENSITIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"CASE_INSENSITIVE"
		);
	}
	QAndroidJniObject UnicodeSet::EMPTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet",
			"EMPTY",
			"Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSet::IGNORE_SPACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"IGNORE_SPACE"
		);
	}
	jint UnicodeSet::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"MAX_VALUE"
		);
	}
	jint UnicodeSet::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"MIN_VALUE"
		);
	}
	
	// QAndroidJniObject forward
	UnicodeSet::UnicodeSet(QAndroidJniObject obj) : android::icu::text::UnicodeFilter(obj) {}
	
	// Constructors
	UnicodeSet::UnicodeSet()
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"()V"
		) {}
	UnicodeSet::UnicodeSet(jintArray arg0)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"([I)V",
			arg0
		) {}
	UnicodeSet::UnicodeSet(android::icu::text::UnicodeSet &arg0)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		) {}
	UnicodeSet::UnicodeSet(jstring arg0)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	UnicodeSet::UnicodeSet(jint arg0, jint arg1)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(II)V",
			arg0,
			arg1
		) {}
	UnicodeSet::UnicodeSet(jstring arg0, jboolean arg1)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		) {}
	UnicodeSet::UnicodeSet(jstring arg0, jint arg1)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	UnicodeSet::UnicodeSet(jstring arg0, java::text::ParsePosition arg1, __JniBaseClass arg2)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	UnicodeSet::UnicodeSet(jstring arg0, java::text::ParsePosition arg1, __JniBaseClass arg2, jint arg3)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;I)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	QAndroidJniObject UnicodeSet::from(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet",
			"from",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::fromAll(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet",
			"fromAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::_generatePattern(java::lang::StringBuffer arg0, jboolean arg1)
	{
		return callObjectMethod(
			"_generatePattern",
			"(Ljava/lang/StringBuffer;Z)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::_generatePattern(java::lang::StringBuffer arg0, jboolean arg1, jboolean arg2)
	{
		return callObjectMethod(
			"_generatePattern",
			"(Ljava/lang/StringBuffer;ZZ)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject UnicodeSet::add(jint arg0)
	{
		return callObjectMethod(
			"add",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::add(jstring arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::add(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	QAndroidJniObject UnicodeSet::add(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"add",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::addAll(jarray arg0)
	{
		return callObjectMethod(
			"addAll",
			"([Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::addAll(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"addAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	QAndroidJniObject UnicodeSet::addAll(jstring arg0)
	{
		return callObjectMethod(
			"addAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::addAll(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	QAndroidJniObject UnicodeSet::addAll(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"addAll",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::addAllTo(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addAllTo",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	void UnicodeSet::addMatchSetTo(android::icu::text::UnicodeSet arg0)
	{
		callMethod<void>(
			"addMatchSetTo",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		);
	}
	QAndroidJniObject UnicodeSet::applyIntPropertyValue(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"applyIntPropertyValue",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::applyPattern(jstring arg0)
	{
		return callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::applyPattern(jstring arg0, jboolean arg1)
	{
		return callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;Z)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::applyPattern(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;I)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::applyPropertyAlias(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"applyPropertyAlias",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::applyPropertyAlias(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"applyPropertyAlias",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/text/SymbolTable;)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint UnicodeSet::charAt(jint arg0)
	{
		return callMethod<jint>(
			"charAt",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::clear()
	{
		return callObjectMethod(
			"clear",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	jobject UnicodeSet::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject UnicodeSet::cloneAsThawed()
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	QAndroidJniObject UnicodeSet::closeOver(jint arg0)
	{
		return callObjectMethod(
			"closeOver",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::compact()
	{
		return callObjectMethod(
			"compact",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSet::compareTo(android::icu::text::UnicodeSet arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/UnicodeSet;)I",
			arg0.object()
		);
	}
	jint UnicodeSet::compareTo(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Iterable;)I",
			arg0.object()
		);
	}
	jint UnicodeSet::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint UnicodeSet::compareTo(android::icu::text::UnicodeSet arg0, android::icu::text::UnicodeSet_ComparisonStyle arg1)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet$ComparisonStyle;)I",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject UnicodeSet::complement()
	{
		return callObjectMethod(
			"complement",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	QAndroidJniObject UnicodeSet::complement(jint arg0)
	{
		return callObjectMethod(
			"complement",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::complement(jstring arg0)
	{
		return callObjectMethod(
			"complement",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::complement(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"complement",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::complementAll(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"complementAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	QAndroidJniObject UnicodeSet::complementAll(jstring arg0)
	{
		return callObjectMethod(
			"complementAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	jboolean UnicodeSet::contains(jint arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(I)Z",
			arg0
		);
	}
	jboolean UnicodeSet::contains(jstring arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean UnicodeSet::contains(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean UnicodeSet::containsAll(android::icu::text::UnicodeSet arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.object()
		);
	}
	jboolean UnicodeSet::containsAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/lang/Iterable;)Z",
			arg0.object()
		);
	}
	jboolean UnicodeSet::containsAll(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean UnicodeSet::containsNone(android::icu::text::UnicodeSet arg0)
	{
		return callMethod<jboolean>(
			"containsNone",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.object()
		);
	}
	jboolean UnicodeSet::containsNone(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsNone",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean UnicodeSet::containsNone(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"containsNone",
			"(Ljava/lang/Iterable;)Z",
			arg0.object()
		);
	}
	jboolean UnicodeSet::containsNone(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"containsNone",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean UnicodeSet::containsSome(android::icu::text::UnicodeSet arg0)
	{
		return callMethod<jboolean>(
			"containsSome",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.object()
		);
	}
	jboolean UnicodeSet::containsSome(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsSome",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean UnicodeSet::containsSome(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"containsSome",
			"(Ljava/lang/Iterable;)Z",
			arg0.object()
		);
	}
	jboolean UnicodeSet::containsSome(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"containsSome",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean UnicodeSet::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::freeze()
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSet::getRangeCount()
	{
		return callMethod<jint>(
			"getRangeCount",
			"()I"
		);
	}
	jint UnicodeSet::getRangeEnd(jint arg0)
	{
		return callMethod<jint>(
			"getRangeEnd",
			"(I)I",
			arg0
		);
	}
	jint UnicodeSet::getRangeStart(jint arg0)
	{
		return callMethod<jint>(
			"getRangeStart",
			"(I)I",
			arg0
		);
	}
	jint UnicodeSet::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint UnicodeSet::indexOf(jint arg0)
	{
		return callMethod<jint>(
			"indexOf",
			"(I)I",
			arg0
		);
	}
	jboolean UnicodeSet::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean UnicodeSet::isFrozen()
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	QAndroidJniObject UnicodeSet::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint UnicodeSet::matches(__JniBaseClass arg0, jintArray arg1, jint arg2, jboolean arg3)
	{
		return callMethod<jint>(
			"matches",
			"(Landroid/icu/text/Replaceable;[IIZ)I",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean UnicodeSet::matchesIndexValue(jint arg0)
	{
		return callMethod<jboolean>(
			"matchesIndexValue",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::ranges()
	{
		return callObjectMethod(
			"ranges",
			"()Ljava/lang/Iterable;"
		);
	}
	QAndroidJniObject UnicodeSet::remove(jint arg0)
	{
		return callObjectMethod(
			"remove",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::remove(jstring arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::remove(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"remove",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::removeAll(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"removeAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	QAndroidJniObject UnicodeSet::removeAll(jstring arg0)
	{
		return callObjectMethod(
			"removeAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::removeAll(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"removeAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	QAndroidJniObject UnicodeSet::removeAllStrings()
	{
		return callObjectMethod(
			"removeAllStrings",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	QAndroidJniObject UnicodeSet::retain(jint arg0)
	{
		return callObjectMethod(
			"retain",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::retain(jstring arg0)
	{
		return callObjectMethod(
			"retain",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::retain(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"retain",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::retainAll(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"retainAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	QAndroidJniObject UnicodeSet::retainAll(jstring arg0)
	{
		return callObjectMethod(
			"retainAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::retainAll(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"retainAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	QAndroidJniObject UnicodeSet::set(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"set",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	QAndroidJniObject UnicodeSet::set(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"set",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	jint UnicodeSet::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jint UnicodeSet::span(jstring arg0, android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return callMethod<jint>(
			"span",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1.object()
		);
	}
	jint UnicodeSet::span(jstring arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return callMethod<jint>(
			"span",
			"(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint UnicodeSet::spanBack(jstring arg0, android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return callMethod<jint>(
			"spanBack",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1.object()
		);
	}
	jint UnicodeSet::spanBack(jstring arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return callMethod<jint>(
			"spanBack",
			"(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject UnicodeSet::strings()
	{
		return callObjectMethod(
			"strings",
			"()Ljava/util/Collection;"
		);
	}
	jstring UnicodeSet::toPattern(jboolean arg0)
	{
		return callObjectMethod(
			"toPattern",
			"(Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UnicodeSet::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

