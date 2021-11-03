#include "./R_dimen.hpp"

namespace android
{
	// Fields
	jint R_dimen::app_icon_size()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"app_icon_size"
		);
	}
	jint R_dimen::dialog_min_width_major()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"dialog_min_width_major"
		);
	}
	jint R_dimen::dialog_min_width_minor()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"dialog_min_width_minor"
		);
	}
	jint R_dimen::notification_large_icon_height()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"notification_large_icon_height"
		);
	}
	jint R_dimen::notification_large_icon_width()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"notification_large_icon_width"
		);
	}
	jint R_dimen::system_app_widget_background_radius()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"system_app_widget_background_radius"
		);
	}
	jint R_dimen::system_app_widget_inner_radius()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"system_app_widget_inner_radius"
		);
	}
	jint R_dimen::thumbnail_height()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"thumbnail_height"
		);
	}
	jint R_dimen::thumbnail_width()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"thumbnail_width"
		);
	}
	
	// QAndroidJniObject forward
	R_dimen::R_dimen(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_dimen::R_dimen()
		: JObject(
			"android.R$dimen",
			"()V"
		) {}
	
	// Methods
} // namespace android

