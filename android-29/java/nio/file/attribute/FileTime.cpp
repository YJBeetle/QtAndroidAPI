#include "../../../lang/StringBuilder.hpp"
#include "../../../time/Instant.hpp"
#include "../../../util/concurrent/TimeUnit.hpp"
#include "./FileTime.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// QAndroidJniObject forward
	FileTime::FileTime(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::attribute::FileTime FileTime::from(java::time::Instant arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.FileTime",
			"from",
			"(Ljava/time/Instant;)Ljava/nio/file/attribute/FileTime;",
			arg0.object()
		);
	}
	java::nio::file::attribute::FileTime FileTime::from(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.FileTime",
			"from",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/nio/file/attribute/FileTime;",
			arg0,
			arg1.object()
		);
	}
	java::nio::file::attribute::FileTime FileTime::fromMillis(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.FileTime",
			"fromMillis",
			"(J)Ljava/nio/file/attribute/FileTime;",
			arg0
		);
	}
	jint FileTime::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint FileTime::compareTo(java::nio::file::attribute::FileTime arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/file/attribute/FileTime;)I",
			arg0.object()
		);
	}
	jboolean FileTime::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint FileTime::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jlong FileTime::to(java::util::concurrent::TimeUnit arg0)
	{
		return callMethod<jlong>(
			"to",
			"(Ljava/util/concurrent/TimeUnit;)J",
			arg0.object()
		);
	}
	java::time::Instant FileTime::toInstant()
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	jlong FileTime::toMillis()
	{
		return callMethod<jlong>(
			"toMillis",
			"()J"
		);
	}
	jstring FileTime::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::file::attribute

