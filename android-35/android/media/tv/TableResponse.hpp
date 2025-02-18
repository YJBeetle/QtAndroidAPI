#pragma once

#include "../../../JByteArray.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/SharedMemory.def.hpp"
#include "./TableResponse.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject TableResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.TableResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TableResponse::TableResponse(jint arg0, jint arg1, jint arg2, android::net::Uri arg3, jint arg4, jint arg5)
		: android::media::tv::BroadcastInfoResponse(
			"android.media.tv.TableResponse",
			"(IIILandroid/net/Uri;II)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		) {}
	
	// Methods
	inline jint TableResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint TableResponse::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	inline JByteArray TableResponse::getTableByteArray() const
	{
		return callObjectMethod(
			"getTableByteArray",
			"()[B"
		);
	}
	inline android::os::SharedMemory TableResponse::getTableSharedMemory() const
	{
		return callObjectMethod(
			"getTableSharedMemory",
			"()Landroid/os/SharedMemory;"
		);
	}
	inline android::net::Uri TableResponse::getTableUri() const
	{
		return callObjectMethod(
			"getTableUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint TableResponse::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline void TableResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./BroadcastInfoResponse.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
