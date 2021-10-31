#include "./R_dimen.hpp"

namespace android
{
	// Fields
	jint R_dimen::app_icon_size()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$dimen",
			"app_icon_size"
		);
	}
	jint R_dimen::dialog_min_width_major()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$dimen",
			"dialog_min_width_major"
		);
	}
	jint R_dimen::dialog_min_width_minor()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$dimen",
			"dialog_min_width_minor"
		);
	}
	jint R_dimen::notification_large_icon_height()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$dimen",
			"notification_large_icon_height"
		);
	}
	jint R_dimen::notification_large_icon_width()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$dimen",
			"notification_large_icon_width"
		);
	}
	jint R_dimen::thumbnail_height()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$dimen",
			"thumbnail_height"
		);
	}
	jint R_dimen::thumbnail_width()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$dimen",
			"thumbnail_width"
		);
	}
	
	// QAndroidJniObject forward
	R_dimen::R_dimen(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_dimen::R_dimen()
		: __JniBaseClass(
			"android.R$dimen",
			"()V"
		) {}
	
	// Methods
} // namespace android

