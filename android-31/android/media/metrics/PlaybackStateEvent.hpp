#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./PlaybackStateEvent.def.hpp"

namespace android::media::metrics
{
	// Fields
	inline JObject PlaybackStateEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.PlaybackStateEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PlaybackStateEvent::STATE_ABANDONED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_ABANDONED"
		);
	}
	inline jint PlaybackStateEvent::STATE_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_BUFFERING"
		);
	}
	inline jint PlaybackStateEvent::STATE_ENDED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_ENDED"
		);
	}
	inline jint PlaybackStateEvent::STATE_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_FAILED"
		);
	}
	inline jint PlaybackStateEvent::STATE_INTERRUPTED_BY_AD()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_INTERRUPTED_BY_AD"
		);
	}
	inline jint PlaybackStateEvent::STATE_JOINING_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_JOINING_BACKGROUND"
		);
	}
	inline jint PlaybackStateEvent::STATE_JOINING_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_JOINING_FOREGROUND"
		);
	}
	inline jint PlaybackStateEvent::STATE_NOT_STARTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_NOT_STARTED"
		);
	}
	inline jint PlaybackStateEvent::STATE_PAUSED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_PAUSED"
		);
	}
	inline jint PlaybackStateEvent::STATE_PAUSED_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_PAUSED_BUFFERING"
		);
	}
	inline jint PlaybackStateEvent::STATE_PLAYING()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_PLAYING"
		);
	}
	inline jint PlaybackStateEvent::STATE_SEEKING()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_SEEKING"
		);
	}
	inline jint PlaybackStateEvent::STATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_STOPPED"
		);
	}
	inline jint PlaybackStateEvent::STATE_SUPPRESSED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_SUPPRESSED"
		);
	}
	inline jint PlaybackStateEvent::STATE_SUPPRESSED_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_SUPPRESSED_BUFFERING"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PlaybackStateEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PlaybackStateEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::os::Bundle PlaybackStateEvent::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint PlaybackStateEvent::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jlong PlaybackStateEvent::getTimeSinceCreatedMillis() const
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
	inline jint PlaybackStateEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void PlaybackStateEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::metrics

// Base class headers
#include "./Event.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
