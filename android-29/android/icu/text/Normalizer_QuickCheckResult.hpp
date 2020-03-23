#pragma once

#ifndef ANDROID_ICU_TEXT_NORMALIZER_QUICKCHECKRESULT
#define ANDROID_ICU_TEXT_NORMALIZER_QUICKCHECKRESULT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class Normalizer_QuickCheckResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void Normalizer_QuickCheckResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Normalizer$QuickCheckResult",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class Normalizer_QuickCheckResult : public __jni_impl::android::icu::text::Normalizer_QuickCheckResult
	{
	public:
		Normalizer_QuickCheckResult(QAndroidJniObject obj) { __thiz = obj; }
		Normalizer_QuickCheckResult()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_NORMALIZER_QUICKCHECKRESULT

