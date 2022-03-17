#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JString;
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
	class ParcelFileDescriptor : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint MODE_APPEND();
		static jint MODE_CREATE();
		static jint MODE_READ_ONLY();
		static jint MODE_READ_WRITE();
		static jint MODE_TRUNCATE();
		static jint MODE_WORLD_READABLE();
		static jint MODE_WORLD_WRITEABLE();
		static jint MODE_WRITE_ONLY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParcelFileDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ParcelFileDescriptor(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ParcelFileDescriptor(android::os::ParcelFileDescriptor &arg0);
		
		// Methods
		static android::os::ParcelFileDescriptor adoptFd(jint arg0);
		static JArray createPipe();
		static JArray createReliablePipe();
		static JArray createReliableSocketPair();
		static JArray createSocketPair();
		static android::os::ParcelFileDescriptor dup(java::io::FileDescriptor arg0);
		static android::os::ParcelFileDescriptor fromDatagramSocket(java::net::DatagramSocket arg0);
		static android::os::ParcelFileDescriptor fromFd(jint arg0);
		static android::os::ParcelFileDescriptor fromSocket(java::net::Socket arg0);
		static android::os::ParcelFileDescriptor open(java::io::File arg0, jint arg1);
		static android::os::ParcelFileDescriptor open(java::io::File arg0, jint arg1, android::os::Handler arg2, JObject arg3);
		static jint parseMode(JString arg0);
		jboolean canDetectErrors() const;
		void checkError() const;
		void close() const;
		void closeWithError(JString arg0) const;
		jint describeContents() const;
		jint detachFd() const;
		android::os::ParcelFileDescriptor dup() const;
		jint getFd() const;
		java::io::FileDescriptor getFileDescriptor() const;
		jlong getStatSize() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

