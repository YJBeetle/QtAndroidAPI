#pragma once

#ifndef ANDROID_CONTENT_ACTIVITYNOTFOUNDEXCEPTION
#define ANDROID_CONTENT_ACTIVITYNOTFOUNDEXCEPTION

#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::content
{
	class ActivityNotFoundException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::content


namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ActivityNotFoundException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.ActivityNotFoundException",
			"()V");
	}
	void ActivityNotFoundException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ActivityNotFoundException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::content

namespace android::content
{
	class ActivityNotFoundException : public __jni_impl::android::content::ActivityNotFoundException
	{
	public:
		ActivityNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
		ActivityNotFoundException()
		{
			__constructor();
		}
		ActivityNotFoundException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_ACTIVITYNOTFOUNDEXCEPTION

