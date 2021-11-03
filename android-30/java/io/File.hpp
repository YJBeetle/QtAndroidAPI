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
		jboolean canExecute() const;
		jboolean canRead() const;
		jboolean canWrite() const;
		jint compareTo(java::io::File arg0) const;
		jint compareTo(JObject arg0) const;
		jboolean createNewFile() const;
		jboolean _delete() const;
		void deleteOnExit() const;
		jboolean equals(JObject arg0) const;
		jboolean exists() const;
		java::io::File getAbsoluteFile() const;
		JString getAbsolutePath() const;
		java::io::File getCanonicalFile() const;
		JString getCanonicalPath() const;
		jlong getFreeSpace() const;
		JString getName() const;
		JString getParent() const;
		java::io::File getParentFile() const;
		JString getPath() const;
		jlong getTotalSpace() const;
		jlong getUsableSpace() const;
		jint hashCode() const;
		jboolean isAbsolute() const;
		jboolean isDirectory() const;
		jboolean isFile() const;
		jboolean isHidden() const;
		jlong lastModified() const;
		jlong length() const;
		JArray list() const;
		JArray list(JObject arg0) const;
		JArray listFiles() const;
		JArray listFiles(JObject arg0) const;
		jboolean mkdir() const;
		jboolean mkdirs() const;
		jboolean renameTo(java::io::File arg0) const;
		jboolean setExecutable(jboolean arg0) const;
		jboolean setExecutable(jboolean arg0, jboolean arg1) const;
		jboolean setLastModified(jlong arg0) const;
		jboolean setReadOnly() const;
		jboolean setReadable(jboolean arg0) const;
		jboolean setReadable(jboolean arg0, jboolean arg1) const;
		jboolean setWritable(jboolean arg0) const;
		jboolean setWritable(jboolean arg0, jboolean arg1) const;
		JObject toPath() const;
		JString toString() const;
		java::net::URI toURI() const;
		java::net::URL toURL() const;
	};
} // namespace java::io

