#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::net
{
	class DatagramSocket;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class Proxy;
}
namespace __jni_impl::java::net
{
	class Socket;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::net
{
	class URLConnection;
}
namespace __jni_impl::javax::net
{
	class SocketFactory;
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
		static QAndroidJniObject fromNetworkHandle(jlong arg0);
		void bindSocket(__jni_impl::java::io::FileDescriptor arg0);
		void bindSocket(__jni_impl::java::net::DatagramSocket arg0);
		void bindSocket(__jni_impl::java::net::Socket arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jarray getAllByName(jstring arg0);
		jarray getAllByName(const QString &arg0);
		QAndroidJniObject getByName(jstring arg0);
		QAndroidJniObject getByName(const QString &arg0);
		jlong getNetworkHandle();
		QAndroidJniObject getSocketFactory();
		jint hashCode();
		QAndroidJniObject openConnection(__jni_impl::java::net::URL arg0);
		QAndroidJniObject openConnection(__jni_impl::java::net::URL arg0, __jni_impl::java::net::Proxy arg1);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net

#include "../os/Parcel.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/Proxy.hpp"
#include "../../java/net/Socket.hpp"
#include "../../java/net/URL.hpp"
#include "../../java/net/URLConnection.hpp"
#include "../../javax/net/SocketFactory.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject Network::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.Network",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Network::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.Network",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Network::fromNetworkHandle(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Network",
			"fromNetworkHandle",
			"(J)Landroid/net/Network;",
			arg0
		);
	}
	void Network::bindSocket(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"bindSocket",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void Network::bindSocket(__jni_impl::java::net::DatagramSocket arg0)
	{
		__thiz.callMethod<void>(
			"bindSocket",
			"(Ljava/net/DatagramSocket;)V",
			arg0.__jniObject().object()
		);
	}
	void Network::bindSocket(__jni_impl::java::net::Socket arg0)
	{
		__thiz.callMethod<void>(
			"bindSocket",
			"(Ljava/net/Socket;)V",
			arg0.__jniObject().object()
		);
	}
	jint Network::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Network::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray Network::getAllByName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAllByName",
			"(Ljava/lang/String;)[Ljava/net/InetAddress;",
			arg0
		).object<jarray>();
	}
	jarray Network::getAllByName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAllByName",
			"(Ljava/lang/String;)[Ljava/net/InetAddress;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	QAndroidJniObject Network::getByName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getByName",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0
		);
	}
	QAndroidJniObject Network::getByName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getByName",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong Network::getNetworkHandle()
	{
		return __thiz.callMethod<jlong>(
			"getNetworkHandle",
			"()J"
		);
	}
	QAndroidJniObject Network::getSocketFactory()
	{
		return __thiz.callObjectMethod(
			"getSocketFactory",
			"()Ljavax/net/SocketFactory;"
		);
	}
	jint Network::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject Network::openConnection(__jni_impl::java::net::URL arg0)
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"(Ljava/net/URL;)Ljava/net/URLConnection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Network::openConnection(__jni_impl::java::net::URL arg0, __jni_impl::java::net::Proxy arg1)
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"(Ljava/net/URL;Ljava/net/Proxy;)Ljava/net/URLConnection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring Network::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Network::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

