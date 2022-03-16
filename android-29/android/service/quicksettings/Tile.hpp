#pragma once

#include "../../graphics/drawable/Icon.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./Tile.def.hpp"

namespace android::service::quicksettings
{
	// Fields
	inline JObject Tile::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quicksettings.Tile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Tile::STATE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.service.quicksettings.Tile",
			"STATE_ACTIVE"
		);
	}
	inline jint Tile::STATE_INACTIVE()
	{
		return getStaticField<jint>(
			"android.service.quicksettings.Tile",
			"STATE_INACTIVE"
		);
	}
	inline jint Tile::STATE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.service.quicksettings.Tile",
			"STATE_UNAVAILABLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Tile::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString Tile::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::graphics::drawable::Icon Tile::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JString Tile::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint Tile::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline JString Tile::getSubtitle() const
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void Tile::setContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Tile::setIcon(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	inline void Tile::setLabel(JString arg0) const
	{
		callMethod<void>(
			"setLabel",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Tile::setState(jint arg0) const
	{
		callMethod<void>(
			"setState",
			"(I)V",
			arg0
		);
	}
	inline void Tile::setSubtitle(JString arg0) const
	{
		callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Tile::updateTile() const
	{
		callMethod<void>(
			"updateTile",
			"()V"
		);
	}
	inline void Tile::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quicksettings

// Base class headers

