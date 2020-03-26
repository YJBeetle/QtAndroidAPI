#pragma once

#ifndef ANDROID_ICU_LANG_UCHARACTERDIRECTION
#define ANDROID_ICU_LANG_UCHARACTERDIRECTION

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::lang
{
	class UCharacterDirection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring toString(jint arg0);
	};
} // namespace __jni_impl::android::icu::lang


namespace __jni_impl::android::icu::lang
{
	// Fields
	
	// Constructors
	void UCharacterDirection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.lang.UCharacterDirection",
			"(V)V");
	}
	
	// Methods
	jstring UCharacterDirection::toString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacterDirection",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::lang

namespace android::icu::lang
{
	class UCharacterDirection : public __jni_impl::android::icu::lang::UCharacterDirection
	{
	public:
		UCharacterDirection(QAndroidJniObject obj) { __thiz = obj; }
		UCharacterDirection()
		{
			__constructor();
		}
	};
} // namespace android::icu::lang

#endif // ANDROID_ICU_LANG_UCHARACTERDIRECTION

