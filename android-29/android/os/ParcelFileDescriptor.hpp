#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Parcel;
}
namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::net
{
	class DatagramSocket;
}
namespace java::net
{
	class Socket;
}

namespace android::os
{
	class ParcelFileDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint MODE_APPEND();
		static jint MODE_CREATE();
		static jint MODE_READ_ONLY();
		static jint MODE_READ_WRITE();
		static jint MODE_TRUNCATE();
		static jint MODE_WORLD_READABLE();
		static jint MODE_WORLD_WRITEABLE();
		static jint MODE_WRITE_ONLY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParcelFileDescriptor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ParcelFileDescriptor(QAndroidJniObject obj);
		
		// Constructors
		ParcelFileDescriptor(android::os::ParcelFileDescriptor &arg0);
		
		// Methods
		static QAndroidJniObject adoptFd(jint arg0);
		static jarray createPipe();
		static jarray createReliablePipe();
		static jarray createReliableSocketPair();
		static jarray createSocketPair();
		static QAndroidJniObject dup(java::io::FileDescriptor arg0);
		static QAndroidJniObject fromDatagramSocket(java::net::DatagramSocket arg0);
		static QAndroidJniObject fromFd(jint arg0);
		static QAndroidJniObject fromSocket(java::net::Socket arg0);
		static QAndroidJniObject open(java::io::File arg0, jint arg1);
		static QAndroidJniObject open(java::io::File arg0, jint arg1, android::os::Handler arg2, __JniBaseClass arg3);
		static jint parseMode(jstring arg0);
		jboolean canDetectErrors();
		void checkError();
		void close();
		void closeWithError(jstring arg0);
		jint describeContents();
		jint detachFd();
		QAndroidJniObject dup();
		jint getFd();
		QAndroidJniObject getFileDescriptor();
		jlong getStatSize();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

