#pragma once

#include "../../JObject.hpp"

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
	class FileUtils : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileUtils(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void closeQuietly(java::io::FileDescriptor arg0);
		static void closeQuietly(JObject arg0);
		static jlong copy(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1);
		static jlong copy(java::io::InputStream arg0, java::io::OutputStream arg1);
		static jlong copy(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4);
		static jlong copy(java::io::InputStream arg0, java::io::OutputStream arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4);
	};
} // namespace android::os

