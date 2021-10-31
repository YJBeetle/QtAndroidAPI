#include "../../java/util/HashMap.hpp"
#include "./DrmInfoEvent.hpp"

namespace android::drm
{
	// Fields
	jint DrmInfoEvent::TYPE_ACCOUNT_ALREADY_REGISTERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_ACCOUNT_ALREADY_REGISTERED"
		);
	}
	jint DrmInfoEvent::TYPE_ALREADY_REGISTERED_BY_ANOTHER_ACCOUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_ALREADY_REGISTERED_BY_ANOTHER_ACCOUNT"
		);
	}
	jint DrmInfoEvent::TYPE_REMOVE_RIGHTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_REMOVE_RIGHTS"
		);
	}
	jint DrmInfoEvent::TYPE_RIGHTS_INSTALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_RIGHTS_INSTALLED"
		);
	}
	jint DrmInfoEvent::TYPE_RIGHTS_REMOVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_RIGHTS_REMOVED"
		);
	}
	jint DrmInfoEvent::TYPE_WAIT_FOR_RIGHTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_WAIT_FOR_RIGHTS"
		);
	}
	
	DrmInfoEvent::DrmInfoEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrmInfoEvent::DrmInfoEvent(jint arg0, jint arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmInfoEvent",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	DrmInfoEvent::DrmInfoEvent(jint arg0, jint arg1, jstring arg2, java::util::HashMap arg3)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmInfoEvent",
			"(IILjava/lang/String;Ljava/util/HashMap;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::drm

