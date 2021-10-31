#include "../lang/IllegalArgumentException.hpp"
#include "./Buffer.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	Buffer::Buffer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	QAndroidJniObject Buffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/Buffer;"
		);
	}
	QAndroidJniObject Buffer::duplicate()
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/Buffer;"
		);
	}
	QAndroidJniObject Buffer::flip()
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
	QAndroidJniObject Buffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/Buffer;",
			arg0
		);
	}
	QAndroidJniObject Buffer::mark()
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
	QAndroidJniObject Buffer::position(jint arg0)
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
	QAndroidJniObject Buffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/Buffer;"
		);
	}
	QAndroidJniObject Buffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/Buffer;"
		);
	}
	QAndroidJniObject Buffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/Buffer;"
		);
	}
	QAndroidJniObject Buffer::slice(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/Buffer;",
			arg0,
			arg1
		);
	}
} // namespace java::nio

