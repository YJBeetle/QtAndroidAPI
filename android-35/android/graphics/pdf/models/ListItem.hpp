#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./ListItem.def.hpp"

namespace android::graphics::pdf::models
{
	// Fields
	inline JObject ListItem::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.pdf.models.ListItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ListItem::ListItem(JString arg0, jboolean arg1)
		: JObject(
			"android.graphics.pdf.models.ListItem",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jint ListItem::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ListItem::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString ListItem::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		);
	}
	inline jint ListItem::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ListItem::isSelected() const
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
	inline JString ListItem::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ListItem::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics::pdf::models

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf::models;
#endif
