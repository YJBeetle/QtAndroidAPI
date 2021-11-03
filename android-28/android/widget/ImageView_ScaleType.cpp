#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ImageView_ScaleType.hpp"

namespace android::widget
{
	// Fields
	android::widget::ImageView_ScaleType ImageView_ScaleType::CENTER()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::CENTER_CROP()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER_CROP",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::CENTER_INSIDE()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER_INSIDE",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_CENTER()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_CENTER",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_END()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_END",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_START()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_START",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_XY()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_XY",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::MATRIX()
	{
		return getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"MATRIX",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	
	// QJniObject forward
	ImageView_ScaleType::ImageView_ScaleType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::widget::ImageView_ScaleType ImageView_ScaleType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.widget.ImageView$ScaleType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/widget/ImageView$ScaleType;",
			arg0.object<jstring>()
		);
	}
	JArray ImageView_ScaleType::values()
	{
		return callStaticObjectMethod(
			"android.widget.ImageView$ScaleType",
			"values",
			"()[Landroid/widget/ImageView$ScaleType;"
		);
	}
} // namespace android::widget

