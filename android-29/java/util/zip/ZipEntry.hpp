#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ZipEntry : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEFLATED();
		static jint STORED();
		
		// QJniObject forward
		template<typename ...Ts> explicit ZipEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ZipEntry(QJniObject obj);
		
		// Constructors
		ZipEntry(jstring arg0);
		ZipEntry(java::util::zip::ZipEntry &arg0);
		
		// Methods
		jobject clone();
		jstring getComment();
		jlong getCompressedSize();
		jlong getCrc();
		java::nio::file::attribute::FileTime getCreationTime();
		jbyteArray getExtra();
		java::nio::file::attribute::FileTime getLastAccessTime();
		java::nio::file::attribute::FileTime getLastModifiedTime();
		jint getMethod();
		jstring getName();
		jlong getSize();
		jlong getTime();
		java::time::LocalDateTime getTimeLocal();
		jint hashCode();
		jboolean isDirectory();
		void setComment(jstring arg0);
		void setCompressedSize(jlong arg0);
		void setCrc(jlong arg0);
		java::util::zip::ZipEntry setCreationTime(java::nio::file::attribute::FileTime arg0);
		void setExtra(jbyteArray arg0);
		java::util::zip::ZipEntry setLastAccessTime(java::nio::file::attribute::FileTime arg0);
		java::util::zip::ZipEntry setLastModifiedTime(java::nio::file::attribute::FileTime arg0);
		void setMethod(jint arg0);
		void setSize(jlong arg0);
		void setTime(jlong arg0);
		void setTimeLocal(java::time::LocalDateTime arg0);
		jstring toString();
	};
} // namespace java::util::zip

