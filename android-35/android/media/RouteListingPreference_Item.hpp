#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RouteListingPreference_Item.def.hpp"

namespace android::media
{
	// Fields
	inline JObject RouteListingPreference_Item::CREATOR()
	{
		return getStaticObjectField(
			"android.media.RouteListingPreference$Item",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint RouteListingPreference_Item::FLAG_ONGOING_SESSION()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"FLAG_ONGOING_SESSION"
		);
	}
	inline jint RouteListingPreference_Item::FLAG_ONGOING_SESSION_MANAGED()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"FLAG_ONGOING_SESSION_MANAGED"
		);
	}
	inline jint RouteListingPreference_Item::FLAG_SUGGESTED()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"FLAG_SUGGESTED"
		);
	}
	inline jint RouteListingPreference_Item::SELECTION_BEHAVIOR_GO_TO_APP()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SELECTION_BEHAVIOR_GO_TO_APP"
		);
	}
	inline jint RouteListingPreference_Item::SELECTION_BEHAVIOR_NONE()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SELECTION_BEHAVIOR_NONE"
		);
	}
	inline jint RouteListingPreference_Item::SELECTION_BEHAVIOR_TRANSFER()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SELECTION_BEHAVIOR_TRANSFER"
		);
	}
	inline jint RouteListingPreference_Item::SUBTEXT_AD_ROUTING_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SUBTEXT_AD_ROUTING_DISALLOWED"
		);
	}
	inline jint RouteListingPreference_Item::SUBTEXT_CUSTOM()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SUBTEXT_CUSTOM"
		);
	}
	inline jint RouteListingPreference_Item::SUBTEXT_DEVICE_LOW_POWER()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SUBTEXT_DEVICE_LOW_POWER"
		);
	}
	inline jint RouteListingPreference_Item::SUBTEXT_DOWNLOADED_CONTENT_ROUTING_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SUBTEXT_DOWNLOADED_CONTENT_ROUTING_DISALLOWED"
		);
	}
	inline jint RouteListingPreference_Item::SUBTEXT_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SUBTEXT_ERROR_UNKNOWN"
		);
	}
	inline jint RouteListingPreference_Item::SUBTEXT_NONE()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SUBTEXT_NONE"
		);
	}
	inline jint RouteListingPreference_Item::SUBTEXT_SUBSCRIPTION_REQUIRED()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SUBTEXT_SUBSCRIPTION_REQUIRED"
		);
	}
	inline jint RouteListingPreference_Item::SUBTEXT_TRACK_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SUBTEXT_TRACK_UNSUPPORTED"
		);
	}
	inline jint RouteListingPreference_Item::SUBTEXT_UNAUTHORIZED()
	{
		return getStaticField<jint>(
			"android.media.RouteListingPreference$Item",
			"SUBTEXT_UNAUTHORIZED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RouteListingPreference_Item::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RouteListingPreference_Item::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString RouteListingPreference_Item::getCustomSubtextMessage() const
	{
		return callObjectMethod(
			"getCustomSubtextMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint RouteListingPreference_Item::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline JString RouteListingPreference_Item::getRouteId() const
	{
		return callObjectMethod(
			"getRouteId",
			"()Ljava/lang/String;"
		);
	}
	inline jint RouteListingPreference_Item::getSelectionBehavior() const
	{
		return callMethod<jint>(
			"getSelectionBehavior",
			"()I"
		);
	}
	inline jint RouteListingPreference_Item::getSubText() const
	{
		return callMethod<jint>(
			"getSubText",
			"()I"
		);
	}
	inline jint RouteListingPreference_Item::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void RouteListingPreference_Item::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
