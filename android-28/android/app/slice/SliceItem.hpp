#pragma once

#include "../PendingIntent.def.hpp"
#include "../RemoteInput.def.hpp"
#include "./Slice.def.hpp"
#include "../../graphics/drawable/Icon.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./SliceItem.def.hpp"

namespace android::app::slice
{
	// Fields
	inline JObject SliceItem::CREATOR()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString SliceItem::FORMAT_ACTION()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString SliceItem::FORMAT_BUNDLE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString SliceItem::FORMAT_IMAGE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_IMAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString SliceItem::FORMAT_INT()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString SliceItem::FORMAT_LONG()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_LONG",
			"Ljava/lang/String;"
		);
	}
	inline JString SliceItem::FORMAT_REMOTE_INPUT()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_REMOTE_INPUT",
			"Ljava/lang/String;"
		);
	}
	inline JString SliceItem::FORMAT_SLICE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_SLICE",
			"Ljava/lang/String;"
		);
	}
	inline JString SliceItem::FORMAT_TEXT()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_TEXT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SliceItem::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::PendingIntent SliceItem::getAction() const
	{
		return callObjectMethod(
			"getAction",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline android::os::Bundle SliceItem::getBundle() const
	{
		return callObjectMethod(
			"getBundle",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString SliceItem::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SliceItem::getHints() const
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	inline android::graphics::drawable::Icon SliceItem::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline jint SliceItem::getInt() const
	{
		return callMethod<jint>(
			"getInt",
			"()I"
		);
	}
	inline jlong SliceItem::getLong() const
	{
		return callMethod<jlong>(
			"getLong",
			"()J"
		);
	}
	inline android::app::RemoteInput SliceItem::getRemoteInput() const
	{
		return callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;"
		);
	}
	inline android::app::slice::Slice SliceItem::getSlice() const
	{
		return callObjectMethod(
			"getSlice",
			"()Landroid/app/slice/Slice;"
		);
	}
	inline JString SliceItem::getSubType() const
	{
		return callObjectMethod(
			"getSubType",
			"()Ljava/lang/String;"
		);
	}
	inline JString SliceItem::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean SliceItem::hasHint(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasHint",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void SliceItem::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::slice

// Base class headers

