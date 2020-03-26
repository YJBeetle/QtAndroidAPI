#pragma once

#ifndef ANDROID_WEBKIT_WEBSTORAGE_ORIGIN
#define ANDROID_WEBKIT_WEBSTORAGE_ORIGIN

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class WebStorage_Origin : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getUsage();
		jstring getOrigin();
		jlong getQuota();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebStorage_Origin::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebStorage$Origin",
			"(V)V");
	}
	
	// Methods
	jlong WebStorage_Origin::getUsage()
	{
		return __thiz.callMethod<jlong>(
			"getUsage",
			"()J"
		);
	}
	jstring WebStorage_Origin::getOrigin()
	{
		return __thiz.callObjectMethod(
			"getOrigin",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong WebStorage_Origin::getQuota()
	{
		return __thiz.callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebStorage_Origin : public __jni_impl::android::webkit::WebStorage_Origin
	{
	public:
		WebStorage_Origin(QAndroidJniObject obj) { __thiz = obj; }
		WebStorage_Origin()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBSTORAGE_ORIGIN

