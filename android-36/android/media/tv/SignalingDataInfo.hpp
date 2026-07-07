#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SignalingDataInfo.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JString SignalingDataInfo::CONTENT_ENCODING_BASE64()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataInfo",
			"CONTENT_ENCODING_BASE64",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataInfo::CONTENT_ENCODING_UTF_8()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataInfo",
			"CONTENT_ENCODING_UTF_8",
			"Ljava/lang/String;"
		);
	}
	inline JObject SignalingDataInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SignalingDataInfo::LLS_NO_GROUP_ID()
	{
		return getStaticField<jint>(
			"android.media.tv.SignalingDataInfo",
			"LLS_NO_GROUP_ID"
		);
	}
	
	// Constructors
	inline SignalingDataInfo::SignalingDataInfo(JString arg0, JString arg1, jint arg2, jint arg3)
		: JObject(
			"android.media.tv.SignalingDataInfo",
			"(Ljava/lang/String;Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3
		) {}
	inline SignalingDataInfo::SignalingDataInfo(JString arg0, JString arg1, jint arg2, jint arg3, JString arg4)
		: JObject(
			"android.media.tv.SignalingDataInfo",
			"(Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4.object<jstring>()
		) {}
	
	// Methods
	inline jint SignalingDataInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString SignalingDataInfo::getEncoding() const
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	inline jint SignalingDataInfo::getGroup() const
	{
		return callMethod<jint>(
			"getGroup",
			"()I"
		);
	}
	inline JString SignalingDataInfo::getSignalingDataType() const
	{
		return callObjectMethod(
			"getSignalingDataType",
			"()Ljava/lang/String;"
		);
	}
	inline JString SignalingDataInfo::getTable() const
	{
		return callObjectMethod(
			"getTable",
			"()Ljava/lang/String;"
		);
	}
	inline jint SignalingDataInfo::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline void SignalingDataInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
