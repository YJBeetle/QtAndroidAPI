#pragma once

#ifndef ANDROID_MEDIA_UNSUPPORTEDSCHEMEEXCEPTION
#define ANDROID_MEDIA_UNSUPPORTEDSCHEMEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "MediaDrmException.hpp"


namespace __jni_impl::android::media
{
	class UnsupportedSchemeException : public __jni_impl::android::media::MediaDrmException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void UnsupportedSchemeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.UnsupportedSchemeException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class UnsupportedSchemeException : public __jni_impl::android::media::UnsupportedSchemeException
	{
	public:
		UnsupportedSchemeException(QAndroidJniObject obj) { __thiz = obj; }
		UnsupportedSchemeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_UNSUPPORTEDSCHEMEEXCEPTION

