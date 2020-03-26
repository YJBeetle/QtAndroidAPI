#pragma once

#ifndef ANDROID_ICU_TEXT_COLLATIONKEY_BOUNDMODE
#define ANDROID_ICU_TEXT_COLLATIONKEY_BOUNDMODE

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class CollationKey_BoundMode : public __JniBaseClass
	{
	public:
		// Fields
		static jint LOWER();
		static jint UPPER();
		static jint UPPER_LONG();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	jint CollationKey_BoundMode::LOWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"LOWER"
		);
	}
	jint CollationKey_BoundMode::UPPER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"UPPER"
		);
	}
	jint CollationKey_BoundMode::UPPER_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"UPPER_LONG"
		);
	}
	
	// Constructors
	void CollationKey_BoundMode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CollationKey$BoundMode",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class CollationKey_BoundMode : public __jni_impl::android::icu::text::CollationKey_BoundMode
	{
	public:
		CollationKey_BoundMode(QAndroidJniObject obj) { __thiz = obj; }
		CollationKey_BoundMode()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_COLLATIONKEY_BOUNDMODE

