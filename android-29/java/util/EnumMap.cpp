#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/Enum.hpp"
#include "./EnumMap.hpp"

namespace java::util
{
	// Fields
	
	EnumMap::EnumMap(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EnumMap::EnumMap(jclass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.EnumMap",
			"(Ljava/lang/Class;)V",
			arg0
		);
	}
	EnumMap::EnumMap(java::util::EnumMap &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.EnumMap",
			"(Ljava/util/EnumMap;)V",
			arg0.__jniObject().object()
		);
	}
	EnumMap::EnumMap(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.EnumMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void EnumMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject EnumMap::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/util/EnumMap;"
		);
	}
	jboolean EnumMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean EnumMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject EnumMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean EnumMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject EnumMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint EnumMap::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject EnumMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jobject EnumMap::put(java::lang::Enum arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Enum;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1
		).object<jobject>();
	}
	jobject EnumMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void EnumMap::putAll(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	jobject EnumMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint EnumMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject EnumMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

