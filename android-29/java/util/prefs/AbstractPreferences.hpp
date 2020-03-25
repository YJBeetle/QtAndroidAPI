#pragma once

#ifndef JAVA_UTIL_PREFS_ABSTRACTPREFERENCES
#define JAVA_UTIL_PREFS_ABSTRACTPREFERENCES

#include "../../../__JniBaseClass.hpp"
#include "Preferences.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::util::prefs
{
	class Preferences;
}
namespace __jni_impl::java::util
{
	class StringTokenizer;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::util::prefs
{
	class AbstractPreferences : public __jni_impl::java::util::prefs::Preferences
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject name();
		void remove(jstring arg0);
		QAndroidJniObject parent();
		QAndroidJniObject get(jstring arg0, jstring arg1);
		void put(jstring arg0, jstring arg1);
		QAndroidJniObject toString();
		jboolean getBoolean(jstring arg0, jboolean arg1);
		void putBoolean(jstring arg0, jboolean arg1);
		jint getInt(jstring arg0, jint arg1);
		void putInt(jstring arg0, jint arg1);
		jlong getLong(jstring arg0, jlong arg1);
		void putLong(jstring arg0, jlong arg1);
		jfloat getFloat(jstring arg0, jfloat arg1);
		void putFloat(jstring arg0, jfloat arg1);
		jdouble getDouble(jstring arg0, jdouble arg1);
		void putDouble(jstring arg0, jdouble arg1);
		void clear();
		void flush();
		QAndroidJniObject keys();
		void removeNode();
		QAndroidJniObject node(jstring arg0);
		void sync();
		void putByteArray(jstring arg0, jbyteArray arg1);
		QAndroidJniObject getByteArray(jstring arg0, jbyteArray arg1);
		QAndroidJniObject childrenNames();
		jboolean nodeExists(jstring arg0);
		QAndroidJniObject absolutePath();
		jboolean isUserNode();
		void addPreferenceChangeListener(__jni_impl::__JniBaseClass arg0);
		void removePreferenceChangeListener(__jni_impl::__JniBaseClass arg0);
		void addNodeChangeListener(__jni_impl::__JniBaseClass arg0);
		void removeNodeChangeListener(__jni_impl::__JniBaseClass arg0);
		void exportNode(__jni_impl::java::io::OutputStream arg0);
		void exportSubtree(__jni_impl::java::io::OutputStream arg0);
	};
} // namespace __jni_impl::java::util::prefs

#include "../../lang/Thread.hpp"
#include "Preferences.hpp"
#include "../StringTokenizer.hpp"
#include "../../io/OutputStream.hpp"

namespace __jni_impl::java::util::prefs
{
	// Fields
	
	// Constructors
	void AbstractPreferences::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.AbstractPreferences",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AbstractPreferences::name()
	{
		return __thiz.callObjectMethod(
			"name",
			"()Ljava/lang/String;");
	}
	void AbstractPreferences::remove(jstring arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject AbstractPreferences::parent()
	{
		return __thiz.callObjectMethod(
			"parent",
			"()Ljava/util/prefs/Preferences;");
	}
	QAndroidJniObject AbstractPreferences::get(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	void AbstractPreferences::put(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject AbstractPreferences::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jboolean AbstractPreferences::getBoolean(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1);
	}
	void AbstractPreferences::putBoolean(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	jint AbstractPreferences::getInt(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1);
	}
	void AbstractPreferences::putInt(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	jlong AbstractPreferences::getLong(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1);
	}
	void AbstractPreferences::putLong(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1);
	}
	jfloat AbstractPreferences::getFloat(jstring arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1);
	}
	void AbstractPreferences::putFloat(jstring arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1);
	}
	jdouble AbstractPreferences::getDouble(jstring arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1);
	}
	void AbstractPreferences::putDouble(jstring arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1);
	}
	void AbstractPreferences::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	void AbstractPreferences::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	QAndroidJniObject AbstractPreferences::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()[Ljava/lang/String;");
	}
	void AbstractPreferences::removeNode()
	{
		__thiz.callMethod<void>(
			"removeNode",
			"()V");
	}
	QAndroidJniObject AbstractPreferences::node(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"node",
			"(Ljava/lang/String;)Ljava/util/prefs/Preferences;",
			arg0);
	}
	void AbstractPreferences::sync()
	{
		__thiz.callMethod<void>(
			"sync",
			"()V");
	}
	void AbstractPreferences::putByteArray(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1);
	}
	QAndroidJniObject AbstractPreferences::getByteArray(jstring arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;[B)[B",
			arg0,
			arg1);
	}
	QAndroidJniObject AbstractPreferences::childrenNames()
	{
		return __thiz.callObjectMethod(
			"childrenNames",
			"()[Ljava/lang/String;");
	}
	jboolean AbstractPreferences::nodeExists(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"nodeExists",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject AbstractPreferences::absolutePath()
	{
		return __thiz.callObjectMethod(
			"absolutePath",
			"()Ljava/lang/String;");
	}
	jboolean AbstractPreferences::isUserNode()
	{
		return __thiz.callMethod<jboolean>(
			"isUserNode",
			"()Z");
	}
	void AbstractPreferences::addPreferenceChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addPreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.__jniObject().object());
	}
	void AbstractPreferences::removePreferenceChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removePreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.__jniObject().object());
	}
	void AbstractPreferences::addNodeChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.__jniObject().object());
	}
	void AbstractPreferences::removeNodeChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.__jniObject().object());
	}
	void AbstractPreferences::exportNode(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"exportNode",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object());
	}
	void AbstractPreferences::exportSubtree(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"exportSubtree",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::util::prefs

namespace java::util::prefs
{
	class AbstractPreferences : public __jni_impl::java::util::prefs::AbstractPreferences
	{
	public:
		AbstractPreferences(QAndroidJniObject obj) { __thiz = obj; }
		AbstractPreferences()
		{
			__constructor();
		}
	};
} // namespace java::util::prefs

#endif // JAVA_UTIL_PREFS_ABSTRACTPREFERENCES

