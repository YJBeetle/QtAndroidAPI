#pragma once

#ifndef JAVA_UTIL_PREFS_PREFERENCES
#define JAVA_UTIL_PREFS_PREFERENCES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::security
{
	class Permission;
}

namespace __jni_impl::java::util::prefs
{
	class Preferences : public __JniBaseClass
	{
	public:
		// Fields
		static jint MAX_KEY_LENGTH();
		static jint MAX_NAME_LENGTH();
		static jint MAX_VALUE_LENGTH();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void importPreferences(__jni_impl::java::io::InputStream arg0);
		static QAndroidJniObject systemNodeForPackage(jclass arg0);
		static QAndroidJniObject systemRoot();
		static QAndroidJniObject userNodeForPackage(jclass arg0);
		static QAndroidJniObject userRoot();
		jstring absolutePath();
		void addNodeChangeListener(__jni_impl::__JniBaseClass arg0);
		void addPreferenceChangeListener(__jni_impl::__JniBaseClass arg0);
		jarray childrenNames();
		void clear();
		void exportNode(__jni_impl::java::io::OutputStream arg0);
		void exportSubtree(__jni_impl::java::io::OutputStream arg0);
		void flush();
		jstring get(jstring arg0, jstring arg1);
		jstring get(const QString &arg0, const QString &arg1);
		jboolean getBoolean(jstring arg0, jboolean arg1);
		jboolean getBoolean(const QString &arg0, jboolean arg1);
		jbyteArray getByteArray(jstring arg0, jbyteArray arg1);
		jbyteArray getByteArray(const QString &arg0, jbyteArray arg1);
		jdouble getDouble(jstring arg0, jdouble arg1);
		jdouble getDouble(const QString &arg0, jdouble arg1);
		jfloat getFloat(jstring arg0, jfloat arg1);
		jfloat getFloat(const QString &arg0, jfloat arg1);
		jint getInt(jstring arg0, jint arg1);
		jint getInt(const QString &arg0, jint arg1);
		jlong getLong(jstring arg0, jlong arg1);
		jlong getLong(const QString &arg0, jlong arg1);
		jboolean isUserNode();
		jarray keys();
		jstring name();
		QAndroidJniObject node(jstring arg0);
		QAndroidJniObject node(const QString &arg0);
		jboolean nodeExists(jstring arg0);
		jboolean nodeExists(const QString &arg0);
		QAndroidJniObject parent();
		void put(jstring arg0, jstring arg1);
		void put(const QString &arg0, const QString &arg1);
		void putBoolean(jstring arg0, jboolean arg1);
		void putBoolean(const QString &arg0, jboolean arg1);
		void putByteArray(jstring arg0, jbyteArray arg1);
		void putByteArray(const QString &arg0, jbyteArray arg1);
		void putDouble(jstring arg0, jdouble arg1);
		void putDouble(const QString &arg0, jdouble arg1);
		void putFloat(jstring arg0, jfloat arg1);
		void putFloat(const QString &arg0, jfloat arg1);
		void putInt(jstring arg0, jint arg1);
		void putInt(const QString &arg0, jint arg1);
		void putLong(jstring arg0, jlong arg1);
		void putLong(const QString &arg0, jlong arg1);
		void remove(jstring arg0);
		void remove(const QString &arg0);
		void removeNode();
		void removeNodeChangeListener(__jni_impl::__JniBaseClass arg0);
		void removePreferenceChangeListener(__jni_impl::__JniBaseClass arg0);
		void sync();
		jstring toString();
	};
} // namespace __jni_impl::java::util::prefs

#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../../security/Permission.hpp"

namespace __jni_impl::java::util::prefs
{
	// Fields
	jint Preferences::MAX_KEY_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.prefs.Preferences",
			"MAX_KEY_LENGTH"
		);
	}
	jint Preferences::MAX_NAME_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.prefs.Preferences",
			"MAX_NAME_LENGTH"
		);
	}
	jint Preferences::MAX_VALUE_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.prefs.Preferences",
			"MAX_VALUE_LENGTH"
		);
	}
	
	// Constructors
	void Preferences::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.Preferences",
			"(V)V");
	}
	
	// Methods
	void Preferences::importPreferences(__jni_impl::java::io::InputStream arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.prefs.Preferences",
			"importPreferences",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Preferences::systemNodeForPackage(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"systemNodeForPackage",
			"(Ljava/lang/Class;)Ljava/util/prefs/Preferences;",
			arg0
		);
	}
	QAndroidJniObject Preferences::systemRoot()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"systemRoot",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	QAndroidJniObject Preferences::userNodeForPackage(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"userNodeForPackage",
			"(Ljava/lang/Class;)Ljava/util/prefs/Preferences;",
			arg0
		);
	}
	QAndroidJniObject Preferences::userRoot()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"userRoot",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	jstring Preferences::absolutePath()
	{
		return __thiz.callObjectMethod(
			"absolutePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Preferences::addNodeChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Preferences::addPreferenceChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addPreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	jarray Preferences::childrenNames()
	{
		return __thiz.callObjectMethod(
			"childrenNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void Preferences::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Preferences::exportNode(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"exportNode",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Preferences::exportSubtree(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"exportSubtree",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Preferences::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	jstring Preferences::get(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Preferences::get(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jboolean Preferences::getBoolean(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jboolean Preferences::getBoolean(const QString &arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jbyteArray Preferences::getByteArray(jstring arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;[B)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jbyteArray Preferences::getByteArray(const QString &arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;[B)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jbyteArray>();
	}
	jdouble Preferences::getDouble(jstring arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jdouble Preferences::getDouble(const QString &arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jfloat Preferences::getFloat(jstring arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jfloat Preferences::getFloat(const QString &arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint Preferences::getInt(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jint Preferences::getInt(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jlong Preferences::getLong(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jlong Preferences::getLong(const QString &arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jboolean Preferences::isUserNode()
	{
		return __thiz.callMethod<jboolean>(
			"isUserNode",
			"()Z"
		);
	}
	jarray Preferences::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring Preferences::name()
	{
		return __thiz.callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Preferences::node(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"node",
			"(Ljava/lang/String;)Ljava/util/prefs/Preferences;",
			arg0
		);
	}
	QAndroidJniObject Preferences::node(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"node",
			"(Ljava/lang/String;)Ljava/util/prefs/Preferences;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Preferences::nodeExists(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"nodeExists",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Preferences::nodeExists(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"nodeExists",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Preferences::parent()
	{
		return __thiz.callObjectMethod(
			"parent",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	void Preferences::put(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Preferences::put(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Preferences::putBoolean(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void Preferences::putBoolean(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Preferences::putByteArray(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void Preferences::putByteArray(const QString &arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Preferences::putDouble(jstring arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1
		);
	}
	void Preferences::putDouble(const QString &arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Preferences::putFloat(jstring arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	void Preferences::putFloat(const QString &arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Preferences::putInt(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Preferences::putInt(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Preferences::putLong(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void Preferences::putLong(const QString &arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Preferences::remove(jstring arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Preferences::remove(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Preferences::removeNode()
	{
		__thiz.callMethod<void>(
			"removeNode",
			"()V"
		);
	}
	void Preferences::removeNodeChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Preferences::removePreferenceChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removePreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Preferences::sync()
	{
		__thiz.callMethod<void>(
			"sync",
			"()V"
		);
	}
	jstring Preferences::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util::prefs

namespace java::util::prefs
{
	class Preferences : public __jni_impl::java::util::prefs::Preferences
	{
	public:
		Preferences(QAndroidJniObject obj) { __thiz = obj; }
		Preferences()
		{
			__constructor();
		}
	};
} // namespace java::util::prefs

#endif // JAVA_UTIL_PREFS_PREFERENCES

