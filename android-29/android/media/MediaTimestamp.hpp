#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaTimestamp : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject TIMESTAMP_UNKNOWN();
		
		// Constructors
		void __constructor(jlong arg0, jlong arg1, jfloat arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getAnchorMediaTimeUs();
		jlong getAnchorSystemNanoTime();
		jlong getAnchorSytemNanoTime();
		jfloat getMediaClockRate();
		jstring toString();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject MediaTimestamp::TIMESTAMP_UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaTimestamp",
			"TIMESTAMP_UNKNOWN",
			"Landroid/media/MediaTimestamp;"
		);
	}
	
	// Constructors
	void MediaTimestamp::__constructor(jlong arg0, jlong arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaTimestamp",
			"(JJF)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jboolean MediaTimestamp::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong MediaTimestamp::getAnchorMediaTimeUs()
	{
		return __thiz.callMethod<jlong>(
			"getAnchorMediaTimeUs",
			"()J"
		);
	}
	jlong MediaTimestamp::getAnchorSystemNanoTime()
	{
		return __thiz.callMethod<jlong>(
			"getAnchorSystemNanoTime",
			"()J"
		);
	}
	jlong MediaTimestamp::getAnchorSytemNanoTime()
	{
		return __thiz.callMethod<jlong>(
			"getAnchorSytemNanoTime",
			"()J"
		);
	}
	jfloat MediaTimestamp::getMediaClockRate()
	{
		return __thiz.callMethod<jfloat>(
			"getMediaClockRate",
			"()F"
		);
	}
	jstring MediaTimestamp::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaTimestamp : public __jni_impl::android::media::MediaTimestamp
	{
	public:
		MediaTimestamp(QAndroidJniObject obj) { __thiz = obj; }
		MediaTimestamp(jlong arg0, jlong arg1, jfloat arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media

