#pragma once

#ifndef ANDROID_ICU_LANG_UCHARACTERENUMS
#define ANDROID_ICU_LANG_UCHARACTERENUMS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::lang
{
	class UCharacterEnums : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::icu::lang


namespace __jni_impl::android::icu::lang
{
	// Fields
	
	// Constructors
	void UCharacterEnums::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.lang.UCharacterEnums",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::icu::lang

namespace android::icu::lang
{
	class UCharacterEnums : public __jni_impl::android::icu::lang::UCharacterEnums
	{
	public:
		UCharacterEnums(QAndroidJniObject obj) { __thiz = obj; }
		UCharacterEnums()
		{
			__constructor();
		}
	};
} // namespace android::icu::lang

#endif // ANDROID_ICU_LANG_UCHARACTERENUMS

