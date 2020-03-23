#pragma once

#ifndef ANDROID_NET_NETWORK
#define ANDROID_NET_NETWORK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class URLConnection;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::net
{
	class Proxy;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::javax::net
{
	class SocketFactory;
}
namespace __jni_impl::java::net
{
	class Socket;
}
namespace __jni_impl::java::net
{
	class DatagramSocket;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net
{
	class Network : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject openConnection(__jni_impl::java::net::URL arg0);
		QAndroidJniObject openConnection(__jni_impl::java::net::URL arg0, __jni_impl::java::net::Proxy arg1);
		QAndroidJniObject getByName(jstring arg0);
		QAndroidJniObject getAllByName(jstring arg0);
		QAndroidJniObject getSocketFactory();
		void bindSocket(__jni_impl::java::net::Socket arg0);
		void bindSocket(__jni_impl::java::net::DatagramSocket arg0);
		void bindSocket(__jni_impl::java::io::FileDescriptor arg0);
		static QAndroidJniObject fromNetworkHandle(jlong arg0);
		jlong getNetworkHandle();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net

#include "../../java/net/URLConnection.hpp"
#include "../../java/net/URL.hpp"
#include "../../java/net/Proxy.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../javax/net/SocketFactory.hpp"
#include "../../java/net/Socket.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject Network::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.Network",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void Network::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.Network",
			"(V)V");
	}
	
	// Methods
	jboolean Network::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Network::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Network::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Network::openConnection(__jni_impl::java::net::URL arg0)
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"(Ljava/net/URL;)Ljava/net/URLConnection;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Network::openConnection(__jni_impl::java::net::URL arg0, __jni_impl::java::net::Proxy arg1)
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"(Ljava/net/URL;Ljava/net/Proxy;)Ljava/net/URLConnection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Network::getByName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getByName",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0);
	}
	QAndroidJniObject Network::getAllByName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAllByName",
			"(Ljava/lang/String;)[Ljava/net/InetAddress;",
			arg0);
	}
	QAndroidJniObject Network::getSocketFactory()
	{
		return __thiz.callObjectMethod(
			"getSocketFactory",
			"()Ljavax/net/SocketFactory;");
	}
	void Network::bindSocket(__jni_impl::java::net::Socket arg0)
	{
		__thiz.callMethod<void>(
			"bindSocket",
			"(Ljava/net/Socket;)V",
			arg0.__jniObject().object());
	}
	void Network::bindSocket(__jni_impl::java::net::DatagramSocket arg0)
	{
		__thiz.callMethod<void>(
			"bindSocket",
			"(Ljava/net/DatagramSocket;)V",
			arg0.__jniObject().object());
	}
	void Network::bindSocket(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"bindSocket",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Network::fromNetworkHandle(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Network",
			"fromNetworkHandle",
			"(J)Landroid/net/Network;",
			arg0);
	}
	jlong Network::getNetworkHandle()
	{
		return __thiz.callMethod<jlong>(
			"getNetworkHandle",
			"()J");
	}
	jint Network::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Network::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class Network : public __jni_impl::android::net::Network
	{
	public:
		Network(QAndroidJniObject obj) { __thiz = obj; }
		Network()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_NETWORK

