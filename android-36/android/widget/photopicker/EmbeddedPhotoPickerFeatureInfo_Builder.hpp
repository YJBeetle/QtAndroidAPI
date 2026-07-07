#pragma once

#include "./EmbeddedPhotoPickerFeatureInfo.def.hpp"
#include "./EmbeddedPhotoPickerFeatureInfo_Builder.def.hpp"

namespace android::widget::photopicker
{
	// Fields
	
	// Constructors
	inline EmbeddedPhotoPickerFeatureInfo_Builder::EmbeddedPhotoPickerFeatureInfo_Builder()
		: JObject(
			"android.widget.photopicker.EmbeddedPhotoPickerFeatureInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo EmbeddedPhotoPickerFeatureInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/widget/photopicker/EmbeddedPhotoPickerFeatureInfo;"
		);
	}
	inline android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder EmbeddedPhotoPickerFeatureInfo_Builder::setAccentColor(jlong arg0) const
	{
		return callObjectMethod(
			"setAccentColor",
			"(J)Landroid/widget/photopicker/EmbeddedPhotoPickerFeatureInfo$Builder;",
			arg0
		);
	}
	inline android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder EmbeddedPhotoPickerFeatureInfo_Builder::setMaxSelectionLimit(jint arg0) const
	{
		return callObjectMethod(
			"setMaxSelectionLimit",
			"(I)Landroid/widget/photopicker/EmbeddedPhotoPickerFeatureInfo$Builder;",
			arg0
		);
	}
	inline android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder EmbeddedPhotoPickerFeatureInfo_Builder::setMimeTypes(JObject arg0) const
	{
		return callObjectMethod(
			"setMimeTypes",
			"(Ljava/util/List;)Landroid/widget/photopicker/EmbeddedPhotoPickerFeatureInfo$Builder;",
			arg0.object()
		);
	}
	inline android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder EmbeddedPhotoPickerFeatureInfo_Builder::setOrderedSelection(jboolean arg0) const
	{
		return callObjectMethod(
			"setOrderedSelection",
			"(Z)Landroid/widget/photopicker/EmbeddedPhotoPickerFeatureInfo$Builder;",
			arg0
		);
	}
	inline android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder EmbeddedPhotoPickerFeatureInfo_Builder::setPreSelectedUris(JObject arg0) const
	{
		return callObjectMethod(
			"setPreSelectedUris",
			"(Ljava/util/List;)Landroid/widget/photopicker/EmbeddedPhotoPickerFeatureInfo$Builder;",
			arg0.object()
		);
	}
	inline android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder EmbeddedPhotoPickerFeatureInfo_Builder::setThemeNightMode(jint arg0) const
	{
		return callObjectMethod(
			"setThemeNightMode",
			"(I)Landroid/widget/photopicker/EmbeddedPhotoPickerFeatureInfo$Builder;",
			arg0
		);
	}
} // namespace android::widget::photopicker

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget::photopicker;
#endif
