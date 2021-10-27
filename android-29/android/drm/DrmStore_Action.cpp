#include "./DrmStore_Action.hpp"

namespace android::drm
{
	// Fields
	jint DrmStore_Action::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"DEFAULT"
		);
	}
	jint DrmStore_Action::DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"DISPLAY"
		);
	}
	jint DrmStore_Action::EXECUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"EXECUTE"
		);
	}
	jint DrmStore_Action::OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"OUTPUT"
		);
	}
	jint DrmStore_Action::PLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"PLAY"
		);
	}
	jint DrmStore_Action::PREVIEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"PREVIEW"
		);
	}
	jint DrmStore_Action::RINGTONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"RINGTONE"
		);
	}
	jint DrmStore_Action::TRANSFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"TRANSFER"
		);
	}
	
	DrmStore_Action::DrmStore_Action(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrmStore_Action::DrmStore_Action()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmStore$Action",
			"()V"
		);
	}
	
	// Methods
} // namespace android::drm

