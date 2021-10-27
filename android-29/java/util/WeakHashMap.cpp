#include "../lang/ref/ReferenceQueue.hpp"
#include "./WeakHashMap.hpp"

namespace java::util
{
	// Fields
	
	WeakHashMap::WeakHashMap(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WeakHashMap::WeakHashMap()
	{
		__thiz = QAndroidJniObject(
			"java.util.WeakHashMap",
			"()V"
		);
	}
	WeakHashMap::WeakHashMap(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.WeakHashMap",
			"(I)V",
			arg0
		);
	}
	WeakHashMap::WeakHashMap(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.WeakHashMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	WeakHashMap::WeakHashMap(jint &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.WeakHashMap",
			"(IF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void WeakHashMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean WeakHashMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean WeakHashMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject WeakHashMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void WeakHashMap::forEach(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject WeakHashMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean WeakHashMap::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject WeakHashMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jobject WeakHashMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void WeakHashMap::putAll(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	jobject WeakHashMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void WeakHashMap::replaceAll(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	jint WeakHashMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject WeakHashMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

