#pragma once

#include "../../../JString.hpp"
#include "./OnObbStateChangeListener.def.hpp"

namespace android::os::storage
{
	// Fields
	inline jint OnObbStateChangeListener::ERROR_ALREADY_MOUNTED()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_ALREADY_MOUNTED"
		);
	}
	inline jint OnObbStateChangeListener::ERROR_COULD_NOT_MOUNT()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_COULD_NOT_MOUNT"
		);
	}
	inline jint OnObbStateChangeListener::ERROR_COULD_NOT_UNMOUNT()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_COULD_NOT_UNMOUNT"
		);
	}
	inline jint OnObbStateChangeListener::ERROR_INTERNAL()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_INTERNAL"
		);
	}
	inline jint OnObbStateChangeListener::ERROR_NOT_MOUNTED()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_NOT_MOUNTED"
		);
	}
	inline jint OnObbStateChangeListener::ERROR_PERMISSION_DENIED()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_PERMISSION_DENIED"
		);
	}
	inline jint OnObbStateChangeListener::MOUNTED()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"MOUNTED"
		);
	}
	inline jint OnObbStateChangeListener::UNMOUNTED()
	{
		return getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"UNMOUNTED"
		);
	}
	
	// Constructors
	inline OnObbStateChangeListener::OnObbStateChangeListener()
		: JObject(
			"android.os.storage.OnObbStateChangeListener",
			"()V"
		) {}
	
	// Methods
	inline void OnObbStateChangeListener::onObbStateChange(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onObbStateChange",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::os::storage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::storage;
#endif
