#include "./Objects.hpp"

namespace java::util
{
	// Fields
	
	Objects::Objects(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Objects::checkFromIndexSize(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"checkFromIndexSize",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong Objects::checkFromIndexSize(jlong arg0, jlong arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.util.Objects",
			"checkFromIndexSize",
			"(JJJ)J",
			arg0,
			arg1,
			arg2
		);
	}
	jint Objects::checkFromToIndex(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"checkFromToIndex",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong Objects::checkFromToIndex(jlong arg0, jlong arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.util.Objects",
			"checkFromToIndex",
			"(JJJ)J",
			arg0,
			arg1,
			arg2
		);
	}
	jint Objects::checkIndex(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"checkIndex",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong Objects::checkIndex(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.util.Objects",
			"checkIndex",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jint Objects::compare(jobject arg0, jobject arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean Objects::deepEquals(jobject arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Objects",
			"deepEquals",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean Objects::equals(jobject arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Objects",
			"equals",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jint Objects::hash(jobjectArray arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"hash",
			"([Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Objects::hashCode(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"hashCode",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean Objects::isNull(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Objects",
			"isNull",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Objects::nonNull(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Objects",
			"nonNull",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject Objects::requireNonNull(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNull",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Objects::requireNonNull(jobject arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNull",
			"(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject Objects::requireNonNull(jobject arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNull",
			"(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jobject>();
	}
	jobject Objects::requireNonNull(jobject arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNull",
			"(Ljava/lang/Object;Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject Objects::requireNonNullElse(jobject arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNullElse",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject Objects::requireNonNullElseGet(jobject arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNullElseGet",
			"(Ljava/lang/Object;Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jstring Objects::toString(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"toString",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Objects::toString(jobject arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"toString",
			"(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Objects::toString(jobject arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"toString",
			"(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
} // namespace java::util

