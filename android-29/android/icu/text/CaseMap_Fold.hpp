#pragma once

#ifndef ANDROID_ICU_TEXT_CASEMAP_FOLD
#define ANDROID_ICU_TEXT_CASEMAP_FOLD

#include "../../../__JniBaseClass.hpp"
#include "CaseMap.hpp"

namespace __jni_impl::android::icu::text
{
	class Edits;
}
namespace __jni_impl::android::icu::text
{
	class CaseMap;
}

namespace __jni_impl::android::icu::text
{
	class CaseMap_Fold : public __jni_impl::android::icu::text::CaseMap
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject apply(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::icu::text::Edits arg2);
		QAndroidJniObject apply(jstring arg0);
		QAndroidJniObject omitUnchangedText();
		QAndroidJniObject turkic();
	};
} // namespace __jni_impl::android::icu::text

#include "Edits.hpp"
#include "CaseMap.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void CaseMap_Fold::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CaseMap$Fold",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CaseMap_Fold::apply(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::icu::text::Edits arg2)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject CaseMap_Fold::apply(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject CaseMap_Fold::omitUnchangedText()
	{
		return __thiz.callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Fold;");
	}
	QAndroidJniObject CaseMap_Fold::turkic()
	{
		return __thiz.callObjectMethod(
			"turkic",
			"()Landroid/icu/text/CaseMap$Fold;");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class CaseMap_Fold : public __jni_impl::android::icu::text::CaseMap_Fold
	{
	public:
		CaseMap_Fold(QAndroidJniObject obj) { __thiz = obj; }
		CaseMap_Fold()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_CASEMAP_FOLD

