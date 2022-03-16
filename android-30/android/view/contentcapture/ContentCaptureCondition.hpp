#pragma once

#include "../../content/LocusId.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ContentCaptureCondition.def.hpp"

namespace android::view::contentcapture
{
	// Fields
	inline JObject ContentCaptureCondition::CREATOR()
	{
		return getStaticObjectField(
			"android.view.contentcapture.ContentCaptureCondition",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ContentCaptureCondition::FLAG_IS_REGEX()
	{
		return getStaticField<jint>(
			"android.view.contentcapture.ContentCaptureCondition",
			"FLAG_IS_REGEX"
		);
	}
	
	// Constructors
	inline ContentCaptureCondition::ContentCaptureCondition(android::content::LocusId arg0, jint arg1)
		: JObject(
			"android.view.contentcapture.ContentCaptureCondition",
			"(Landroid/content/LocusId;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint ContentCaptureCondition::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ContentCaptureCondition::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ContentCaptureCondition::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline android::content::LocusId ContentCaptureCondition::getLocusId() const
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	inline jint ContentCaptureCondition::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ContentCaptureCondition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ContentCaptureCondition::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::contentcapture

// Base class headers

