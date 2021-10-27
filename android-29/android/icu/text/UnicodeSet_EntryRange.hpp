#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class UnicodeSet_EntryRange : public __JniBaseClass
	{
	public:
		// Fields
		jint codepoint();
		jint codepointEnd();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	jint UnicodeSet_EntryRange::codepoint()
	{
		return __thiz.getField<jint>(
			"codepoint"
		);
	}
	jint UnicodeSet_EntryRange::codepointEnd()
	{
		return __thiz.getField<jint>(
			"codepointEnd"
		);
	}
	
	// Constructors
	void UnicodeSet_EntryRange::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet$EntryRange",
			"(V)V");
	}
	
	// Methods
	jstring UnicodeSet_EntryRange::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class UnicodeSet_EntryRange : public __jni_impl::android::icu::text::UnicodeSet_EntryRange
	{
	public:
		UnicodeSet_EntryRange(QAndroidJniObject obj) { __thiz = obj; }
		UnicodeSet_EntryRange()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

