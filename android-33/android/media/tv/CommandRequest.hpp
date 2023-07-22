#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./CommandRequest.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JString CommandRequest::ARGUMENT_TYPE_JSON()
	{
		return getStaticObjectField(
			"android.media.tv.CommandRequest",
			"ARGUMENT_TYPE_JSON",
			"Ljava/lang/String;"
		);
	}
	inline JString CommandRequest::ARGUMENT_TYPE_XML()
	{
		return getStaticObjectField(
			"android.media.tv.CommandRequest",
			"ARGUMENT_TYPE_XML",
			"Ljava/lang/String;"
		);
	}
	inline JObject CommandRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.CommandRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline CommandRequest::CommandRequest(jint arg0, jint arg1, JString arg2, JString arg3, JString arg4, JString arg5)
		: android::media::tv::BroadcastInfoRequest(
			"android.media.tv.CommandRequest",
			"(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>()
		) {}
	
	// Methods
	inline jint CommandRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString CommandRequest::getArgumentType() const
	{
		return callObjectMethod(
			"getArgumentType",
			"()Ljava/lang/String;"
		);
	}
	inline JString CommandRequest::getArguments() const
	{
		return callObjectMethod(
			"getArguments",
			"()Ljava/lang/String;"
		);
	}
	inline JString CommandRequest::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString CommandRequest::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	inline void CommandRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

// Base class headers
#include "./BroadcastInfoRequest.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
