#include "../io/ObjectOutputStream.hpp"
#include "./LinkedHashMap.hpp"

namespace java::util
{
	// Fields
	
	LinkedHashMap::LinkedHashMap(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LinkedHashMap::LinkedHashMap()
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashMap",
			"()V"
		);
	}
	LinkedHashMap::LinkedHashMap(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashMap",
			"(I)V",
			arg0
		);
	}
	LinkedHashMap::LinkedHashMap(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	LinkedHashMap::LinkedHashMap(jint &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashMap",
			"(IF)V",
			arg0,
			arg1
		);
	}
	LinkedHashMap::LinkedHashMap(jint &arg0, jfloat &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashMap",
			"(IFZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	void LinkedHashMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean LinkedHashMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject LinkedHashMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void LinkedHashMap::forEach(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject LinkedHashMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject LinkedHashMap::getOrDefault(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	QAndroidJniObject LinkedHashMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	void LinkedHashMap::replaceAll(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LinkedHashMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

