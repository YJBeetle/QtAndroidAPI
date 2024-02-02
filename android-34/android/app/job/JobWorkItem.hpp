#pragma once

#include "../../content/Intent.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "./JobWorkItem.def.hpp"

namespace android::app::job
{
	// Fields
	inline JObject JobWorkItem::CREATOR()
	{
		return getStaticObjectField(
			"android.app.job.JobWorkItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline JobWorkItem::JobWorkItem(android::content::Intent arg0)
		: JObject(
			"android.app.job.JobWorkItem",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	inline JobWorkItem::JobWorkItem(android::content::Intent arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.app.job.JobWorkItem",
			"(Landroid/content/Intent;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline JobWorkItem::JobWorkItem(android::content::Intent arg0, jlong arg1, jlong arg2, jlong arg3)
		: JObject(
			"android.app.job.JobWorkItem",
			"(Landroid/content/Intent;JJJ)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint JobWorkItem::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint JobWorkItem::getDeliveryCount() const
	{
		return callMethod<jint>(
			"getDeliveryCount",
			"()I"
		);
	}
	inline jlong JobWorkItem::getEstimatedNetworkDownloadBytes() const
	{
		return callMethod<jlong>(
			"getEstimatedNetworkDownloadBytes",
			"()J"
		);
	}
	inline jlong JobWorkItem::getEstimatedNetworkUploadBytes() const
	{
		return callMethod<jlong>(
			"getEstimatedNetworkUploadBytes",
			"()J"
		);
	}
	inline android::os::PersistableBundle JobWorkItem::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline android::content::Intent JobWorkItem::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline jlong JobWorkItem::getMinimumNetworkChunkBytes() const
	{
		return callMethod<jlong>(
			"getMinimumNetworkChunkBytes",
			"()J"
		);
	}
	inline JString JobWorkItem::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void JobWorkItem::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
