#pragma once

#ifndef ANDROID_DRM_DRMEVENT
#define ANDROID_DRM_DRMEVENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class HashMap;
}

namespace __jni_impl::android::drm
{
	class DrmEvent : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DRM_INFO_OBJECT();
		static jstring DRM_INFO_STATUS_OBJECT();
		static jint TYPE_ALL_RIGHTS_REMOVED();
		static jint TYPE_DRM_INFO_PROCESSED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getMessage();
		jint getType();
		jobject getAttribute(jstring arg0);
		jint getUniqueId();
	};
} // namespace __jni_impl::android::drm

#include "../../java/util/HashMap.hpp"

namespace __jni_impl::android::drm
{
	// Fields
	jstring DrmEvent::DRM_INFO_OBJECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.drm.DrmEvent",
			"DRM_INFO_OBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DrmEvent::DRM_INFO_STATUS_OBJECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.drm.DrmEvent",
			"DRM_INFO_STATUS_OBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DrmEvent::TYPE_ALL_RIGHTS_REMOVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmEvent",
			"TYPE_ALL_RIGHTS_REMOVED"
		);
	}
	jint DrmEvent::TYPE_DRM_INFO_PROCESSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmEvent",
			"TYPE_DRM_INFO_PROCESSED"
		);
	}
	
	// Constructors
	void DrmEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmEvent",
			"(V)V");
	}
	
	// Methods
	jstring DrmEvent::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DrmEvent::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jobject DrmEvent::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint DrmEvent::getUniqueId()
	{
		return __thiz.callMethod<jint>(
			"getUniqueId",
			"()I"
		);
	}
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmEvent : public __jni_impl::android::drm::DrmEvent
	{
	public:
		DrmEvent(QAndroidJniObject obj) { __thiz = obj; }
		DrmEvent()
		{
			__constructor();
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMEVENT

