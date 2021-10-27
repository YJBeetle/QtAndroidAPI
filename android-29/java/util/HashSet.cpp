#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./HashMap.hpp"
#include "./HashSet.hpp"

namespace java::util
{
	// Fields
	
	HashSet::HashSet(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	HashSet::HashSet()
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"()V"
		);
	}
	HashSet::HashSet(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"(I)V",
			arg0
		);
	}
	HashSet::HashSet(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	HashSet::HashSet(jint &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"(IF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean HashSet::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void HashSet::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject HashSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean HashSet::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean HashSet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject HashSet::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean HashSet::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint HashSet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject HashSet::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobjectArray HashSet::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray HashSet::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
} // namespace java::util

