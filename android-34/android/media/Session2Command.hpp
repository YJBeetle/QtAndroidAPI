#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Session2Command.def.hpp"

namespace android::media
{
	// Fields
	inline jint Session2Command::COMMAND_CODE_CUSTOM()
	{
		return getStaticField<jint>(
			"android.media.Session2Command",
			"COMMAND_CODE_CUSTOM"
		);
	}
	inline JObject Session2Command::CREATOR()
	{
		return getStaticObjectField(
			"android.media.Session2Command",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline Session2Command::Session2Command(jint arg0)
		: JObject(
			"android.media.Session2Command",
			"(I)V",
			arg0
		) {}
	inline Session2Command::Session2Command(JString arg0, android::os::Bundle arg1)
		: JObject(
			"android.media.Session2Command",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline jint Session2Command::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Session2Command::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Session2Command::getCommandCode() const
	{
		return callMethod<jint>(
			"getCommandCode",
			"()I"
		);
	}
	inline JString Session2Command::getCustomAction() const
	{
		return callObjectMethod(
			"getCustomAction",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::Bundle Session2Command::getCustomExtras() const
	{
		return callObjectMethod(
			"getCustomExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint Session2Command::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Session2Command::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
