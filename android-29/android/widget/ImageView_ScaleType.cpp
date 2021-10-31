#include "./ImageView_ScaleType.hpp"

namespace android::widget
{
	// Fields
	android::widget::ImageView_ScaleType ImageView_ScaleType::CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::CENTER_CROP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER_CROP",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::CENTER_INSIDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER_INSIDE",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_CENTER",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_END",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_START",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::FIT_XY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_XY",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	android::widget::ImageView_ScaleType ImageView_ScaleType::MATRIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"MATRIX",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	
	// QAndroidJniObject forward
	ImageView_ScaleType::ImageView_ScaleType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::widget::ImageView_ScaleType ImageView_ScaleType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.ImageView$ScaleType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/widget/ImageView$ScaleType;",
			arg0
		);
	}
	jarray ImageView_ScaleType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.ImageView$ScaleType",
			"values",
			"()[Landroid/widget/ImageView$ScaleType;"
		).object<jarray>();
	}
} // namespace android::widget

