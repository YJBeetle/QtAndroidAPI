#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class CancellationSignal;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}

namespace android::os
{
	class FileUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileUtils(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void closeQuietly(java::io::FileDescriptor arg0);
		static void closeQuietly(__JniBaseClass arg0);
		static jlong copy(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1);
		static jlong copy(java::io::InputStream arg0, java::io::OutputStream arg1);
		static jlong copy(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1, android::os::CancellationSignal arg2, __JniBaseClass arg3, __JniBaseClass arg4);
		static jlong copy(java::io::InputStream arg0, java::io::OutputStream arg1, android::os::CancellationSignal arg2, __JniBaseClass arg3, __JniBaseClass arg4);
	};
} // namespace android::os

