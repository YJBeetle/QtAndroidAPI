#include "./DrmStore_Action.hpp"

namespace android::drm
{
	// Fields
	jint DrmStore_Action::DEFAULT()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"DEFAULT"
		);
	}
	jint DrmStore_Action::DISPLAY()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"DISPLAY"
		);
	}
	jint DrmStore_Action::EXECUTE()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"EXECUTE"
		);
	}
	jint DrmStore_Action::OUTPUT()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"OUTPUT"
		);
	}
	jint DrmStore_Action::PLAY()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"PLAY"
		);
	}
	jint DrmStore_Action::PREVIEW()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"PREVIEW"
		);
	}
	jint DrmStore_Action::RINGTONE()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"RINGTONE"
		);
	}
	jint DrmStore_Action::TRANSFER()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"TRANSFER"
		);
	}
	
	// QJniObject forward
	DrmStore_Action::DrmStore_Action(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmStore_Action::DrmStore_Action()
		: __JniBaseClass(
			"android.drm.DrmStore$Action",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

