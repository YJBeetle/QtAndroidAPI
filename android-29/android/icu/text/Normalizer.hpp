#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class Normalizer_QuickCheckResult;
}

namespace __jni_impl::android::icu::text
{
	class Normalizer : public __JniBaseClass
	{
	public:
		// Fields
		static jint COMPARE_CODE_POINT_ORDER();
		static jint COMPARE_IGNORE_CASE();
		static jint FOLD_CASE_DEFAULT();
		static jint FOLD_CASE_EXCLUDE_SPECIAL_I();
		static jint INPUT_IS_FCD();
		static QAndroidJniObject MAYBE();
		static QAndroidJniObject NO();
		static QAndroidJniObject YES();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint compare(jcharArray arg0, jcharArray arg1, jint arg2);
		static jint compare(jint arg0, jint arg1, jint arg2);
		static jint compare(jint arg0, jstring arg1, jint arg2);
		static jint compare(jint arg0, const QString &arg1, jint arg2);
		static jint compare(jstring arg0, jstring arg1, jint arg2);
		static jint compare(const QString &arg0, const QString &arg1, jint arg2);
		static jint compare(jcharArray arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4, jint arg5, jint arg6);
		jobject clone();
	};
} // namespace __jni_impl::android::icu::text

#include "Normalizer_QuickCheckResult.hpp"

namespace __jni_impl::android::icu::text
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
	QAndroidJniObject Normalizer::MAYBE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer",
			"MAYBE",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	QAndroidJniObject Normalizer::NO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer",
			"NO",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	QAndroidJniObject Normalizer::YES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer",
			"YES",
			"Landroid/icu/text/Normalizer$QuickCheckResult;"
		);
	}
	
	// Constructors
	void Normalizer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Normalizer",
			"(V)V");
	}
	
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
	jint Normalizer::compare(jint arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"(ILjava/lang/String;I)I",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
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
	jint Normalizer::compare(const QString &arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.Normalizer",
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
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
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class Normalizer : public __jni_impl::android::icu::text::Normalizer
	{
	public:
		Normalizer(QAndroidJniObject obj) { __thiz = obj; }
		Normalizer()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

