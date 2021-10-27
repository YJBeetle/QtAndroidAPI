#include "../../java/util/HashMap.hpp"
#include "./DrmErrorEvent.hpp"

namespace android::drm
{
	// Fields
	jint DrmErrorEvent::TYPE_ACQUIRE_DRM_INFO_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_ACQUIRE_DRM_INFO_FAILED"
		);
	}
	jint DrmErrorEvent::TYPE_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_NOT_SUPPORTED"
		);
	}
	jint DrmErrorEvent::TYPE_NO_INTERNET_CONNECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_NO_INTERNET_CONNECTION"
		);
	}
	jint DrmErrorEvent::TYPE_OUT_OF_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_OUT_OF_MEMORY"
		);
	}
	jint DrmErrorEvent::TYPE_PROCESS_DRM_INFO_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_PROCESS_DRM_INFO_FAILED"
		);
	}
	jint DrmErrorEvent::TYPE_REMOVE_ALL_RIGHTS_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_REMOVE_ALL_RIGHTS_FAILED"
		);
	}
	jint DrmErrorEvent::TYPE_RIGHTS_NOT_INSTALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_RIGHTS_NOT_INSTALLED"
		);
	}
	jint DrmErrorEvent::TYPE_RIGHTS_RENEWAL_NOT_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_RIGHTS_RENEWAL_NOT_ALLOWED"
		);
	}
	
	DrmErrorEvent::DrmErrorEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrmErrorEvent::DrmErrorEvent(jint &arg0, jint &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmErrorEvent",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	DrmErrorEvent::DrmErrorEvent(jint &arg0, jint &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmErrorEvent",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	DrmErrorEvent::DrmErrorEvent(jint &arg0, jint &arg1, jstring &arg2, java::util::HashMap &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmErrorEvent",
			"(IILjava/lang/String;Ljava/util/HashMap;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	DrmErrorEvent::DrmErrorEvent(jint &arg0, jint &arg1, const QString &arg2, java::util::HashMap &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmErrorEvent",
			"(IILjava/lang/String;Ljava/util/HashMap;)V",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::drm

