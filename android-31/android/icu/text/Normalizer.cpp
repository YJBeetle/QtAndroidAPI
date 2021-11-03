#include "../../../JCharArray.hpp"
#include "./Normalizer_QuickCheckResult.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Normalizer.hpp"

namespace android::icu::text
{
	// Fields
	jint Normalizer::COMPARE_CODE_POINT_ORDER()
	{
		return getStaticField<jint>(
			"android.icu.text.Normalizer",
			"COMPARE_CODE_POINT_ORDER"
		);
	}
	jint Normalizer::COMPARE_IGNORE_CASE()
	{
		return getStaticField<jint>(
			"android.icu.text.Normalizer",
			"COMPARE_IGNORE_CASE"
		);
	}
	jint Normalizer::FOLD_CASE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.icu.text.Normalizer",
			"FOLD_CASE_DEFAULT"
		);
	}
	jint Normalizer::FOLD_CASE_EXCLUDE_SPECIAL_I()
	{
		return getStaticField<jint>(
			"android.icu.text.Normalizer",
			"FOLD_CASE_EXCLUDE_SPECIAL_I"
		);
	}
	jint Normalizer::INPUT_IS_FCD()
	{
		return getStaticField<jint>(
			"android.icu.text.Normalizer",
			"INPUT_IS_FCD"
		);
	}
	android::icu::text::Normalizer_QuickCheckResult Normalizer::MAYBE()
	{
		return getStaticObjectField(
			"android.icu.text.Normalizer",
			"MAYBE",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	android::icu::text::Normalizer_QuickCheckResult Normalizer::NO()
	{
		return getStaticObjectField(
			"android.icu.text.Normalizer",
			"NO",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	android::icu::text::Normalizer_QuickCheckResult Normalizer::YES()
	{
		return getStaticObjectField(
			"android.icu.text.Normalizer",
			"YES",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	
	// QAndroidJniObject forward
	Normalizer::Normalizer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Normalizer::compare(JCharArray arg0, JCharArray arg1, jint arg2)
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
	jint Normalizer::compare(jint arg0, jint arg1, jint arg2)
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
	jint Normalizer::compare(jint arg0, JString arg1, jint arg2)
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
	jint Normalizer::compare(JString arg0, JString arg1, jint arg2)
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
	jint Normalizer::compare(JCharArray arg0, jint arg1, jint arg2, JCharArray arg3, jint arg4, jint arg5, jint arg6)
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
	JObject Normalizer::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
} // namespace android::icu::text

