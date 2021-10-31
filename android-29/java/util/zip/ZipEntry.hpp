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
		
		ZipEntry(QAndroidJniObject obj);
		// Constructors
		ZipEntry(jstring arg0);
		ZipEntry(java::util::zip::ZipEntry &arg0);
		ZipEntry() = default;
		
		// Methods
		jobject clone();
		jstring getComment();
		jlong getCompressedSize();
		jlong getCrc();
		QAndroidJniObject getCreationTime();
		jbyteArray getExtra();
		QAndroidJniObject getLastAccessTime();
		QAndroidJniObject getLastModifiedTime();
		jint getMethod();
		jstring getName();
		jlong getSize();
		jlong getTime();
		QAndroidJniObject getTimeLocal();
		jint hashCode();
		jboolean isDirectory();
		void setComment(jstring arg0);
		void setCompressedSize(jlong arg0);
		void setCrc(jlong arg0);
		QAndroidJniObject setCreationTime(java::nio::file::attribute::FileTime arg0);
		void setExtra(jbyteArray arg0);
		QAndroidJniObject setLastAccessTime(java::nio::file::attribute::FileTime arg0);
		QAndroidJniObject setLastModifiedTime(java::nio::file::attribute::FileTime arg0);
		void setMethod(jint arg0);
		void setSize(jlong arg0);
		void setTime(jlong arg0);
		void setTimeLocal(java::time::LocalDateTime arg0);
		jstring toString();
	};
} // namespace java::util::zip

