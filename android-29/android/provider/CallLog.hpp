#pragma once

#ifndef ANDROID_PROVIDER_CALLLOG
#define ANDROID_PROVIDER_CALLLOG

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class CallLog : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject AUTHORITY();
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject CallLog::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog",
			"AUTHORITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CallLog::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void CallLog::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CallLog",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CallLog : public __jni_impl::android::provider::CallLog
	{
	public:
		CallLog(QAndroidJniObject obj) { __thiz = obj; }
		CallLog()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CALLLOG

