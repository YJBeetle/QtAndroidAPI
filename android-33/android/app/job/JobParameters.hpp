#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "./JobWorkItem.def.hpp"
#include "../../content/ClipData.def.hpp"
#include "../../net/Network.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "./JobParameters.def.hpp"

namespace android::app::job
{
	// Fields
	inline JObject JobParameters::CREATOR()
	{
		return getStaticObjectField(
			"android.app.job.JobParameters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint JobParameters::STOP_REASON_APP_STANDBY()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_APP_STANDBY"
		);
	}
	inline jint JobParameters::STOP_REASON_BACKGROUND_RESTRICTION()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_BACKGROUND_RESTRICTION"
		);
	}
	inline jint JobParameters::STOP_REASON_CANCELLED_BY_APP()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CANCELLED_BY_APP"
		);
	}
	inline jint JobParameters::STOP_REASON_CONSTRAINT_BATTERY_NOT_LOW()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CONSTRAINT_BATTERY_NOT_LOW"
		);
	}
	inline jint JobParameters::STOP_REASON_CONSTRAINT_CHARGING()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CONSTRAINT_CHARGING"
		);
	}
	inline jint JobParameters::STOP_REASON_CONSTRAINT_CONNECTIVITY()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CONSTRAINT_CONNECTIVITY"
		);
	}
	inline jint JobParameters::STOP_REASON_CONSTRAINT_DEVICE_IDLE()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CONSTRAINT_DEVICE_IDLE"
		);
	}
	inline jint JobParameters::STOP_REASON_CONSTRAINT_STORAGE_NOT_LOW()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CONSTRAINT_STORAGE_NOT_LOW"
		);
	}
	inline jint JobParameters::STOP_REASON_DEVICE_STATE()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_DEVICE_STATE"
		);
	}
	inline jint JobParameters::STOP_REASON_ESTIMATED_APP_LAUNCH_TIME_CHANGED()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_ESTIMATED_APP_LAUNCH_TIME_CHANGED"
		);
	}
	inline jint JobParameters::STOP_REASON_PREEMPT()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_PREEMPT"
		);
	}
	inline jint JobParameters::STOP_REASON_QUOTA()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_QUOTA"
		);
	}
	inline jint JobParameters::STOP_REASON_SYSTEM_PROCESSING()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_SYSTEM_PROCESSING"
		);
	}
	inline jint JobParameters::STOP_REASON_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_TIMEOUT"
		);
	}
	inline jint JobParameters::STOP_REASON_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_UNDEFINED"
		);
	}
	inline jint JobParameters::STOP_REASON_USER()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_USER"
		);
	}
	
	// Constructors
	
	// Methods
	inline void JobParameters::completeWork(android::app::job::JobWorkItem arg0) const
	{
		callMethod<void>(
			"completeWork",
			"(Landroid/app/job/JobWorkItem;)V",
			arg0.object()
		);
	}
	inline android::app::job::JobWorkItem JobParameters::dequeueWork() const
	{
		return callObjectMethod(
			"dequeueWork",
			"()Landroid/app/job/JobWorkItem;"
		);
	}
	inline jint JobParameters::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::content::ClipData JobParameters::getClipData() const
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	inline jint JobParameters::getClipGrantFlags() const
	{
		return callMethod<jint>(
			"getClipGrantFlags",
			"()I"
		);
	}
	inline android::os::PersistableBundle JobParameters::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline jint JobParameters::getJobId() const
	{
		return callMethod<jint>(
			"getJobId",
			"()I"
		);
	}
	inline android::net::Network JobParameters::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	inline jint JobParameters::getStopReason() const
	{
		return callMethod<jint>(
			"getStopReason",
			"()I"
		);
	}
	inline android::os::Bundle JobParameters::getTransientExtras() const
	{
		return callObjectMethod(
			"getTransientExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JArray JobParameters::getTriggeredContentAuthorities() const
	{
		return callObjectMethod(
			"getTriggeredContentAuthorities",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray JobParameters::getTriggeredContentUris() const
	{
		return callObjectMethod(
			"getTriggeredContentUris",
			"()[Landroid/net/Uri;"
		);
	}
	inline jboolean JobParameters::isExpeditedJob() const
	{
		return callMethod<jboolean>(
			"isExpeditedJob",
			"()Z"
		);
	}
	inline jboolean JobParameters::isOverrideDeadlineExpired() const
	{
		return callMethod<jboolean>(
			"isOverrideDeadlineExpired",
			"()Z"
		);
	}
	inline void JobParameters::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::job

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::job;
#endif
