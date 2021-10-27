#pragma once

#ifndef JAVA_NIO_FILE_ATTRIBUTE_FILETIME
#define JAVA_NIO_FILE_ATTRIBUTE_FILETIME

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::java::time
{
	class Instant;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::nio::file::attribute
{
	class FileTime : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject from(__jni_impl::java::time::Instant arg0);
		static QAndroidJniObject from(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		static QAndroidJniObject fromMillis(jlong arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::nio::file::attribute::FileTime arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jlong to(__jni_impl::java::util::concurrent::TimeUnit arg0);
		QAndroidJniObject toInstant();
		jlong toMillis();
		jstring toString();
	};
} // namespace __jni_impl::java::nio::file::attribute

#include "../../../lang/StringBuilder.hpp"
#include "../../../time/Instant.hpp"
#include "../../../util/concurrent/TimeUnit.hpp"

namespace __jni_impl::java::nio::file::attribute
{
	// Fields
	
	// Constructors
	void FileTime::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.FileTime",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FileTime::from(__jni_impl::java::time::Instant arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.FileTime",
			"from",
			"(Ljava/time/Instant;)Ljava/nio/file/attribute/FileTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FileTime::from(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.FileTime",
			"from",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/nio/file/attribute/FileTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileTime::fromMillis(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.FileTime",
			"fromMillis",
			"(J)Ljava/nio/file/attribute/FileTime;",
			arg0
		);
	}
	jint FileTime::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint FileTime::compareTo(__jni_impl::java::nio::file::attribute::FileTime arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/file/attribute/FileTime;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean FileTime::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint FileTime::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jlong FileTime::to(__jni_impl::java::util::concurrent::TimeUnit arg0)
	{
		return __thiz.callMethod<jlong>(
			"to",
			"(Ljava/util/concurrent/TimeUnit;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FileTime::toInstant()
	{
		return __thiz.callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	jlong FileTime::toMillis()
	{
		return __thiz.callMethod<jlong>(
			"toMillis",
			"()J"
		);
	}
	jstring FileTime::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::file::attribute

namespace java::nio::file::attribute
{
	class FileTime : public __jni_impl::java::nio::file::attribute::FileTime
	{
	public:
		FileTime(QAndroidJniObject obj) { __thiz = obj; }
		FileTime()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::attribute

#endif // JAVA_NIO_FILE_ATTRIBUTE_FILETIME

