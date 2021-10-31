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
	
	UnicodeSet::UnicodeSet(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnicodeSet::UnicodeSet()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"()V"
		);
	}
	UnicodeSet::UnicodeSet(jintArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"([I)V",
			arg0
		);
	}
	UnicodeSet::UnicodeSet(android::icu::text::UnicodeSet &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.__jniObject().object()
		);
	}
	UnicodeSet::UnicodeSet(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UnicodeSet::UnicodeSet(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(II)V",
			arg0,
			arg1
		);
	}
	UnicodeSet::UnicodeSet(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	UnicodeSet::UnicodeSet(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	UnicodeSet::UnicodeSet(jstring arg0, java::text::ParsePosition arg1, __JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	UnicodeSet::UnicodeSet(jstring arg0, java::text::ParsePosition arg1, __JniBaseClass arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	
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
		return __thiz.callObjectMethod(
			"_generatePattern",
			"(Ljava/lang/StringBuffer;Z)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::_generatePattern(java::lang::StringBuffer arg0, jboolean arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"_generatePattern",
			"(Ljava/lang/StringBuffer;ZZ)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject UnicodeSet::add(jint arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::add(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::add(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::add(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::addAll(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"addAll",
			"([Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::addAll(android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"addAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::addAll(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::addAll(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::addAll(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"addAll",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::addAllTo(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addAllTo",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	void UnicodeSet::addMatchSetTo(android::icu::text::UnicodeSet arg0)
	{
		__thiz.callMethod<void>(
			"addMatchSetTo",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::applyIntPropertyValue(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"applyIntPropertyValue",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::applyPattern(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::applyPattern(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;Z)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::applyPattern(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;I)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::applyPropertyAlias(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"applyPropertyAlias",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::applyPropertyAlias(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"applyPropertyAlias",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/text/SymbolTable;)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint UnicodeSet::charAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"charAt",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	jobject UnicodeSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject UnicodeSet::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	QAndroidJniObject UnicodeSet::closeOver(jint arg0)
	{
		return __thiz.callObjectMethod(
			"closeOver",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::compact()
	{
		return __thiz.callObjectMethod(
			"compact",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSet::compareTo(android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/UnicodeSet;)I",
			arg0.__jniObject().object()
		);
	}
	jint UnicodeSet::compareTo(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Iterable;)I",
			arg0.__jniObject().object()
		);
	}
	jint UnicodeSet::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint UnicodeSet::compareTo(android::icu::text::UnicodeSet arg0, android::icu::text::UnicodeSet_ComparisonStyle arg1)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet$ComparisonStyle;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::complement()
	{
		return __thiz.callObjectMethod(
			"complement",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	QAndroidJniObject UnicodeSet::complement(jint arg0)
	{
		return __thiz.callObjectMethod(
			"complement",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::complement(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"complement",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::complement(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"complement",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::complementAll(android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"complementAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::complementAll(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"complementAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	jboolean UnicodeSet::contains(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(I)Z",
			arg0
		);
	}
	jboolean UnicodeSet::contains(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean UnicodeSet::contains(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean UnicodeSet::containsAll(android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UnicodeSet::containsAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/lang/Iterable;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UnicodeSet::containsAll(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean UnicodeSet::containsNone(android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsNone",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UnicodeSet::containsNone(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsNone",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean UnicodeSet::containsNone(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsNone",
			"(Ljava/lang/Iterable;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UnicodeSet::containsNone(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"containsNone",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean UnicodeSet::containsSome(android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsSome",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UnicodeSet::containsSome(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsSome",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean UnicodeSet::containsSome(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsSome",
			"(Ljava/lang/Iterable;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UnicodeSet::containsSome(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"containsSome",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean UnicodeSet::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSet::getRangeCount()
	{
		return __thiz.callMethod<jint>(
			"getRangeCount",
			"()I"
		);
	}
	jint UnicodeSet::getRangeEnd(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRangeEnd",
			"(I)I",
			arg0
		);
	}
	jint UnicodeSet::getRangeStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRangeStart",
			"(I)I",
			arg0
		);
	}
	jint UnicodeSet::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint UnicodeSet::indexOf(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(I)I",
			arg0
		);
	}
	jboolean UnicodeSet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean UnicodeSet::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	QAndroidJniObject UnicodeSet::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint UnicodeSet::matches(__JniBaseClass arg0, jintArray arg1, jint arg2, jboolean arg3)
	{
		return __thiz.callMethod<jint>(
			"matches",
			"(Landroid/icu/text/Replaceable;[IIZ)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean UnicodeSet::matchesIndexValue(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"matchesIndexValue",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::ranges()
	{
		return __thiz.callObjectMethod(
			"ranges",
			"()Ljava/lang/Iterable;"
		);
	}
	QAndroidJniObject UnicodeSet::remove(jint arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::remove(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::remove(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::removeAll(android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"removeAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::removeAll(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"removeAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::removeAll(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"removeAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::removeAllStrings()
	{
		return __thiz.callObjectMethod(
			"removeAllStrings",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	QAndroidJniObject UnicodeSet::retain(jint arg0)
	{
		return __thiz.callObjectMethod(
			"retain",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::retain(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"retain",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::retain(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"retain",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UnicodeSet::retainAll(android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"retainAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::retainAll(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"retainAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet::retainAll(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"retainAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::set(android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"set",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::set(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"set",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	jint UnicodeSet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jint UnicodeSet::span(jstring arg0, android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return __thiz.callMethod<jint>(
			"span",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint UnicodeSet::span(jstring arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return __thiz.callMethod<jint>(
			"span",
			"(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint UnicodeSet::spanBack(jstring arg0, android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return __thiz.callMethod<jint>(
			"spanBack",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint UnicodeSet::spanBack(jstring arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return __thiz.callMethod<jint>(
			"spanBack",
			"(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject UnicodeSet::strings()
	{
		return __thiz.callObjectMethod(
			"strings",
			"()Ljava/util/Collection;"
		);
	}
	jstring UnicodeSet::toPattern(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"(Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UnicodeSet::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

