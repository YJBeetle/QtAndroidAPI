#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::net
{
	class SocketAddress;
}
namespace java::nio::channels
{
	class AsynchronousChannelGroup;
}
namespace java::nio::channels::spi
{
	class AsynchronousChannelProvider;
}

namespace java::nio::channels
{
	class AsynchronousServerSocketChannel : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsynchronousServerSocketChannel(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousServerSocketChannel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject open();
		static QAndroidJniObject open(java::nio::channels::AsynchronousChannelGroup arg0);
		QAndroidJniObject accept();
		void accept(jobject arg0, __JniBaseClass arg1);
		QAndroidJniObject bind(java::net::SocketAddress arg0);
		QAndroidJniObject bind(java::net::SocketAddress arg0, jint arg1);
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject provider();
		QAndroidJniObject setOption(__JniBaseClass arg0, jobject arg1);
	};
} // namespace java::nio::channels

