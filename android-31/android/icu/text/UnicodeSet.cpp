#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "./UnicodeSet_ComparisonStyle.hpp"
#include "./UnicodeSet_SpanCondition.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "./UnicodeSet.hpp"

namespace android::icu::text
{
	// Fields
	jint UnicodeSet::ADD_CASE_MAPPINGS()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"ADD_CASE_MAPPINGS"
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::ALL_CODE_POINTS()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet",
			"ALL_CODE_POINTS",
			"Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSet::CASE()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"CASE"
		);
	}
	jint UnicodeSet::CASE_INSENSITIVE()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"CASE_INSENSITIVE"
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::EMPTY()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet",
			"EMPTY",
			"Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSet::IGNORE_SPACE()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"IGNORE_SPACE"
		);
	}
	jint UnicodeSet::MAX_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"MAX_VALUE"
		);
	}
	jint UnicodeSet::MIN_VALUE()
	{
		return getStaticField<jint>(
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
	UnicodeSet::UnicodeSet(JIntArray arg0)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"([I)V",
			arg0.object<jintArray>()
		) {}
	UnicodeSet::UnicodeSet(android::icu::text::UnicodeSet &arg0)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		) {}
	UnicodeSet::UnicodeSet(JString arg0)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	UnicodeSet::UnicodeSet(jint arg0, jint arg1)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(II)V",
			arg0,
			arg1
		) {}
	UnicodeSet::UnicodeSet(JString arg0, jboolean arg1)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	UnicodeSet::UnicodeSet(JString arg0, jint arg1)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	UnicodeSet::UnicodeSet(JString arg0, java::text::ParsePosition arg1, JObject arg2)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	UnicodeSet::UnicodeSet(JString arg0, java::text::ParsePosition arg1, JObject arg2, jint arg3)
		: android::icu::text::UnicodeFilter(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	android::icu::text::UnicodeSet UnicodeSet::from(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSet",
			"from",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::fromAll(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSet",
			"fromAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	java::lang::StringBuffer UnicodeSet::_generatePattern(java::lang::StringBuffer arg0, jboolean arg1)
	{
		return callObjectMethod(
			"_generatePattern",
			"(Ljava/lang/StringBuffer;Z)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1
		);
	}
	java::lang::StringBuffer UnicodeSet::_generatePattern(java::lang::StringBuffer arg0, jboolean arg1, jboolean arg2)
	{
		return callObjectMethod(
			"_generatePattern",
			"(Ljava/lang/StringBuffer;ZZ)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::add(jint arg0)
	{
		return callObjectMethod(
			"add",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::add(JString arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::add(JObject arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::add(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"add",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::addAll(JArray arg0)
	{
		return callObjectMethod(
			"addAll",
			"([Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jarray>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::addAll(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"addAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::addAll(JString arg0)
	{
		return callObjectMethod(
			"addAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::addAll(JObject arg0)
	{
		return callObjectMethod(
			"addAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::addAll(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"addAll",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	JObject UnicodeSet::addAllTo(JObject arg0)
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
	android::icu::text::UnicodeSet UnicodeSet::applyIntPropertyValue(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"applyIntPropertyValue",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::applyPattern(JString arg0)
	{
		return callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::applyPattern(JString arg0, jboolean arg1)
	{
		return callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;Z)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::applyPattern(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;I)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::applyPropertyAlias(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"applyPropertyAlias",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::applyPropertyAlias(JString arg0, JString arg1, JObject arg2)
	{
		return callObjectMethod(
			"applyPropertyAlias",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/text/SymbolTable;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
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
	android::icu::text::UnicodeSet UnicodeSet::clear()
	{
		return callObjectMethod(
			"clear",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	JObject UnicodeSet::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::cloneAsThawed()
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::closeOver(jint arg0)
	{
		return callObjectMethod(
			"closeOver",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::compact()
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
	jint UnicodeSet::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Iterable;)I",
			arg0.object()
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
	android::icu::text::UnicodeSet UnicodeSet::complement()
	{
		return callObjectMethod(
			"complement",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::complement(jint arg0)
	{
		return callObjectMethod(
			"complement",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::complement(JString arg0)
	{
		return callObjectMethod(
			"complement",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::complement(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"complement",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::complementAll(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"complementAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::complementAll(JString arg0)
	{
		return callObjectMethod(
			"complementAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
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
	jboolean UnicodeSet::contains(JString arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
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
	jboolean UnicodeSet::containsAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/lang/Iterable;)Z",
			arg0.object()
		);
	}
	jboolean UnicodeSet::containsAll(JString arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
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
	jboolean UnicodeSet::containsNone(JString arg0)
	{
		return callMethod<jboolean>(
			"containsNone",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean UnicodeSet::containsNone(JObject arg0)
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
	jboolean UnicodeSet::containsSome(JString arg0)
	{
		return callMethod<jboolean>(
			"containsSome",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean UnicodeSet::containsSome(JObject arg0)
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
	jboolean UnicodeSet::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::freeze()
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
	JObject UnicodeSet::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint UnicodeSet::matches(JObject arg0, JIntArray arg1, jint arg2, jboolean arg3)
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
	jboolean UnicodeSet::matchesIndexValue(jint arg0)
	{
		return callMethod<jboolean>(
			"matchesIndexValue",
			"(I)Z",
			arg0
		);
	}
	JObject UnicodeSet::ranges()
	{
		return callObjectMethod(
			"ranges",
			"()Ljava/lang/Iterable;"
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::remove(jint arg0)
	{
		return callObjectMethod(
			"remove",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::remove(JString arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::remove(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"remove",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::removeAll(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"removeAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::removeAll(JString arg0)
	{
		return callObjectMethod(
			"removeAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::removeAll(JObject arg0)
	{
		return callObjectMethod(
			"removeAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::removeAllStrings()
	{
		return callObjectMethod(
			"removeAllStrings",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::retain(jint arg0)
	{
		return callObjectMethod(
			"retain",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::retain(JString arg0)
	{
		return callObjectMethod(
			"retain",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::retain(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"retain",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::retainAll(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"retainAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::retainAll(JString arg0)
	{
		return callObjectMethod(
			"retainAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::retainAll(JObject arg0)
	{
		return callObjectMethod(
			"retainAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::set(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"set",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.object()
		);
	}
	android::icu::text::UnicodeSet UnicodeSet::set(jint arg0, jint arg1)
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
	jint UnicodeSet::span(JString arg0, android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return callMethod<jint>(
			"span",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jint UnicodeSet::span(JString arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return callMethod<jint>(
			"span",
			"(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	jint UnicodeSet::spanBack(JString arg0, android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return callMethod<jint>(
			"spanBack",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jint UnicodeSet::spanBack(JString arg0, jint arg1, android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return callMethod<jint>(
			"spanBack",
			"(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	JObject UnicodeSet::strings()
	{
		return callObjectMethod(
			"strings",
			"()Ljava/util/Collection;"
		);
	}
	JString UnicodeSet::toPattern(jboolean arg0)
	{
		return callObjectMethod(
			"toPattern",
			"(Z)Ljava/lang/String;",
			arg0
		);
	}
	JString UnicodeSet::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

