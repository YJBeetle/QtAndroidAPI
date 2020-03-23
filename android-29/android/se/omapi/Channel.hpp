#pragma once

#ifndef ANDROID_SE_OMAPI_CHANNEL
#define ANDROID_SE_OMAPI_CHANNEL

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::se::omapi
{
	class Session;
}

namespace __jni_impl::android::se::omapi
{
	class Channel : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isOpen();
		void close();
		jboolean isBasicChannel();
		QAndroidJniObject transmit(jbyteArray arg0);
		QAndroidJniObject getSession();
		QAndroidJniObject getSelectResponse();
		jboolean selectNext();
	};
} // namespace __jni_impl::android::se::omapi

#include "Session.hpp"

namespace __jni_impl::android::se::omapi
{
	// Fields
	
	// Constructors
	void Channel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.se.omapi.Channel",
			"(V)V");
	}
	
	// Methods
	jboolean Channel::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z");
	}
	void Channel::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jboolean Channel::isBasicChannel()
	{
		return __thiz.callMethod<jboolean>(
			"isBasicChannel",
			"()Z");
	}
	QAndroidJniObject Channel::transmit(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transmit",
			"([B)[B",
			arg0);
	}
	QAndroidJniObject Channel::getSession()
	{
		return __thiz.callObjectMethod(
			"getSession",
			"()Landroid/se/omapi/Session;");
	}
	QAndroidJniObject Channel::getSelectResponse()
	{
		return __thiz.callObjectMethod(
			"getSelectResponse",
			"()[B");
	}
	jboolean Channel::selectNext()
	{
		return __thiz.callMethod<jboolean>(
			"selectNext",
			"()Z");
	}
} // namespace __jni_impl::android::se::omapi

namespace android::se::omapi
{
	class Channel : public __jni_impl::android::se::omapi::Channel
	{
	public:
		Channel(QAndroidJniObject obj) { __thiz = obj; }
		Channel()
		{
			__constructor();
		}
	};
} // namespace android::se::omapi

#endif // ANDROID_SE_OMAPI_CHANNEL

