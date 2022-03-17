#pragma once

#include "./DrmStore_Action.def.hpp"

namespace android::drm
{
	// Fields
	inline jint DrmStore_Action::DEFAULT()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"DEFAULT"
		);
	}
	inline jint DrmStore_Action::DISPLAY()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"DISPLAY"
		);
	}
	inline jint DrmStore_Action::EXECUTE()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"EXECUTE"
		);
	}
	inline jint DrmStore_Action::OUTPUT()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"OUTPUT"
		);
	}
	inline jint DrmStore_Action::PLAY()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"PLAY"
		);
	}
	inline jint DrmStore_Action::PREVIEW()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"PREVIEW"
		);
	}
	inline jint DrmStore_Action::RINGTONE()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"RINGTONE"
		);
	}
	inline jint DrmStore_Action::TRANSFER()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"TRANSFER"
		);
	}
	
	// Constructors
	inline DrmStore_Action::DrmStore_Action()
		: JObject(
			"android.drm.DrmStore$Action",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::drm;
#endif
