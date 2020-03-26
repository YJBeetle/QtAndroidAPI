#pragma once

#ifndef ANDROID_R_INTEGER
#define ANDROID_R_INTEGER

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_integer : public __JniBaseClass
	{
	public:
		// Fields
		static jint config_longAnimTime();
		static jint config_mediumAnimTime();
		static jint config_shortAnimTime();
		static jint status_bar_notification_info_maxnum();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	jint R_integer::config_longAnimTime()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$integer",
			"config_longAnimTime"
		);
	}
	jint R_integer::config_mediumAnimTime()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$integer",
			"config_mediumAnimTime"
		);
	}
	jint R_integer::config_shortAnimTime()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$integer",
			"config_shortAnimTime"
		);
	}
	jint R_integer::status_bar_notification_info_maxnum()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$integer",
			"status_bar_notification_info_maxnum"
		);
	}
	
	// Constructors
	void R_integer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$integer",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_integer : public __jni_impl::android::R_integer
	{
	public:
		R_integer(QAndroidJniObject obj) { __thiz = obj; }
		R_integer()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_INTEGER

