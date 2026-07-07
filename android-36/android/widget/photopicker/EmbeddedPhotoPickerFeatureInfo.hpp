#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./EmbeddedPhotoPickerFeatureInfo.def.hpp"

namespace android::widget::photopicker
{
	// Fields
	inline JObject EmbeddedPhotoPickerFeatureInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.widget.photopicker.EmbeddedPhotoPickerFeatureInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint EmbeddedPhotoPickerFeatureInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong EmbeddedPhotoPickerFeatureInfo::getAccentColor() const
	{
		return callMethod<jlong>(
			"getAccentColor",
			"()J"
		);
	}
	inline jint EmbeddedPhotoPickerFeatureInfo::getMaxSelectionLimit() const
	{
		return callMethod<jint>(
			"getMaxSelectionLimit",
			"()I"
		);
	}
	inline JObject EmbeddedPhotoPickerFeatureInfo::getMimeTypes() const
	{
		return callObjectMethod(
			"getMimeTypes",
			"()Ljava/util/List;"
		);
	}
	inline JObject EmbeddedPhotoPickerFeatureInfo::getPreSelectedUris() const
	{
		return callObjectMethod(
			"getPreSelectedUris",
			"()Ljava/util/List;"
		);
	}
	inline jint EmbeddedPhotoPickerFeatureInfo::getThemeNightMode() const
	{
		return callMethod<jint>(
			"getThemeNightMode",
			"()I"
		);
	}
	inline jboolean EmbeddedPhotoPickerFeatureInfo::isOrderedSelection() const
	{
		return callMethod<jboolean>(
			"isOrderedSelection",
			"()Z"
		);
	}
	inline JString EmbeddedPhotoPickerFeatureInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void EmbeddedPhotoPickerFeatureInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget::photopicker

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget::photopicker;
#endif
