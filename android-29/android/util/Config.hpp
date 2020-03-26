#pragma once

#ifndef ANDROID_UTIL_CONFIG
#define ANDROID_UTIL_CONFIG

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class Config : public __JniBaseClass
	{
	public:
		// Fields
		static jboolean DEBUG();
		static jboolean LOGD();
		static jboolean LOGV();
		static jboolean PROFILE();
		static jboolean RELEASE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jboolean Config::DEBUG()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.util.Config",
			"DEBUG"
		);
	}
	jboolean Config::LOGD()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.util.Config",
			"LOGD"
		);
	}
	jboolean Config::LOGV()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.util.Config",
			"LOGV"
		);
	}
	jboolean Config::PROFILE()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.util.Config",
			"PROFILE"
		);
	}
	jboolean Config::RELEASE()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.util.Config",
			"RELEASE"
		);
	}
	
	// Constructors
	void Config::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.Config",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class Config : public __jni_impl::android::util::Config
	{
	public:
		Config(QAndroidJniObject obj) { __thiz = obj; }
		Config()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_CONFIG

