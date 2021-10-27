#pragma once

#include "../../__JniBaseClass.hpp"

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
	class MemoryFile : public __JniBaseClass
	{
	public:
		// Fields
		
		MemoryFile(QAndroidJniObject obj);
		// Constructors
		MemoryFile(jstring &arg0, jint &arg1);
		MemoryFile(const QString &arg0, jint &arg1);
		MemoryFile() = default;
		
		// Methods
		jboolean allowPurging(jboolean arg0);
		void close();
		QAndroidJniObject getInputStream();
		QAndroidJniObject getOutputStream();
		jboolean isPurgingAllowed();
		jint length();
		jint readBytes(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		void writeBytes(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::os

