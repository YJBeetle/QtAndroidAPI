#include "../lang/IllegalArgumentException.hpp"
#include "./Buffer.hpp"

namespace java::nio
{
	// Fields
	
	Buffer::Buffer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jobject Buffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Buffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	jint Buffer::capacity()
	{
		return __thiz.callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	QAndroidJniObject Buffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/Buffer;"
		);
	}
	QAndroidJniObject Buffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/Buffer;"
		);
	}
	QAndroidJniObject Buffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/Buffer;"
		);
	}
	jboolean Buffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jboolean Buffer::hasRemaining()
	{
		return __thiz.callMethod<jboolean>(
			"hasRemaining",
			"()Z"
		);
	}
	jboolean Buffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	jboolean Buffer::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	jint Buffer::limit()
	{
		return __thiz.callMethod<jint>(
			"limit",
			"()I"
		);
	}
	QAndroidJniObject Buffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/Buffer;",
			arg0
		);
	}
	QAndroidJniObject Buffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/Buffer;"
		);
	}
	jint Buffer::position()
	{
		return __thiz.callMethod<jint>(
			"position",
			"()I"
		);
	}
	QAndroidJniObject Buffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/Buffer;",
			arg0
		);
	}
	jint Buffer::remaining()
	{
		return __thiz.callMethod<jint>(
			"remaining",
			"()I"
		);
	}
	QAndroidJniObject Buffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/Buffer;"
		);
	}
	QAndroidJniObject Buffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/Buffer;"
		);
	}
	QAndroidJniObject Buffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
			"()Ljava/nio/Buffer;"
		);
	}
	QAndroidJniObject Buffer::slice(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"slice",
			"(II)Ljava/nio/Buffer;",
			arg0,
			arg1
		);
	}
} // namespace java::nio

