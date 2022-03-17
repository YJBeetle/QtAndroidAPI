#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "./UnicodeSet_ComparisonStyle.def.hpp"
#include "./UnicodeSet_SpanCondition.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.def.hpp"
#include "../../../java/text/ParsePosition.def.hpp"
#include "./UnicodeSet.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint UnicodeSet::ADD_CASE_MAPPINGS()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"ADD_CASE_MAPPINGS"
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::ALL_CODE_POINTS()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet",
			"ALL_CODE_POINTS",
			"Landroid/icu/text/UnicodeSet;"
		);
	}
	inline jint UnicodeSet::CASE()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"CASE"
		);
	}
	inline jint UnicodeSet::CASE_INSENSITIVE()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"CASE_INSENSITIVE"
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::EMPTY()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet",
			"EMPTY",
			"Landroid/icu/text/UnicodeSet;"
		);
	}
	inline jint UnicodeSet::IGNORE_SPACE()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"IGNORE_SPACE"
		);
	}
	inline jint UnicodeSet::MAX_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"MAX_VALUE"
		);
	}
	inline jint UnicodeSet::MIN_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"MIN_VALUE"
		);
	}
	
	// Constructors
	inline UnicodeSet::UnicodeSet()
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"()V"
		) {}
	inline UnicodeSet::UnicodeSet(JIntArray arg0)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"([I)V",
			arg0.object<jintArray>()
		) {}
	inline UnicodeSet::UnicodeSet(android::icu::text::UnicodeSet &arg0)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		) {}
	inline UnicodeSet::UnicodeSet(JString arg0)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline UnicodeSet::UnicodeSet(jint arg0, jint arg1)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(II)V",
			arg0,
			arg1
		) {}
	inline UnicodeSet::UnicodeSet(JString arg0, jboolean arg1)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline UnicodeSet::UnicodeSet(JString arg0, jint arg1)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline UnicodeSet::UnicodeSet(JString arg0, java::text::ParsePosition arg1, JObject arg2)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	inline UnicodeSet::UnicodeSet(JString arg0, java::text::ParsePosition arg1, JObject arg2, jint arg3)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	inline android::icu::text::UnicodeSet UnicodeSet::from(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSet",
			"from",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::fromAll(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSet",
			"fromAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::StringBuffer UnicodeSet::_generatePattern(java::lang::StringBuffer arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"_generatePattern",
			"(Ljava/lang/StringBuffer;Z)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1
		);
	}
	inline java::lang::StringBuffer UnicodeSet::_generatePattern(java::lang::StringBuffer arg0, jboolean arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"_generatePattern",
			"(Ljava/lang/StringBuffer;ZZ)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::add(jint arg0) const
	{
		return callObjectMethod(
			"add",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::add(JString arg0) const
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::add(JObject arg0) const
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::add(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"add",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::addAll(JArray arg0) const
	{
		return callObjectMethod(
			"addAll",
			"([Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jarray>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::addAll(android::icu::text::UnicodeSet arg0) const
	{
		return callObjectMethod(
			"addAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::addAll(JString arg0) const
	{
		return callObjectMethod(
			"addAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::addAll(JObject arg0) const
	{
		return callObjectMethod(
			"addAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::addAll(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"addAll",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	inline JObject UnicodeSet::addAllTo(JObject arg0) const
	{
		return callObjectMethod(
			"addAllTo",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline void UnicodeSet::addMatchSetTo(android::icu::text::UnicodeSet arg0) const
	{
		callMethod<void>(
			"addMatchSetTo",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::applyIntPropertyValue(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"applyIntPropertyValue",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::applyPattern(JString arg0) const
	{
		return callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::applyPattern(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;Z)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::applyPattern(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;I)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::applyPropertyAlias(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"applyPropertyAlias",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::applyPropertyAlias(JString arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"applyPropertyAlias",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/text/SymbolTable;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jint UnicodeSet::charAt(jint arg0) const
	{
		return callMethod<jint>(
			"charAt",
			"(I)I",
			arg0
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	inline JObject UnicodeSet::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::cloneAsThawed() const
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::closeOver(jint arg0) const
	{
		return callObjectMethod(
			"closeOver",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::compact() const
	{
		return callObjectMethod(
			"compact",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	inline jint UnicodeSet::compareTo(android::icu::text::UnicodeSet arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/UnicodeSet;)I",
			arg0.object()
		);
	}
	inline jint UnicodeSet::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Iterable;)I",
			arg0.object()
		);
	}
	inline jint UnicodeSet::compareTo(android::icu::text::UnicodeSet arg0, android::icu::text::UnicodeSet_ComparisonStyle arg1) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet$ComparisonStyle;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::complement() const
	{
		return callObjectMethod(
			"complement",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::complement(jint arg0) const
	{
		return callObjectMethod(
			"complement",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::complement(JString arg0) const
	{
		return callObjectMethod(
			"complement",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::complement(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"complement",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::complementAll(android::icu::text::UnicodeSet arg0) const
	{
		return callObjectMethod(
			"complementAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::complementAll(JString arg0) const
	{
		return callObjectMethod(
			"complementAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	inline jboolean UnicodeSet::contains(jint arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UnicodeSet::contains(JString arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean UnicodeSet::contains(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean UnicodeSet::containsAll(android::icu::text::UnicodeSet arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.object()
		);
	}
	inline jboolean UnicodeSet::containsAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/lang/Iterable;)Z",
			arg0.object()
		);
	}
	inline jboolean UnicodeSet::containsAll(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean UnicodeSet::containsNone(android::icu::text::UnicodeSet arg0) const
	{
		return callMethod<jboolean>(
			"containsNone",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.object()
		);
	}
	inline jboolean UnicodeSet::containsNone(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsNone",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean UnicodeSet::containsNone(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsNone",
			"(Ljava/lang/Iterable;)Z",
			arg0.object()
		);
	}
	inline jboolean UnicodeSet::containsNone(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"containsNone",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean UnicodeSet::containsSome(android::icu::text::UnicodeSet arg0) const
	{
		return callMethod<jboolean>(
			"containsSome",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.object()
		);
	}
	inline jboolean UnicodeSet::containsSome(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsSome",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean UnicodeSet::containsSome(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsSome",
			"(Ljava/lang/Iterable;)Z",
			arg0.object()
		);
	}
	inline jboolean UnicodeSet::containsSome(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"containsSome",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean UnicodeSet::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::freeze() const
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	inline jint UnicodeSet::getRangeCount() const
	{
		return callMethod<jint>(
			"getRangeCount",
			"()I"
		);
	}
	inline jint UnicodeSet::getRangeEnd(jint arg0) const
	{
		return callMethod<jint>(
			"getRangeEnd",
			"(I)I",
			arg0
		);
	}
	inline jint UnicodeSet::getRangeStart(jint arg0) const
	{
		return callMethod<jint>(
			"getRangeStart",
			"(I)I",
			arg0
		);
	}
	inline jint UnicodeSet::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint UnicodeSet::indexOf(jint arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(I)I",
			arg0
		);
	}
	inline jboolean UnicodeSet::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline jboolean UnicodeSet::isFrozen() const
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	inline JObject UnicodeSet::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jint UnicodeSet::matches(JObject arg0, JIntArray arg1, jint arg2, jboolean arg3) const
	{
		return callMethod<jint>(
			"matches",
			"(Landroid/icu/text/Replaceable;[IIZ)I",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2,
			arg3
		);
	}
	inline jboolean UnicodeSet::matchesIndexValue(jint arg0) const
	{
		return callMethod<jboolean>(
			"matchesIndexValue",
			"(I)Z",
			arg0
		);
	}
	inline JObject UnicodeSet::ranges() const
	{
		return callObjectMethod(
			"ranges",
			"()Ljava/lang/Iterable;"
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::remove(jint arg0) const
	{
		return callObjectMethod(
			"remove",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::remove(JString arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::remove(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"remove",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::removeAll(android::icu::text::UnicodeSet arg0) const
	{
		return callObjectMethod(
			"removeAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::removeAll(JString arg0) const
	{
		return callObjectMethod(
			"removeAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::removeAll(JObject arg0) const
	{
		return callObjectMethod(
			"removeAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::removeAllStrings() const
	{
		return callObjectMethod(
			"removeAllStrings",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::retain(jint arg0) const
	{
		return callObjectMethod(
			"retain",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::retain(JString arg0) const
	{
		return callObjectMethod(
			"retain",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::retain(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"retain",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::retainAll(android::icu::text::UnicodeSet arg0) const
	{
		return callObjectMethod(
			"retainAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::retainAll(JString arg0) const
	{
		return callObjectMethod(
			"retainAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::retainAll(JObject arg0) const
	{
		return callObjectMethod(
			"retainAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::set(android::icu::text::UnicodeSet arg0) const
	{
		return callObjectMethod(
			"set",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSet::set(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"set",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	inline jint UnicodeSet::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline jint UnicodeSet::span(JString arg0, android::icu::text::UnicodeSet_SpanCondition arg1) const
	{
		return callMethod<jint>(
			"span",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint UnicodeSet::span(JString arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2) const
	{
		return callMethod<jint>(
			"span",
			"(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline jint UnicodeSet::spanBack(JString arg0, android::icu::text::UnicodeSet_SpanCondition arg1) const
	{
		return callMethod<jint>(
			"spanBack",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint UnicodeSet::spanBack(JString arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2) const
	{
		return callMethod<jint>(
			"spanBack",
			"(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline JObject UnicodeSet::strings() const
	{
		return callObjectMethod(
			"strings",
			"()Ljava/util/Collection;"
		);
	}
	inline JString UnicodeSet::toPattern(jboolean arg0) const
	{
		return callObjectMethod(
			"toPattern",
			"(Z)Ljava/lang/String;",
			arg0
		);
	}
	inline JString UnicodeSet::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "./UnicodeFilter.hpp"

