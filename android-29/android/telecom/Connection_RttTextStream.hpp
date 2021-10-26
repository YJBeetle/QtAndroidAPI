#pragma once

#ifndef ANDROID_TELECOM_CONNECTION_RTTTEXTSTREAM
#define ANDROID_TELECOM_CONNECTION_RTTTEXTSTREAM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}

namespace __jni_impl::android::telecom
{
	class Connection_RttTextStream : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void write(jstring arg0);
		void write(const QString &arg0);
		jstring read();
		jstring readImmediately();
	};
} // namespace __jni_impl::android::telecom

#include "../os/ParcelFileDescriptor.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void Connection_RttTextStream::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.Connection$RttTextStream",
			"(V)V");
	}
	
	// Methods
	void Connection_RttTextStream::write(jstring arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Connection_RttTextStream::write(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Connection_RttTextStream::read()
	{
		return __thiz.callObjectMethod(
			"read",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection_RttTextStream::readImmediately()
	{
		return __thiz.callObjectMethod(
			"readImmediately",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class Connection_RttTextStream : public __jni_impl::android::telecom::Connection_RttTextStream
	{
	public:
		Connection_RttTextStream(QAndroidJniObject obj) { __thiz = obj; }
		Connection_RttTextStream()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_CONNECTION_RTTTEXTSTREAM

