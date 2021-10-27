#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class Tag;
}

namespace __jni_impl::android::nfc::tech
{
	class IsoDep : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getHiLayerResponse();
		jbyteArray getHistoricalBytes();
		jint getMaxTransceiveLength();
		QAndroidJniObject getTag();
		jint getTimeout();
		jboolean isConnected();
		jboolean isExtendedLengthApduSupported();
		void setTimeout(jint arg0);
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace __jni_impl::android::nfc::tech

#include "../Tag.hpp"

namespace __jni_impl::android::nfc::tech
{
	// Fields
	
	// Constructors
	void IsoDep::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.tech.IsoDep",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject IsoDep::get(__jni_impl::android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.IsoDep",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/IsoDep;",
			arg0.__jniObject().object()
		);
	}
	void IsoDep::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void IsoDep::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyteArray IsoDep::getHiLayerResponse()
	{
		return __thiz.callObjectMethod(
			"getHiLayerResponse",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray IsoDep::getHistoricalBytes()
	{
		return __thiz.callObjectMethod(
			"getHistoricalBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jint IsoDep::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	QAndroidJniObject IsoDep::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint IsoDep::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean IsoDep::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean IsoDep::isExtendedLengthApduSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isExtendedLengthApduSupported",
			"()Z"
		);
	}
	void IsoDep::setTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	jbyteArray IsoDep::transceive(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace __jni_impl::android::nfc::tech

namespace android::nfc::tech
{
	class IsoDep : public __jni_impl::android::nfc::tech::IsoDep
	{
	public:
		IsoDep(QAndroidJniObject obj) { __thiz = obj; }
		IsoDep()
		{
			__constructor();
		}
	};
} // namespace android::nfc::tech

