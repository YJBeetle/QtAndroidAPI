#pragma once

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_dimen : public __JniBaseClass
	{
	public:
		// Fields
		static jint app_icon_size();
		static jint dialog_min_width_major();
		static jint dialog_min_width_minor();
		static jint notification_large_icon_height();
		static jint notification_large_icon_width();
		static jint thumbnail_height();
		static jint thumbnail_width();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
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
	
	// Constructors
	void R_dimen::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$dimen",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_dimen : public __jni_impl::android::R_dimen
	{
	public:
		R_dimen(QAndroidJniObject obj) { __thiz = obj; }
		R_dimen()
		{
			__constructor();
		}
	};
} // namespace android

