#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "./JobWorkItem.hpp"
#include "../../content/ClipData.hpp"
#include "../../net/Network.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./JobParameters.hpp"

namespace android::app::job
{
	// Fields
	JObject JobParameters::CREATOR()
	{
		return getStaticObjectField(
			"android.app.job.JobParameters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint JobParameters::STOP_REASON_APP_STANDBY()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_APP_STANDBY"
		);
	}
	jint JobParameters::STOP_REASON_BACKGROUND_RESTRICTION()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_BACKGROUND_RESTRICTION"
		);
	}
	jint JobParameters::STOP_REASON_CANCELLED_BY_APP()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CANCELLED_BY_APP"
		);
	}
	jint JobParameters::STOP_REASON_CONSTRAINT_BATTERY_NOT_LOW()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CONSTRAINT_BATTERY_NOT_LOW"
		);
	}
	jint JobParameters::STOP_REASON_CONSTRAINT_CHARGING()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CONSTRAINT_CHARGING"
		);
	}
	jint JobParameters::STOP_REASON_CONSTRAINT_CONNECTIVITY()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CONSTRAINT_CONNECTIVITY"
		);
	}
	jint JobParameters::STOP_REASON_CONSTRAINT_DEVICE_IDLE()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CONSTRAINT_DEVICE_IDLE"
		);
	}
	jint JobParameters::STOP_REASON_CONSTRAINT_STORAGE_NOT_LOW()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_CONSTRAINT_STORAGE_NOT_LOW"
		);
	}
	jint JobParameters::STOP_REASON_DEVICE_STATE()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_DEVICE_STATE"
		);
	}
	jint JobParameters::STOP_REASON_PREEMPT()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_PREEMPT"
		);
	}
	jint JobParameters::STOP_REASON_QUOTA()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_QUOTA"
		);
	}
	jint JobParameters::STOP_REASON_SYSTEM_PROCESSING()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_SYSTEM_PROCESSING"
		);
	}
	jint JobParameters::STOP_REASON_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_TIMEOUT"
		);
	}
	jint JobParameters::STOP_REASON_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_UNDEFINED"
		);
	}
	jint JobParameters::STOP_REASON_USER()
	{
		return getStaticField<jint>(
			"android.app.job.JobParameters",
			"STOP_REASON_USER"
		);
	}
	
	// QJniObject forward
	JobParameters::JobParameters(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void JobParameters::completeWork(android::app::job::JobWorkItem arg0) const
	{
		callMethod<void>(
			"completeWork",
			"(Landroid/app/job/JobWorkItem;)V",
			arg0.object()
		);
	}
	android::app::job::JobWorkItem JobParameters::dequeueWork() const
	{
		return callObjectMethod(
			"dequeueWork",
			"()Landroid/app/job/JobWorkItem;"
		);
	}
	jint JobParameters::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::content::ClipData JobParameters::getClipData() const
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	jint JobParameters::getClipGrantFlags() const
	{
		return callMethod<jint>(
			"getClipGrantFlags",
			"()I"
		);
	}
	android::os::PersistableBundle JobParameters::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint JobParameters::getJobId() const
	{
		return callMethod<jint>(
			"getJobId",
			"()I"
		);
	}
	android::net::Network JobParameters::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	jint JobParameters::getStopReason() const
	{
		return callMethod<jint>(
			"getStopReason",
			"()I"
		);
	}
	android::os::Bundle JobParameters::getTransientExtras() const
	{
		return callObjectMethod(
			"getTransientExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JArray JobParameters::getTriggeredContentAuthorities() const
	{
		return callObjectMethod(
			"getTriggeredContentAuthorities",
			"()[Ljava/lang/String;"
		);
	}
	JArray JobParameters::getTriggeredContentUris() const
	{
		return callObjectMethod(
			"getTriggeredContentUris",
			"()[Landroid/net/Uri;"
		);
	}
	jboolean JobParameters::isExpeditedJob() const
	{
		return callMethod<jboolean>(
			"isExpeditedJob",
			"()Z"
		);
	}
	jboolean JobParameters::isOverrideDeadlineExpired() const
	{
		return callMethod<jboolean>(
			"isOverrideDeadlineExpired",
			"()Z"
		);
	}
	void JobParameters::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::job

