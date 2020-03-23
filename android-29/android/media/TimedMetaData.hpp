#pragma once

#ifndef ANDROID_MEDIA_TIMEDMETADATA
#define ANDROID_MEDIA_TIMEDMETADATA

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class TimedMetaData : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jlong arg0, jbyteArray arg1);
		
		// Methods
		jlong getTimestamp();
		QAndroidJniObject getMetaData();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void TimedMetaData::__constructor(jlong arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.TimedMetaData",
			"(J[B)V",
			arg0,
			arg1);
	}
	
	// Methods
	jlong TimedMetaData::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J");
	}
	QAndroidJniObject TimedMetaData::getMetaData()
	{
		return __thiz.callObjectMethod(
			"getMetaData",
			"()[B");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class TimedMetaData : public __jni_impl::android::media::TimedMetaData
	{
	public:
		TimedMetaData(QAndroidJniObject obj) { __thiz = obj; }
		TimedMetaData(jlong arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_TIMEDMETADATA

