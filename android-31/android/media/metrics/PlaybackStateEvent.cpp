#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "./PlaybackStateEvent.hpp"

namespace android::media::metrics
{
	// Fields
	JObject PlaybackStateEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.PlaybackStateEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PlaybackStateEvent::STATE_ABANDONED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_ABANDONED"
		);
	}
	jint PlaybackStateEvent::STATE_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_BUFFERING"
		);
	}
	jint PlaybackStateEvent::STATE_ENDED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_ENDED"
		);
	}
	jint PlaybackStateEvent::STATE_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_FAILED"
		);
	}
	jint PlaybackStateEvent::STATE_INTERRUPTED_BY_AD()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_INTERRUPTED_BY_AD"
		);
	}
	jint PlaybackStateEvent::STATE_JOINING_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_JOINING_BACKGROUND"
		);
	}
	jint PlaybackStateEvent::STATE_JOINING_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_JOINING_FOREGROUND"
		);
	}
	jint PlaybackStateEvent::STATE_NOT_STARTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_NOT_STARTED"
		);
	}
	jint PlaybackStateEvent::STATE_PAUSED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_PAUSED"
		);
	}
	jint PlaybackStateEvent::STATE_PAUSED_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_PAUSED_BUFFERING"
		);
	}
	jint PlaybackStateEvent::STATE_PLAYING()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_PLAYING"
		);
	}
	jint PlaybackStateEvent::STATE_SEEKING()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_SEEKING"
		);
	}
	jint PlaybackStateEvent::STATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_STOPPED"
		);
	}
	jint PlaybackStateEvent::STATE_SUPPRESSED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_SUPPRESSED"
		);
	}
	jint PlaybackStateEvent::STATE_SUPPRESSED_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackStateEvent",
			"STATE_SUPPRESSED_BUFFERING"
		);
	}
	
	// QAndroidJniObject forward
	PlaybackStateEvent::PlaybackStateEvent(QAndroidJniObject obj) : android::media::metrics::Event(obj) {}
	
	// Constructors
	
	// Methods
	jint PlaybackStateEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PlaybackStateEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::os::Bundle PlaybackStateEvent::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	jint PlaybackStateEvent::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jlong PlaybackStateEvent::getTimeSinceCreatedMillis() const
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
	jint PlaybackStateEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void PlaybackStateEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::metrics

