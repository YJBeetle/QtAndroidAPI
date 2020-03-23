#pragma once

#ifndef ANDROID_ICU_LANG_UCHARACTERCATEGORY
#define ANDROID_ICU_LANG_UCHARACTERCATEGORY

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::lang
{
	class UCharacterCategory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject toString(jint arg0);
	};
} // namespace __jni_impl::android::icu::lang


namespace __jni_impl::android::icu::lang
{
	// Fields
	
	// Constructors
	void UCharacterCategory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.lang.UCharacterCategory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UCharacterCategory::toString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacterCategory",
			"toString",
			"(I)Ljava/lang/String;",
			arg0);
	}
} // namespace __jni_impl::android::icu::lang

namespace android::icu::lang
{
	class UCharacterCategory : public __jni_impl::android::icu::lang::UCharacterCategory
	{
	public:
		UCharacterCategory(QAndroidJniObject obj) { __thiz = obj; }
		UCharacterCategory()
		{
			__constructor();
		}
	};
} // namespace android::icu::lang

#endif // ANDROID_ICU_LANG_UCHARACTERCATEGORY

