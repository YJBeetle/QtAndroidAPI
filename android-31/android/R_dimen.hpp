#pragma once

#include "./R_dimen.def.hpp"

namespace android
{
	// Fields
	inline jint R_dimen::app_icon_size()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"app_icon_size"
		);
	}
	inline jint R_dimen::dialog_min_width_major()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"dialog_min_width_major"
		);
	}
	inline jint R_dimen::dialog_min_width_minor()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"dialog_min_width_minor"
		);
	}
	inline jint R_dimen::notification_large_icon_height()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"notification_large_icon_height"
		);
	}
	inline jint R_dimen::notification_large_icon_width()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"notification_large_icon_width"
		);
	}
	inline jint R_dimen::system_app_widget_background_radius()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"system_app_widget_background_radius"
		);
	}
	inline jint R_dimen::system_app_widget_inner_radius()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"system_app_widget_inner_radius"
		);
	}
	inline jint R_dimen::thumbnail_height()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"thumbnail_height"
		);
	}
	inline jint R_dimen::thumbnail_width()
	{
		return getStaticField<jint>(
			"android.R$dimen",
			"thumbnail_width"
		);
	}
	
	// Constructors
	inline R_dimen::R_dimen()
		: JObject(
			"android.R$dimen",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

