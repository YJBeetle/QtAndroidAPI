#pragma once

#include "./Session2Command.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./Session2CommandGroup.def.hpp"

namespace android::media
{
	// Fields
	inline JObject Session2CommandGroup::CREATOR()
	{
		return getStaticObjectField(
			"android.media.Session2CommandGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Session2CommandGroup::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject Session2CommandGroup::getCommands() const
	{
		return callObjectMethod(
			"getCommands",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean Session2CommandGroup::hasCommand(android::media::Session2Command arg0) const
	{
		return callMethod<jboolean>(
			"hasCommand",
			"(Landroid/media/Session2Command;)Z",
			arg0.object()
		);
	}
	inline jboolean Session2CommandGroup::hasCommand(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasCommand",
			"(I)Z",
			arg0
		);
	}
	inline void Session2CommandGroup::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

