#pragma once

#ifndef ANDROID_DRM_DRMINFOREQUEST
#define ANDROID_DRM_DRMINFOREQUEST

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::drm
{
	class DrmInfoRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACCOUNT_ID();
		static QAndroidJniObject SUBSCRIPTION_ID();
		static jint TYPE_REGISTRATION_INFO();
		static jint TYPE_RIGHTS_ACQUISITION_INFO();
		static jint TYPE_RIGHTS_ACQUISITION_PROGRESS_INFO();
		static jint TYPE_UNREGISTRATION_INFO();
		
		// Constructors
		void __constructor(jint arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject get(jstring arg0);
		void put(jstring arg0, jobject arg1);
		QAndroidJniObject iterator();
		QAndroidJniObject keyIterator();
		QAndroidJniObject getMimeType();
		jint getInfoType();
	};
} // namespace __jni_impl::android::drm


namespace __jni_impl::android::drm
{
	// Fields
	QAndroidJniObject DrmInfoRequest::ACCOUNT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.drm.DrmInfoRequest",
			"ACCOUNT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DrmInfoRequest::SUBSCRIPTION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.drm.DrmInfoRequest",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;");
	}
	jint DrmInfoRequest::TYPE_REGISTRATION_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_REGISTRATION_INFO");
	}
	jint DrmInfoRequest::TYPE_RIGHTS_ACQUISITION_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_RIGHTS_ACQUISITION_INFO");
	}
	jint DrmInfoRequest::TYPE_RIGHTS_ACQUISITION_PROGRESS_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_RIGHTS_ACQUISITION_PROGRESS_INFO");
	}
	jint DrmInfoRequest::TYPE_UNREGISTRATION_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_UNREGISTRATION_INFO");
	}
	
	// Constructors
	void DrmInfoRequest::__constructor(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmInfoRequest",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject DrmInfoRequest::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0);
	}
	void DrmInfoRequest::put(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject DrmInfoRequest::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	QAndroidJniObject DrmInfoRequest::keyIterator()
	{
		return __thiz.callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;");
	}
	QAndroidJniObject DrmInfoRequest::getMimeType()
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;");
	}
	jint DrmInfoRequest::getInfoType()
	{
		return __thiz.callMethod<jint>(
			"getInfoType",
			"()I");
	}
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmInfoRequest : public __jni_impl::android::drm::DrmInfoRequest
	{
	public:
		DrmInfoRequest(QAndroidJniObject obj) { __thiz = obj; }
		DrmInfoRequest(jint arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMINFOREQUEST

