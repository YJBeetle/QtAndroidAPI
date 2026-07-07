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
		MemoryFile(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MemoryFile(JString arg0, jint arg1);
		
		// Methods
		jboolean allowPurging(jboolean arg0) const;
		void close() const;
		java::io::InputStream getInputStream() const;
		java::io::OutputStream getOutputStream() const;
		jboolean isPurgingAllowed() const;
		jint length() const;
		jint readBytes(JByteArray arg0, jint arg1, jint arg2, jint arg3) const;
		void writeBytes(JByteArray arg0, jint arg1, jint arg2, jint arg3) const;
	};
} // namespace android::os

