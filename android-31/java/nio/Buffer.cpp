#include "../lang/IllegalArgumentException.hpp"
#include "./Buffer.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	Buffer::Buffer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jobject Buffer::array()
	{
		return callObjectMethod(
			"array",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Buffer::arrayOffset()
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	jint Buffer::capacity()
	{
		return callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	java::nio::Buffer Buffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/Buffer;"
		);
	}
	java::nio::Buffer Buffer::duplicate()
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/Buffer;"
		);
	}
	java::nio::Buffer Buffer::flip()
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/Buffer;"
		);
	}
	jboolean Buffer::hasArray()
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jboolean Buffer::hasRemaining()
	{
		return callMethod<jboolean>(
			"hasRemaining",
			"()Z"
		);
	}
	jboolean Buffer::isDirect()
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	jboolean Buffer::isReadOnly()
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	jint Buffer::limit()
	{
		return callMethod<jint>(
			"limit",
			"()I"
		);
	}
	java::nio::Buffer Buffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/Buffer;",
			arg0
		);
	}
	java::nio::Buffer Buffer::mark()
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/Buffer;"
		);
	}
	jint Buffer::position()
	{
		return callMethod<jint>(
			"position",
			"()I"
		);
	}
	java::nio::Buffer Buffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/Buffer;",
			arg0
		);
	}
	jint Buffer::remaining()
	{
		return callMethod<jint>(
			"remaining",
			"()I"
		);
	}
	java::nio::Buffer Buffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/Buffer;"
		);
	}
	java::nio::Buffer Buffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/Buffer;"
		);
	}
	java::nio::Buffer Buffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/Buffer;"
		);
	}
	java::nio::Buffer Buffer::slice(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/Buffer;",
			arg0,
			arg1
		);
	}
} // namespace java::nio

