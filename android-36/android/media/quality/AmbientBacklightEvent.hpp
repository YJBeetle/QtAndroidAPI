#pragma once

#include "./AmbientBacklightMetadata.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AmbientBacklightEvent.def.hpp"

namespace android::media::quality
{
	// Fields
	inline jint AmbientBacklightEvent::AMBIENT_BACKLIGHT_EVENT_DISABLED()
	{
		return getStaticField<jint>(
			"android.media.quality.AmbientBacklightEvent",
			"AMBIENT_BACKLIGHT_EVENT_DISABLED"
		);
	}
	inline jint AmbientBacklightEvent::AMBIENT_BACKLIGHT_EVENT_ENABLED()
	{
		return getStaticField<jint>(
			"android.media.quality.AmbientBacklightEvent",
			"AMBIENT_BACKLIGHT_EVENT_ENABLED"
		);
	}
	inline jint AmbientBacklightEvent::AMBIENT_BACKLIGHT_EVENT_INTERRUPTED()
	{
		return getStaticField<jint>(
			"android.media.quality.AmbientBacklightEvent",
			"AMBIENT_BACKLIGHT_EVENT_INTERRUPTED"
		);
	}
	inline jint AmbientBacklightEvent::AMBIENT_BACKLIGHT_EVENT_METADATA_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.quality.AmbientBacklightEvent",
			"AMBIENT_BACKLIGHT_EVENT_METADATA_AVAILABLE"
		);
	}
	inline JObject AmbientBacklightEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.quality.AmbientBacklightEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AmbientBacklightEvent::AmbientBacklightEvent(jint arg0, android::media::quality::AmbientBacklightMetadata arg1)
		: JObject(
			"android.media.quality.AmbientBacklightEvent",
			"(ILandroid/media/quality/AmbientBacklightMetadata;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jint AmbientBacklightEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AmbientBacklightEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AmbientBacklightEvent::getEventType() const
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	inline android::media::quality::AmbientBacklightMetadata AmbientBacklightEvent::getMetadata() const
	{
		return callObjectMethod(
			"getMetadata",
			"()Landroid/media/quality/AmbientBacklightMetadata;"
		);
	}
	inline jint AmbientBacklightEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AmbientBacklightEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AmbientBacklightEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::quality

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::quality;
#endif
