#pragma once

#include "../content/Intent.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ApplicationStartInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JObject ApplicationStartInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ApplicationStartInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ApplicationStartInfo::LAUNCH_MODE_SINGLE_INSTANCE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"LAUNCH_MODE_SINGLE_INSTANCE"
		);
	}
	inline jint ApplicationStartInfo::LAUNCH_MODE_SINGLE_INSTANCE_PER_TASK()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"LAUNCH_MODE_SINGLE_INSTANCE_PER_TASK"
		);
	}
	inline jint ApplicationStartInfo::LAUNCH_MODE_SINGLE_TASK()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"LAUNCH_MODE_SINGLE_TASK"
		);
	}
	inline jint ApplicationStartInfo::LAUNCH_MODE_SINGLE_TOP()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"LAUNCH_MODE_SINGLE_TOP"
		);
	}
	inline jint ApplicationStartInfo::LAUNCH_MODE_STANDARD()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"LAUNCH_MODE_STANDARD"
		);
	}
	inline jint ApplicationStartInfo::STARTUP_STATE_ERROR()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"STARTUP_STATE_ERROR"
		);
	}
	inline jint ApplicationStartInfo::STARTUP_STATE_FIRST_FRAME_DRAWN()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"STARTUP_STATE_FIRST_FRAME_DRAWN"
		);
	}
	inline jint ApplicationStartInfo::STARTUP_STATE_STARTED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"STARTUP_STATE_STARTED"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_ALARM()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_ALARM"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_BACKUP()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_BACKUP"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_BOOT_COMPLETE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_BOOT_COMPLETE"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_BROADCAST()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_BROADCAST"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_CONTENT_PROVIDER()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_CONTENT_PROVIDER"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_JOB()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_JOB"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_LAUNCHER()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_LAUNCHER"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_LAUNCHER_RECENTS()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_LAUNCHER_RECENTS"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_OTHER()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_OTHER"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_PUSH()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_PUSH"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_SERVICE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_SERVICE"
		);
	}
	inline jint ApplicationStartInfo::START_REASON_START_ACTIVITY()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_REASON_START_ACTIVITY"
		);
	}
	inline jint ApplicationStartInfo::START_TIMESTAMP_APPLICATION_ONCREATE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TIMESTAMP_APPLICATION_ONCREATE"
		);
	}
	inline jint ApplicationStartInfo::START_TIMESTAMP_BIND_APPLICATION()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TIMESTAMP_BIND_APPLICATION"
		);
	}
	inline jint ApplicationStartInfo::START_TIMESTAMP_FIRST_FRAME()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TIMESTAMP_FIRST_FRAME"
		);
	}
	inline jint ApplicationStartInfo::START_TIMESTAMP_FORK()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TIMESTAMP_FORK"
		);
	}
	inline jint ApplicationStartInfo::START_TIMESTAMP_FULLY_DRAWN()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TIMESTAMP_FULLY_DRAWN"
		);
	}
	inline jint ApplicationStartInfo::START_TIMESTAMP_INITIAL_RENDERTHREAD_FRAME()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TIMESTAMP_INITIAL_RENDERTHREAD_FRAME"
		);
	}
	inline jint ApplicationStartInfo::START_TIMESTAMP_LAUNCH()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TIMESTAMP_LAUNCH"
		);
	}
	inline jint ApplicationStartInfo::START_TIMESTAMP_RESERVED_RANGE_DEVELOPER()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TIMESTAMP_RESERVED_RANGE_DEVELOPER"
		);
	}
	inline jint ApplicationStartInfo::START_TIMESTAMP_RESERVED_RANGE_DEVELOPER_START()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TIMESTAMP_RESERVED_RANGE_DEVELOPER_START"
		);
	}
	inline jint ApplicationStartInfo::START_TIMESTAMP_RESERVED_RANGE_SYSTEM()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TIMESTAMP_RESERVED_RANGE_SYSTEM"
		);
	}
	inline jint ApplicationStartInfo::START_TIMESTAMP_SURFACEFLINGER_COMPOSITION_COMPLETE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TIMESTAMP_SURFACEFLINGER_COMPOSITION_COMPLETE"
		);
	}
	inline jint ApplicationStartInfo::START_TYPE_COLD()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TYPE_COLD"
		);
	}
	inline jint ApplicationStartInfo::START_TYPE_HOT()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TYPE_HOT"
		);
	}
	inline jint ApplicationStartInfo::START_TYPE_UNSET()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TYPE_UNSET"
		);
	}
	inline jint ApplicationStartInfo::START_TYPE_WARM()
	{
		return getStaticField<jint>(
			"android.app.ApplicationStartInfo",
			"START_TYPE_WARM"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ApplicationStartInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ApplicationStartInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ApplicationStartInfo::getDefiningUid() const
	{
		return callMethod<jint>(
			"getDefiningUid",
			"()I"
		);
	}
	inline android::content::Intent ApplicationStartInfo::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline jint ApplicationStartInfo::getLaunchMode() const
	{
		return callMethod<jint>(
			"getLaunchMode",
			"()I"
		);
	}
	inline jint ApplicationStartInfo::getPackageUid() const
	{
		return callMethod<jint>(
			"getPackageUid",
			"()I"
		);
	}
	inline jint ApplicationStartInfo::getPid() const
	{
		return callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	inline JString ApplicationStartInfo::getProcessName() const
	{
		return callObjectMethod(
			"getProcessName",
			"()Ljava/lang/String;"
		);
	}
	inline jint ApplicationStartInfo::getRealUid() const
	{
		return callMethod<jint>(
			"getRealUid",
			"()I"
		);
	}
	inline jint ApplicationStartInfo::getReason() const
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	inline jint ApplicationStartInfo::getStartType() const
	{
		return callMethod<jint>(
			"getStartType",
			"()I"
		);
	}
	inline jint ApplicationStartInfo::getStartupState() const
	{
		return callMethod<jint>(
			"getStartupState",
			"()I"
		);
	}
	inline JObject ApplicationStartInfo::getStartupTimestamps() const
	{
		return callObjectMethod(
			"getStartupTimestamps",
			"()Ljava/util/Map;"
		);
	}
	inline jint ApplicationStartInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ApplicationStartInfo::wasForceStopped() const
	{
		return callMethod<jboolean>(
			"wasForceStopped",
			"()Z"
		);
	}
	inline void ApplicationStartInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
