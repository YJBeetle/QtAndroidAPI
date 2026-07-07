#pragma once

#include "../../content/Context.def.hpp"
#include "./EmbeddedPhotoPickerProviderFactory.def.hpp"

namespace android::widget::photopicker
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject EmbeddedPhotoPickerProviderFactory::create(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.widget.photopicker.EmbeddedPhotoPickerProviderFactory",
			"create",
			"(Landroid/content/Context;)Landroid/widget/photopicker/EmbeddedPhotoPickerProvider;",
			arg0.object()
		);
	}
} // namespace android::widget::photopicker

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget::photopicker;
#endif
