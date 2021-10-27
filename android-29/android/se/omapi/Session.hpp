#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::se::omapi
{
	class Channel;
}
namespace __jni_impl::android::se::omapi
{
	class Reader;
}

namespace __jni_impl::android::se::omapi
{
	class Session : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void closeChannels();
		jbyteArray getATR();
		QAndroidJniObject getReader();
		jboolean isClosed();
		QAndroidJniObject openBasicChannel(jbyteArray arg0);
		QAndroidJniObject openBasicChannel(jbyteArray arg0, jbyte arg1);
		QAndroidJniObject openLogicalChannel(jbyteArray arg0);
		QAndroidJniObject openLogicalChannel(jbyteArray arg0, jbyte arg1);
	};
} // namespace __jni_impl::android::se::omapi

#include "./Channel.hpp"
#include "./Reader.hpp"

namespace __jni_impl::android::se::omapi
{
	// Fields
	
	// Constructors
	void Session::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.se.omapi.Session",
			"(V)V");
	}
	
	// Methods
	void Session::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Session::closeChannels()
	{
		__thiz.callMethod<void>(
			"closeChannels",
			"()V"
		);
	}
	jbyteArray Session::getATR()
	{
		return __thiz.callObjectMethod(
			"getATR",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject Session::getReader()
	{
		return __thiz.callObjectMethod(
			"getReader",
			"()Landroid/se/omapi/Reader;"
		);
	}
	jboolean Session::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	QAndroidJniObject Session::openBasicChannel(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"openBasicChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0
		);
	}
	QAndroidJniObject Session::openBasicChannel(jbyteArray arg0, jbyte arg1)
	{
		return __thiz.callObjectMethod(
			"openBasicChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Session::openLogicalChannel(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"openLogicalChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0
		);
	}
	QAndroidJniObject Session::openLogicalChannel(jbyteArray arg0, jbyte arg1)
	{
		return __thiz.callObjectMethod(
			"openLogicalChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::se::omapi

namespace android::se::omapi
{
	class Session : public __jni_impl::android::se::omapi::Session
	{
	public:
		Session(QAndroidJniObject obj) { __thiz = obj; }
		Session()
		{
			__constructor();
		}
	};
} // namespace android::se::omapi

