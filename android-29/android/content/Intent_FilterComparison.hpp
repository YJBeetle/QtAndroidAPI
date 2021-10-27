#pragma once

#ifndef ANDROID_CONTENT_INTENT_FILTERCOMPARISON
#define ANDROID_CONTENT_INTENT_FILTERCOMPARISON

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::content
{
	class Intent_FilterComparison : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Intent arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getIntent();
		jint hashCode();
	};
} // namespace __jni_impl::android::content

#include "Intent.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void Intent_FilterComparison::__constructor(__jni_impl::android::content::Intent arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.Intent$FilterComparison",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean Intent_FilterComparison::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Intent_FilterComparison::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint Intent_FilterComparison::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class Intent_FilterComparison : public __jni_impl::android::content::Intent_FilterComparison
	{
	public:
		Intent_FilterComparison(QAndroidJniObject obj) { __thiz = obj; }
		Intent_FilterComparison(__jni_impl::android::content::Intent arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_INTENT_FILTERCOMPARISON

