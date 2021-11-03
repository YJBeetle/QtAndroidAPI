#pragma once

#include "../../JObject.hpp"

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
	class MemoryFile : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MemoryFile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MemoryFile(QAndroidJniObject obj);
		
		// Constructors
		MemoryFile(jstring arg0, jint arg1);
		
		// Methods
		jboolean allowPurging(jboolean arg0);
		void close();
		java::io::InputStream getInputStream();
		java::io::OutputStream getOutputStream();
		jboolean isPurgingAllowed();
		jint length();
		jint readBytes(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		void writeBytes(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::os

