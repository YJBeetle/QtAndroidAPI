#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::se::omapi
{
	class SEService;
}
namespace __jni_impl::android::se::omapi
{
	class Session;
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
		void closeSessions();
		jstring getName();
		QAndroidJniObject getSEService();
		jboolean isSecureElementPresent();
		QAndroidJniObject openSession();
	};
} // namespace __jni_impl::android::se::omapi

#include "SEService.hpp"
#include "Session.hpp"

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
	void Reader::closeSessions()
	{
		__thiz.callMethod<void>(
			"closeSessions",
			"()V"
		);
	}
	jstring Reader::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Reader::getSEService()
	{
		return __thiz.callObjectMethod(
			"getSEService",
			"()Landroid/se/omapi/SEService;"
		);
	}
	jboolean Reader::isSecureElementPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isSecureElementPresent",
			"()Z"
		);
	}
	QAndroidJniObject Reader::openSession()
	{
		return __thiz.callObjectMethod(
			"openSession",
			"()Landroid/se/omapi/Session;"
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

