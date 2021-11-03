#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JString;

namespace android::os
{
	class MemoryFile : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MemoryFile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MemoryFile(QJniObject obj);
		
		// Constructors
		MemoryFile(JString arg0, jint arg1);
		
		// Methods
		jboolean allowPurging(jboolean arg0);
		void close();
		java::io::InputStream getInputStream();
		java::io::OutputStream getOutputStream();
		jboolean isPurgingAllowed();
		jint length();
		jint readBytes(JByteArray arg0, jint arg1, jint arg2, jint arg3);
		void writeBytes(JByteArray arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::os

