#pragma once

#include "../../os/Parcel.def.hpp"
#include "./TableRequest.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject TableRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.TableRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TableRequest::TABLE_NAME_PAT()
	{
		return getStaticField<jint>(
			"android.media.tv.TableRequest",
			"TABLE_NAME_PAT"
		);
	}
	inline jint TableRequest::TABLE_NAME_PMT()
	{
		return getStaticField<jint>(
			"android.media.tv.TableRequest",
			"TABLE_NAME_PMT"
		);
	}
	
	// Constructors
	inline TableRequest::TableRequest(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: android::media::tv::BroadcastInfoRequest(
			"android.media.tv.TableRequest",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	inline jint TableRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint TableRequest::getTableId() const
	{
		return callMethod<jint>(
			"getTableId",
			"()I"
		);
	}
	inline jint TableRequest::getTableName() const
	{
		return callMethod<jint>(
			"getTableName",
			"()I"
		);
	}
	inline jint TableRequest::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline void TableRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
