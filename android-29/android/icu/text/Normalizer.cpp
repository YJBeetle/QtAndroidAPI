#include "./Normalizer_QuickCheckResult.hpp"
#include "./Normalizer.hpp"

namespace android::icu::text
{
	// Fields
	jint Normalizer::COMPARE_CODE_POINT_ORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Normalizer",
			"COMPARE_CODE_POINT_ORDER"
		);
	}
	jint Normalizer::COMPARE_IGNORE_CASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Normalizer",
			"COMPARE_IGNORE_CASE"
		);
	}
	jint Normalizer::FOLD_CASE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Normalizer",
			"FOLD_CASE_DEFAULT"
		);
	}
	jint Normalizer::FOLD_CASE_EXCLUDE_SPECIAL_I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Normalizer",
			"FOLD_CASE_EXCLUDE_SPECIAL_I"
		);
	}
	jint Normalizer::INPUT_IS_FCD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Normalizer",
			"INPUT_IS_FCD"
		);
	}
	android::icu::text::Normalizer_QuickCheckResult Normalizer::MAYBE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer",
			"MAYBE",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	android::icu::text::Normalizer_QuickCheckResult Normalizer::NO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer",
			"NO",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	android::icu::text::Normalizer_QuickCheckResult Normalizer::YES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer",
			"YES",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	
	// QAndroidJniObject forward
	Normalizer::Normalizer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint Normalizer::compare(jcharArray arg0, jcharArray arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"([C[CI)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Normalizer::compare(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Normalizer::compare(jint arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"(ILjava/lang/String;I)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Normalizer::compare(jstring arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;I)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Normalizer::compare(jcharArray arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4, jint arg5, jint arg6)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"([CII[CIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	jobject Normalizer::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace android::icu::text

