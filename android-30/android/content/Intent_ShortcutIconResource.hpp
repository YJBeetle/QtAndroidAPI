#pragma once

#include "./Context.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./Intent_ShortcutIconResource.def.hpp"

namespace android::content
{
	// Fields
	inline JObject Intent_ShortcutIconResource::CREATOR()
	{
		return getStaticObjectField(
			"android.content.Intent$ShortcutIconResource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString Intent_ShortcutIconResource::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	inline JString Intent_ShortcutIconResource::resourceName()
	{
		return getObjectField(
			"resourceName",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Intent_ShortcutIconResource::Intent_ShortcutIconResource()
		: JObject(
			"android.content.Intent$ShortcutIconResource",
			"()V"
		) {}
	
	// Methods
	inline android::content::Intent_ShortcutIconResource Intent_ShortcutIconResource::fromContext(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.content.Intent$ShortcutIconResource",
			"fromContext",
			"(Landroid/content/Context;I)Landroid/content/Intent$ShortcutIconResource;",
			arg0.object(),
			arg1
		);
	}
	inline jint Intent_ShortcutIconResource::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString Intent_ShortcutIconResource::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Intent_ShortcutIconResource::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

