#pragma once

#include "./R_integer.def.hpp"

namespace android
{
	// Fields
	inline jint R_integer::config_longAnimTime()
	{
		return getStaticField<jint>(
			"android.R$integer",
			"config_longAnimTime"
		);
	}
	inline jint R_integer::config_mediumAnimTime()
	{
		return getStaticField<jint>(
			"android.R$integer",
			"config_mediumAnimTime"
		);
	}
	inline jint R_integer::config_shortAnimTime()
	{
		return getStaticField<jint>(
			"android.R$integer",
			"config_shortAnimTime"
		);
	}
	inline jint R_integer::status_bar_notification_info_maxnum()
	{
		return getStaticField<jint>(
			"android.R$integer",
			"status_bar_notification_info_maxnum"
		);
	}
	
	// Constructors
	inline R_integer::R_integer()
		: JObject(
			"android.R$integer",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

