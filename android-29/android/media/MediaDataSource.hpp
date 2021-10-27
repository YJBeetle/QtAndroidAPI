#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaDataSource : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getSize();
		jint readAt(jlong arg0, jbyteArray arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaDataSource::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDataSource",
			"()V"
		);
	}
	
	// Methods
	jlong MediaDataSource::getSize()
	{
		return __thiz.callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jint MediaDataSource::readAt(jlong arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"readAt",
			"(J[BII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDataSource : public __jni_impl::android::media::MediaDataSource
	{
	public:
		MediaDataSource(QAndroidJniObject obj) { __thiz = obj; }
		MediaDataSource()
		{
			__constructor();
		}
	};
} // namespace android::media

