#pragma once

#ifndef ANDROID_ICU_TEXT_IDNA_INFO
#define ANDROID_ICU_TEXT_IDNA_INFO

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class IDNA_Info : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isTransitionalDifferent();
		jboolean hasErrors();
		QAndroidJniObject getErrors();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void IDNA_Info::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.IDNA$Info",
			"()V");
	}
	
	// Methods
	jboolean IDNA_Info::isTransitionalDifferent()
	{
		return __thiz.callMethod<jboolean>(
			"isTransitionalDifferent",
			"()Z"
		);
	}
	jboolean IDNA_Info::hasErrors()
	{
		return __thiz.callMethod<jboolean>(
			"hasErrors",
			"()Z"
		);
	}
	QAndroidJniObject IDNA_Info::getErrors()
	{
		return __thiz.callObjectMethod(
			"getErrors",
			"()Ljava/util/Set;"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class IDNA_Info : public __jni_impl::android::icu::text::IDNA_Info
	{
	public:
		IDNA_Info(QAndroidJniObject obj) { __thiz = obj; }
		IDNA_Info()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_IDNA_INFO

