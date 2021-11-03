#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
namespace java::net
{
	class URI;
}
namespace java::net
{
	class URL;
}

namespace java::io
{
	class File : public JObject
	{
	public:
		// Fields
		static JString pathSeparator();
		static jchar pathSeparatorChar();
		static JString separator();
		static jchar separatorChar();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit File(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		File(QAndroidJniObject obj);
		
		// Constructors
		File(JString arg0);
		File(java::net::URI arg0);
		File(java::io::File &arg0, JString arg1);
		File(JString arg0, JString arg1);
		
		// Methods
		static java::io::File createTempFile(JString arg0, JString arg1);
		static java::io::File createTempFile(JString arg0, JString arg1, java::io::File arg2);
		static JArray listRoots();
		jboolean canExecute();
		jboolean canRead();
		jboolean canWrite();
		jint compareTo(java::io::File arg0);
		jint compareTo(JObject arg0);
		jboolean createNewFile();
		jboolean _delete();
		void deleteOnExit();
		jboolean equals(JObject arg0);
		jboolean exists();
		java::io::File getAbsoluteFile();
		JString getAbsolutePath();
		java::io::File getCanonicalFile();
		JString getCanonicalPath();
		jlong getFreeSpace();
		JString getName();
		JString getParent();
		java::io::File getParentFile();
		JString getPath();
		jlong getTotalSpace();
		jlong getUsableSpace();
		jint hashCode();
		jboolean isAbsolute();
		jboolean isDirectory();
		jboolean isFile();
		jboolean isHidden();
		jlong lastModified();
		jlong length();
		JArray list();
		JArray list(JObject arg0);
		JArray listFiles();
		JArray listFiles(JObject arg0);
		jboolean mkdir();
		jboolean mkdirs();
		jboolean renameTo(java::io::File arg0);
		jboolean setExecutable(jboolean arg0);
		jboolean setExecutable(jboolean arg0, jboolean arg1);
		jboolean setLastModified(jlong arg0);
		jboolean setReadOnly();
		jboolean setReadable(jboolean arg0);
		jboolean setReadable(jboolean arg0, jboolean arg1);
		jboolean setWritable(jboolean arg0);
		jboolean setWritable(jboolean arg0, jboolean arg1);
		JObject toPath();
		JString toString();
		java::net::URI toURI();
		java::net::URL toURL();
	};
} // namespace java::io

