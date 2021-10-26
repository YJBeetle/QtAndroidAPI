#pragma once

#ifndef JAVA_UTIL_ZIP_ZIPENTRY
#define JAVA_UTIL_ZIP_ZIPENTRY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::file::attribute
{
	class FileTime;
}
namespace __jni_impl::java::time
{
	class LocalDateTime;
}

namespace __jni_impl::java::util::zip
{
	class ZipEntry : public __JniBaseClass
	{
	public:
		// Fields
		static jint STORED();
		static jint DEFLATED();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::util::zip::ZipEntry arg0);
		
		// Methods
		jstring getName();
		jstring toString();
		jint hashCode();
		jobject clone();
		jint getMethod();
		jlong getSize();
		void setSize(jlong arg0);
		jlong getTime();
		void setTime(jlong arg0);
		void setTimeLocal(__jni_impl::java::time::LocalDateTime arg0);
		QAndroidJniObject getTimeLocal();
		QAndroidJniObject setLastAccessTime(__jni_impl::java::nio::file::attribute::FileTime arg0);
		QAndroidJniObject getLastAccessTime();
		QAndroidJniObject setCreationTime(__jni_impl::java::nio::file::attribute::FileTime arg0);
		QAndroidJniObject getCreationTime();
		jlong getCompressedSize();
		void setCompressedSize(jlong arg0);
		void setCrc(jlong arg0);
		jlong getCrc();
		void setMethod(jint arg0);
		void setExtra(jbyteArray arg0);
		jbyteArray getExtra();
		void setComment(jstring arg0);
		void setComment(const QString &arg0);
		jstring getComment();
		jboolean isDirectory();
		QAndroidJniObject getLastModifiedTime();
		QAndroidJniObject setLastModifiedTime(__jni_impl::java::nio::file::attribute::FileTime arg0);
	};
} // namespace __jni_impl::java::util::zip

#include "../../nio/file/attribute/FileTime.hpp"
#include "../../time/LocalDateTime.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	jint ZipEntry::STORED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipEntry",
			"STORED"
		);
	}
	jint ZipEntry::DEFLATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipEntry",
			"DEFLATED"
		);
	}
	
	// Constructors
	void ZipEntry::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ZipEntry::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipEntry",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ZipEntry::__constructor(__jni_impl::java::util::zip::ZipEntry arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring ZipEntry::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ZipEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ZipEntry::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject ZipEntry::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint ZipEntry::getMethod()
	{
		return __thiz.callMethod<jint>(
			"getMethod",
			"()I"
		);
	}
	jlong ZipEntry::getSize()
	{
		return __thiz.callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	void ZipEntry::setSize(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setSize",
			"(J)V",
			arg0
		);
	}
	jlong ZipEntry::getTime()
	{
		return __thiz.callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	void ZipEntry::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void ZipEntry::setTimeLocal(__jni_impl::java::time::LocalDateTime arg0)
	{
		__thiz.callMethod<void>(
			"setTimeLocal",
			"(Ljava/time/LocalDateTime;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZipEntry::getTimeLocal()
	{
		return __thiz.callObjectMethod(
			"getTimeLocal",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject ZipEntry::setLastAccessTime(__jni_impl::java::nio::file::attribute::FileTime arg0)
	{
		return __thiz.callObjectMethod(
			"setLastAccessTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZipEntry::getLastAccessTime()
	{
		return __thiz.callObjectMethod(
			"getLastAccessTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	QAndroidJniObject ZipEntry::setCreationTime(__jni_impl::java::nio::file::attribute::FileTime arg0)
	{
		return __thiz.callObjectMethod(
			"setCreationTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZipEntry::getCreationTime()
	{
		return __thiz.callObjectMethod(
			"getCreationTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	jlong ZipEntry::getCompressedSize()
	{
		return __thiz.callMethod<jlong>(
			"getCompressedSize",
			"()J"
		);
	}
	void ZipEntry::setCompressedSize(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setCompressedSize",
			"(J)V",
			arg0
		);
	}
	void ZipEntry::setCrc(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setCrc",
			"(J)V",
			arg0
		);
	}
	jlong ZipEntry::getCrc()
	{
		return __thiz.callMethod<jlong>(
			"getCrc",
			"()J"
		);
	}
	void ZipEntry::setMethod(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMethod",
			"(I)V",
			arg0
		);
	}
	void ZipEntry::setExtra(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setExtra",
			"([B)V",
			arg0
		);
	}
	jbyteArray ZipEntry::getExtra()
	{
		return __thiz.callObjectMethod(
			"getExtra",
			"()[B"
		).object<jbyteArray>();
	}
	void ZipEntry::setComment(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ZipEntry::setComment(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring ZipEntry::getComment()
	{
		return __thiz.callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ZipEntry::isDirectory()
	{
		return __thiz.callMethod<jboolean>(
			"isDirectory",
			"()Z"
		);
	}
	QAndroidJniObject ZipEntry::getLastModifiedTime()
	{
		return __thiz.callObjectMethod(
			"getLastModifiedTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	QAndroidJniObject ZipEntry::setLastModifiedTime(__jni_impl::java::nio::file::attribute::FileTime arg0)
	{
		return __thiz.callObjectMethod(
			"setLastModifiedTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class ZipEntry : public __jni_impl::java::util::zip::ZipEntry
	{
	public:
		ZipEntry(QAndroidJniObject obj) { __thiz = obj; }
		ZipEntry(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ZipEntry(__jni_impl::java::util::zip::ZipEntry arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::zip

#endif // JAVA_UTIL_ZIP_ZIPENTRY

