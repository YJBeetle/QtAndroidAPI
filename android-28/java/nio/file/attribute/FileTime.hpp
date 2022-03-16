#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../../../lang/StringBuilder.def.hpp"
#include "../../../time/Instant.def.hpp"
#include "../../../util/concurrent/TimeUnit.def.hpp"
#include "./FileTime.def.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::file::attribute::FileTime FileTime::from(java::time::Instant arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.FileTime",
			"from",
			"(Ljava/time/Instant;)Ljava/nio/file/attribute/FileTime;",
			arg0.object()
		);
	}
	inline java::nio::file::attribute::FileTime FileTime::from(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.FileTime",
			"from",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/nio/file/attribute/FileTime;",
			arg0,
			arg1.object()
		);
	}
	inline java::nio::file::attribute::FileTime FileTime::fromMillis(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.FileTime",
			"fromMillis",
			"(J)Ljava/nio/file/attribute/FileTime;",
			arg0
		);
	}
	inline jint FileTime::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint FileTime::compareTo(java::nio::file::attribute::FileTime arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/file/attribute/FileTime;)I",
			arg0.object()
		);
	}
	inline jboolean FileTime::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint FileTime::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jlong FileTime::to(java::util::concurrent::TimeUnit arg0) const
	{
		return callMethod<jlong>(
			"to",
			"(Ljava/util/concurrent/TimeUnit;)J",
			arg0.object()
		);
	}
	inline java::time::Instant FileTime::toInstant() const
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	inline jlong FileTime::toMillis() const
	{
		return callMethod<jlong>(
			"toMillis",
			"()J"
		);
	}
	inline JString FileTime::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::file::attribute

// Base class headers

