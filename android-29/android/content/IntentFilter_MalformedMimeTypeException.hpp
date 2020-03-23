#pragma once

#ifndef ANDROID_CONTENT_INTENTFILTER_MALFORMEDMIMETYPEEXCEPTION
#define ANDROID_CONTENT_INTENTFILTER_MALFORMEDMIMETYPEEXCEPTION

#include "../util/AndroidException.hpp"


namespace __jni_impl::android::content
{
	class IntentFilter_MalformedMimeTypeException : public __jni_impl::android::util::AndroidException
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
	void IntentFilter_MalformedMimeTypeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter$MalformedMimeTypeException",
			"()V");
	}
	void IntentFilter_MalformedMimeTypeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter$MalformedMimeTypeException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::content

namespace android::content
{
	class IntentFilter_MalformedMimeTypeException : public __jni_impl::android::content::IntentFilter_MalformedMimeTypeException
	{
	public:
		IntentFilter_MalformedMimeTypeException(QAndroidJniObject obj) { __thiz = obj; }
		IntentFilter_MalformedMimeTypeException()
		{
			__constructor();
		}
		IntentFilter_MalformedMimeTypeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_INTENTFILTER_MALFORMEDMIMETYPEEXCEPTION

