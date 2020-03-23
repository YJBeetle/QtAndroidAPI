#pragma once

#ifndef ANDROID_WEBKIT_SAFEBROWSINGRESPONSE
#define ANDROID_WEBKIT_SAFEBROWSINGRESPONSE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class SafeBrowsingResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void proceed(jboolean arg0);
		void showInterstitial(jboolean arg0);
		void backToSafety(jboolean arg0);
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void SafeBrowsingResponse::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.SafeBrowsingResponse",
			"()V");
	}
	
	// Methods
	void SafeBrowsingResponse::proceed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"proceed",
			"(Z)V",
			arg0);
	}
	void SafeBrowsingResponse::showInterstitial(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"showInterstitial",
			"(Z)V",
			arg0);
	}
	void SafeBrowsingResponse::backToSafety(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"backToSafety",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class SafeBrowsingResponse : public __jni_impl::android::webkit::SafeBrowsingResponse
	{
	public:
		SafeBrowsingResponse(QAndroidJniObject obj) { __thiz = obj; }
		SafeBrowsingResponse()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_SAFEBROWSINGRESPONSE

