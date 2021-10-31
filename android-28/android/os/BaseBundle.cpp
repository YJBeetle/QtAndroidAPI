#include "./PersistableBundle.hpp"
#include "./BaseBundle.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	BaseBundle::BaseBundle(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void BaseBundle::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean BaseBundle::containsKey(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jobject BaseBundle::get(jstring arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean BaseBundle::getBoolean(jstring arg0)
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean BaseBundle::getBoolean(jstring arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jbooleanArray BaseBundle::getBooleanArray(jstring arg0)
	{
		return callObjectMethod(
			"getBooleanArray",
			"(Ljava/lang/String;)[Z",
			arg0
		).object<jbooleanArray>();
	}
	jdouble BaseBundle::getDouble(jstring arg0)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jdouble BaseBundle::getDouble(jstring arg0, jdouble arg1)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jdoubleArray BaseBundle::getDoubleArray(jstring arg0)
	{
		return callObjectMethod(
			"getDoubleArray",
			"(Ljava/lang/String;)[D",
			arg0
		).object<jdoubleArray>();
	}
	jint BaseBundle::getInt(jstring arg0)
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint BaseBundle::getInt(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jintArray BaseBundle::getIntArray(jstring arg0)
	{
		return callObjectMethod(
			"getIntArray",
			"(Ljava/lang/String;)[I",
			arg0
		).object<jintArray>();
	}
	jlong BaseBundle::getLong(jstring arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong BaseBundle::getLong(jstring arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jlongArray BaseBundle::getLongArray(jstring arg0)
	{
		return callObjectMethod(
			"getLongArray",
			"(Ljava/lang/String;)[J",
			arg0
		).object<jlongArray>();
	}
	jstring BaseBundle::getString(jstring arg0)
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring BaseBundle::getString(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jarray BaseBundle::getStringArray(jstring arg0)
	{
		return callObjectMethod(
			"getStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jboolean BaseBundle::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	__JniBaseClass BaseBundle::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	void BaseBundle::putAll(android::os::PersistableBundle arg0)
	{
		callMethod<void>(
			"putAll",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		);
	}
	void BaseBundle::putBoolean(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putBooleanArray(jstring arg0, jbooleanArray arg1)
	{
		callMethod<void>(
			"putBooleanArray",
			"(Ljava/lang/String;[Z)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putDouble(jstring arg0, jdouble arg1)
	{
		callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putDoubleArray(jstring arg0, jdoubleArray arg1)
	{
		callMethod<void>(
			"putDoubleArray",
			"(Ljava/lang/String;[D)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putInt(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putIntArray(jstring arg0, jintArray arg1)
	{
		callMethod<void>(
			"putIntArray",
			"(Ljava/lang/String;[I)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putLong(jstring arg0, jlong arg1)
	{
		callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putLongArray(jstring arg0, jlongArray arg1)
	{
		callMethod<void>(
			"putLongArray",
			"(Ljava/lang/String;[J)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putString(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"putString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putStringArray(jstring arg0, jarray arg1)
	{
		callMethod<void>(
			"putStringArray",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::remove(jstring arg0)
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jint BaseBundle::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
} // namespace android::os

