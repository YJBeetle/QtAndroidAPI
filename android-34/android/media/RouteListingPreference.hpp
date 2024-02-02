#pragma once

#include "../content/ComponentName.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RouteListingPreference.def.hpp"

namespace android::media
{
	// Fields
	inline JString RouteListingPreference::ACTION_TRANSFER_MEDIA()
	{
		return getStaticObjectField(
			"android.media.RouteListingPreference",
			"ACTION_TRANSFER_MEDIA",
			"Ljava/lang/String;"
		);
	}
	inline JObject RouteListingPreference::CREATOR()
	{
		return getStaticObjectField(
			"android.media.RouteListingPreference",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString RouteListingPreference::EXTRA_ROUTE_ID()
	{
		return getStaticObjectField(
			"android.media.RouteListingPreference",
			"EXTRA_ROUTE_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RouteListingPreference::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RouteListingPreference::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject RouteListingPreference::getItems() const
	{
		return callObjectMethod(
			"getItems",
			"()Ljava/util/List;"
		);
	}
	inline android::content::ComponentName RouteListingPreference::getLinkedItemComponentName() const
	{
		return callObjectMethod(
			"getLinkedItemComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	inline jboolean RouteListingPreference::getUseSystemOrdering() const
	{
		return callMethod<jboolean>(
			"getUseSystemOrdering",
			"()Z"
		);
	}
	inline jint RouteListingPreference::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void RouteListingPreference::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
