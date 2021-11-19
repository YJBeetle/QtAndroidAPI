#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class File;
}
namespace java::io
{
	class FileInputStream;
}
namespace java::io
{
	class FileOutputStream;
}

namespace android::util
{
	class AtomicFile : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicFile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicFile(QJniObject obj);
		
		// Constructors
		AtomicFile(java::io::File arg0);
		
		// Methods
		void delete_() const;
		void failWrite(java::io::FileOutputStream arg0) const;
		void finishWrite(java::io::FileOutputStream arg0) const;
		java::io::File getBaseFile() const;
		jlong getLastModifiedTime() const;
		java::io::FileInputStream openRead() const;
		JByteArray readFully() const;
		java::io::FileOutputStream startWrite() const;
	};
} // namespace android::util

