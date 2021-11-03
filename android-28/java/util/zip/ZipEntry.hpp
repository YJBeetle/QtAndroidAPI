#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;
namespace java::nio::file::attribute
{
	class FileTime;
}
namespace java::time
{
	class LocalDateTime;
}

namespace java::util::zip
{
	class ZipEntry : public JObject
	{
	public:
		// Fields
		static jint DEFLATED();
		static jint STORED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZipEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZipEntry(QAndroidJniObject obj);
		
		// Constructors
		ZipEntry(JString arg0);
		ZipEntry(java::util::zip::ZipEntry &arg0);
		
		// Methods
		JObject clone() const;
		JString getComment() const;
		jlong getCompressedSize() const;
		jlong getCrc() const;
		java::nio::file::attribute::FileTime getCreationTime() const;
		JByteArray getExtra() const;
		java::nio::file::attribute::FileTime getLastAccessTime() const;
		java::nio::file::attribute::FileTime getLastModifiedTime() const;
		jint getMethod() const;
		JString getName() const;
		jlong getSize() const;
		jlong getTime() const;
		java::time::LocalDateTime getTimeLocal() const;
		jint hashCode() const;
		jboolean isDirectory() const;
		void setComment(JString arg0) const;
		void setCompressedSize(jlong arg0) const;
		void setCrc(jlong arg0) const;
		java::util::zip::ZipEntry setCreationTime(java::nio::file::attribute::FileTime arg0) const;
		void setExtra(JByteArray arg0) const;
		java::util::zip::ZipEntry setLastAccessTime(java::nio::file::attribute::FileTime arg0) const;
		java::util::zip::ZipEntry setLastModifiedTime(java::nio::file::attribute::FileTime arg0) const;
		void setMethod(jint arg0) const;
		void setSize(jlong arg0) const;
		void setTime(jlong arg0) const;
		void setTimeLocal(java::time::LocalDateTime arg0) const;
		JString toString() const;
	};
} // namespace java::util::zip

