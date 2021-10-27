#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "MediaCasException.hpp"


namespace __jni_impl::android::media
{
	class MediaCasException_UnsupportedCasException : public __jni_impl::android::media::MediaCasException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaCasException_UnsupportedCasException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCasException$UnsupportedCasException",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCasException_UnsupportedCasException : public __jni_impl::android::media::MediaCasException_UnsupportedCasException
	{
	public:
		MediaCasException_UnsupportedCasException(QAndroidJniObject obj) { __thiz = obj; }
		MediaCasException_UnsupportedCasException()
		{
			__constructor();
		}
	};
} // namespace android::media

