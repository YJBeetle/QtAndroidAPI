#pragma once

#include "../../../JCharArray.hpp"
#include "./Normalizer_QuickCheckResult.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Normalizer.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint Normalizer::COMPARE_CODE_POINT_ORDER()
	{
		return getStaticField<jint>(
			"android.icu.text.Normalizer",
			"COMPARE_CODE_POINT_ORDER"
		);
	}
	inline jint Normalizer::COMPARE_IGNORE_CASE()
	{
		return getStaticField<jint>(
			"android.icu.text.Normalizer",
			"COMPARE_IGNORE_CASE"
		);
	}
	inline jint Normalizer::FOLD_CASE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.icu.text.Normalizer",
			"FOLD_CASE_DEFAULT"
		);
	}
	inline jint Normalizer::FOLD_CASE_EXCLUDE_SPECIAL_I()
	{
		return getStaticField<jint>(
			"android.icu.text.Normalizer",
			"FOLD_CASE_EXCLUDE_SPECIAL_I"
		);
	}
	inline jint Normalizer::INPUT_IS_FCD()
	{
		return getStaticField<jint>(
			"android.icu.text.Normalizer",
			"INPUT_IS_FCD"
		);
	}
	inline android::icu::text::Normalizer_QuickCheckResult Normalizer::MAYBE()
	{
		return getStaticObjectField(
			"android.icu.text.Normalizer",
			"MAYBE",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	inline android::icu::text::Normalizer_QuickCheckResult Normalizer::NO()
	{
		return getStaticObjectField(
			"android.icu.text.Normalizer",
			"NO",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	inline android::icu::text::Normalizer_QuickCheckResult Normalizer::YES()
	{
		return getStaticObjectField(
			"android.icu.text.Normalizer",
			"YES",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Normalizer::compare(JCharArray arg0, JCharArray arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"([C[CI)I",
			arg0.object<jcharArray>(),
			arg1.object<jcharArray>(),
			arg2
		);
	}
	inline jint Normalizer::compare(jint arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint Normalizer::compare(jint arg0, JString arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"(ILjava/lang/String;I)I",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jint Normalizer::compare(JString arg0, JString arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jint Normalizer::compare(JCharArray arg0, jint arg1, jint arg2, JCharArray arg3, jint arg4, jint arg5, jint arg6)
	{
		return callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"([CII[CIII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object<jcharArray>(),
			arg4,
			arg5,
			arg6
		);
	}
	inline JObject Normalizer::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
} // namespace android::icu::text

// Base class headers

