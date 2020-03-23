#pragma once

#ifndef ANDROID_ICU_TEXT_UFORMAT
#define ANDROID_ICU_TEXT_UFORMAT

#include "../../../java/text/Format.hpp"


namespace __jni_impl::android::icu::text
{
	class UFormat : public __jni_impl::java::text::Format
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
	void UFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UFormat",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class UFormat : public __jni_impl::android::icu::text::UFormat
	{
	public:
		UFormat(QAndroidJniObject obj) { __thiz = obj; }
		UFormat()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_UFORMAT

