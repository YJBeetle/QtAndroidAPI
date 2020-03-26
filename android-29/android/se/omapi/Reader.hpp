#pragma once

#ifndef ANDROID_SE_OMAPI_READER
#define ANDROID_SE_OMAPI_READER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::se::omapi
{
	class Session;
}
namespace __jni_impl::android::se::omapi
{
	class SEService;
}

namespace __jni_impl::android::se::omapi
{
	class Reader : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		QAndroidJniObject openSession();
		jboolean isSecureElementPresent();
		QAndroidJniObject getSEService();
		void closeSessions();
	};
} // namespace __jni_impl::android::se::omapi

#include "Session.hpp"
#include "SEService.hpp"

namespace __jni_impl::android::se::omapi
{
	// Fields
	
	// Constructors
	void Reader::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.se.omapi.Reader",
			"(V)V");
	}
	
	// Methods
	jstring Reader::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Reader::openSession()
	{
		return __thiz.callObjectMethod(
			"openSession",
			"()Landroid/se/omapi/Session;"
		);
	}
	jboolean Reader::isSecureElementPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isSecureElementPresent",
			"()Z"
		);
	}
	QAndroidJniObject Reader::getSEService()
	{
		return __thiz.callObjectMethod(
			"getSEService",
			"()Landroid/se/omapi/SEService;"
		);
	}
	void Reader::closeSessions()
	{
		__thiz.callMethod<void>(
			"closeSessions",
			"()V"
		);
	}
} // namespace __jni_impl::android::se::omapi

namespace android::se::omapi
{
	class Reader : public __jni_impl::android::se::omapi::Reader
	{
	public:
		Reader(QAndroidJniObject obj) { __thiz = obj; }
		Reader()
		{
			__constructor();
		}
	};
} // namespace android::se::omapi

#endif // ANDROID_SE_OMAPI_READER

