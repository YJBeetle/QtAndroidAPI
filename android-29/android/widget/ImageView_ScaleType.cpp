#include "./ImageView_ScaleType.hpp"

namespace android::widget
{
	// Fields
	QAndroidJniObject ImageView_ScaleType::CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::CENTER_CROP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER_CROP",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::CENTER_INSIDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"CENTER_INSIDE",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::FIT_CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_CENTER",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::FIT_END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_END",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::FIT_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_START",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::FIT_XY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"FIT_XY",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	QAndroidJniObject ImageView_ScaleType::MATRIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ImageView$ScaleType",
			"MATRIX",
			"Landroid/widget/ImageView$ScaleType;"
		);
	}
	
	ImageView_ScaleType::ImageView_ScaleType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ImageView_ScaleType::valueOf(jstring arg0)
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

