#include "../../../lang/StringBuilder.hpp"
#include "../../../time/Instant.hpp"
#include "../../../util/concurrent/TimeUnit.hpp"
#include "./FileTime.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	FileTime::FileTime(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject FileTime::from(java::time::Instant arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.FileTime",
			"from",
			"(Ljava/time/Instant;)Ljava/nio/file/attribute/FileTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FileTime::from(jlong arg0, java::util::concurrent::TimeUnit arg1)
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
	jint FileTime::compareTo(java::nio::file::attribute::FileTime arg0)
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
	jlong FileTime::to(java::util::concurrent::TimeUnit arg0)
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
} // namespace java::nio::file::attribute

