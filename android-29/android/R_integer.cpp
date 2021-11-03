#include "./R_integer.hpp"

namespace android
{
	// Fields
	jint R_integer::config_longAnimTime()
	{
		return getStaticField<jint>(
			"android.R$integer",
			"config_longAnimTime"
		);
	}
	jint R_integer::config_mediumAnimTime()
	{
		return getStaticField<jint>(
			"android.R$integer",
			"config_mediumAnimTime"
		);
	}
	jint R_integer::config_shortAnimTime()
	{
		return getStaticField<jint>(
			"android.R$integer",
			"config_shortAnimTime"
		);
	}
	jint R_integer::status_bar_notification_info_maxnum()
	{
		return getStaticField<jint>(
			"android.R$integer",
			"status_bar_notification_info_maxnum"
		);
	}
	
	// QAndroidJniObject forward
	R_integer::R_integer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_integer::R_integer()
		: JObject(
			"android.R$integer",
			"()V"
		) {}
	
	// Methods
} // namespace android

