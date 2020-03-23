#pragma once

#ifndef ANDROID_DRM_DRMINFO
#define ANDROID_DRM_DRMINFO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::drm
{
	class DrmInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jbyteArray arg1, jstring arg2);
		void __constructor(jint arg0, jstring arg1, jstring arg2);
		
		// Methods
		QAndroidJniObject get(jstring arg0);
		void put(jstring arg0, jobject arg1);
		QAndroidJniObject iterator();
		QAndroidJniObject keyIterator();
		QAndroidJniObject getData();
		QAndroidJniObject getMimeType();
		jint getInfoType();
	};
} // namespace __jni_impl::android::drm


namespace __jni_impl::android::drm
{
	// Fields
	
	// Constructors
	void DrmInfo::__constructor(jint arg0, jbyteArray arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmInfo",
			"(I[BLjava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void DrmInfo::__constructor(jint arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmInfo",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	QAndroidJniObject DrmInfo::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0);
	}
	void DrmInfo::put(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject DrmInfo::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	QAndroidJniObject DrmInfo::keyIterator()
	{
		return __thiz.callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;");
	}
	QAndroidJniObject DrmInfo::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B");
	}
	QAndroidJniObject DrmInfo::getMimeType()
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;");
	}
	jint DrmInfo::getInfoType()
	{
		return __thiz.callMethod<jint>(
			"getInfoType",
			"()I");
	}
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmInfo : public __jni_impl::android::drm::DrmInfo
	{
	public:
		DrmInfo(QAndroidJniObject obj) { __thiz = obj; }
		DrmInfo(jint arg0, jbyteArray arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DrmInfo(jint arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMINFO

