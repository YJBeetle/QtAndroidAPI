#pragma once

#include "./AssistStructure_WindowNode.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./AssistStructure.def.hpp"

namespace android::app::assist
{
	// Fields
	inline JObject AssistStructure::CREATOR()
	{
		return getStaticObjectField(
			"android.app.assist.AssistStructure",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AssistStructure::AssistStructure()
		: JObject(
			"android.app.assist.AssistStructure",
			"()V"
		) {}
	
	// Methods
	inline jint AssistStructure::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong AssistStructure::getAcquisitionEndTime() const
	{
		return callMethod<jlong>(
			"getAcquisitionEndTime",
			"()J"
		);
	}
	inline jlong AssistStructure::getAcquisitionStartTime() const
	{
		return callMethod<jlong>(
			"getAcquisitionStartTime",
			"()J"
		);
	}
	inline android::content::ComponentName AssistStructure::getActivityComponent() const
	{
		return callObjectMethod(
			"getActivityComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	inline android::app::assist::AssistStructure_WindowNode AssistStructure::getWindowNodeAt(jint arg0) const
	{
		return callObjectMethod(
			"getWindowNodeAt",
			"(I)Landroid/app/assist/AssistStructure$WindowNode;",
			arg0
		);
	}
	inline jint AssistStructure::getWindowNodeCount() const
	{
		return callMethod<jint>(
			"getWindowNodeCount",
			"()I"
		);
	}
	inline jboolean AssistStructure::isHomeActivity() const
	{
		return callMethod<jboolean>(
			"isHomeActivity",
			"()Z"
		);
	}
	inline void AssistStructure::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::assist

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::assist;
#endif
