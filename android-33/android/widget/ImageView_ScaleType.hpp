#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ImageView_ScaleType.def.hpp"

namespace android::widget
{
	// Fields
	inline android::widget::ImageView_ScaleType ImageView_ScaleType::CENTER()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	inline android::widget::ImageView_ScaleType ImageView_ScaleType::CENTER_CROP()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER_CROP",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	inline android::widget::ImageView_ScaleType ImageView_ScaleType::CENTER_INSIDE()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER_INSIDE",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	inline android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_CENTER()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_CENTER",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	inline android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_END()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_END",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	inline android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_START()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_START",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	inline android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_XY()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_XY",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	inline android::widget::ImageView_ScaleType ImageView_ScaleType::MATRIX()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"MATRIX",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::widget::ImageView_ScaleType ImageView_ScaleType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.widget.ImageView$ScaleType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/widget/ImageView$ScaleType;",
			arg0.object<jstring>()
		);
	}
	inline JArray ImageView_ScaleType::values()
	{
		return callStaticObjectMethod(
			"android.widget.ImageView$ScaleType",
			"values",
			"()[Landroid/widget/ImageView$ScaleType;"
		);
	}
} // namespace android::widget

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
