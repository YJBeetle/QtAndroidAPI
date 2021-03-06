#pragma once

#ifndef ANDROID_OS_BASEBUNDLE
#define ANDROID_OS_BASEBUNDLE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class PersistableBundle;
}

namespace __jni_impl::android::os
{
	class BaseBundle : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void remove(jstring arg0);
		jobject get(jstring arg0);
		jboolean getBoolean(jstring arg0);
		jboolean getBoolean(jstring arg0, jboolean arg1);
		void putBoolean(jstring arg0, jboolean arg1);
		jint getInt(jstring arg0);
		jint getInt(jstring arg0, jint arg1);
		void putInt(jstring arg0, jint arg1);
		jlong getLong(jstring arg0, jlong arg1);
		jlong getLong(jstring arg0);
		void putLong(jstring arg0, jlong arg1);
		jdouble getDouble(jstring arg0);
		jdouble getDouble(jstring arg0, jdouble arg1);
		void putDouble(jstring arg0, jdouble arg1);
		void clear();
		jboolean isEmpty();
		jint size();
		void putAll(__jni_impl::android::os::PersistableBundle arg0);
		jboolean containsKey(jstring arg0);
		QAndroidJniObject keySet();
		jstring getString(jstring arg0, jstring arg1);
		jstring getString(jstring arg0);
		jarray getStringArray(jstring arg0);
		void putString(jstring arg0, jstring arg1);
		void putBooleanArray(jstring arg0, jbooleanArray arg1);
		void putIntArray(jstring arg0, jintArray arg1);
		void putLongArray(jstring arg0, jlongArray arg1);
		void putDoubleArray(jstring arg0, jdoubleArray arg1);
		void putStringArray(jstring arg0, jarray arg1);
		jbooleanArray getBooleanArray(jstring arg0);
		jintArray getIntArray(jstring arg0);
		jlongArray getLongArray(jstring arg0);
		jdoubleArray getDoubleArray(jstring arg0);
	};
} // namespace __jni_impl::android::os

#include "PersistableBundle.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void BaseBundle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.BaseBundle",
			"(V)V");
	}
	
	// Methods
	void BaseBundle::remove(jstring arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jobject BaseBundle::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean BaseBundle::getBoolean(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean BaseBundle::getBoolean(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	void BaseBundle::putBoolean(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	jint BaseBundle::getInt(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint BaseBundle::getInt(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	void BaseBundle::putInt(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	jlong BaseBundle::getLong(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jlong BaseBundle::getLong(jstring arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	void BaseBundle::putLong(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	jdouble BaseBundle::getDouble(jstring arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jdouble BaseBundle::getDouble(jstring arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	void BaseBundle::putDouble(jstring arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean BaseBundle::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint BaseBundle::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void BaseBundle::putAll(__jni_impl::android::os::PersistableBundle arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean BaseBundle::containsKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject BaseBundle::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jstring BaseBundle::getString(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring BaseBundle::getString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jarray BaseBundle::getStringArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	void BaseBundle::putString(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"putString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putBooleanArray(jstring arg0, jbooleanArray arg1)
	{
		__thiz.callMethod<void>(
			"putBooleanArray",
			"(Ljava/lang/String;[Z)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putIntArray(jstring arg0, jintArray arg1)
	{
		__thiz.callMethod<void>(
			"putIntArray",
			"(Ljava/lang/String;[I)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putLongArray(jstring arg0, jlongArray arg1)
	{
		__thiz.callMethod<void>(
			"putLongArray",
			"(Ljava/lang/String;[J)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putDoubleArray(jstring arg0, jdoubleArray arg1)
	{
		__thiz.callMethod<void>(
			"putDoubleArray",
			"(Ljava/lang/String;[D)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putStringArray(jstring arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"putStringArray",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jbooleanArray BaseBundle::getBooleanArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBooleanArray",
			"(Ljava/lang/String;)[Z",
			arg0
		).object<jbooleanArray>();
	}
	jintArray BaseBundle::getIntArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getIntArray",
			"(Ljava/lang/String;)[I",
			arg0
		).object<jintArray>();
	}
	jlongArray BaseBundle::getLongArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getLongArray",
			"(Ljava/lang/String;)[J",
			arg0
		).object<jlongArray>();
	}
	jdoubleArray BaseBundle::getDoubleArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDoubleArray",
			"(Ljava/lang/String;)[D",
			arg0
		).object<jdoubleArray>();
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class BaseBundle : public __jni_impl::android::os::BaseBundle
	{
	public:
		BaseBundle(QAndroidJniObject obj) { __thiz = obj; }
		BaseBundle()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_BASEBUNDLE

