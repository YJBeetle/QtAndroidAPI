#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../../security/Permission.hpp"
#include "./Preferences.hpp"

namespace java::util::prefs
{
	// Fields
	jint Preferences::MAX_KEY_LENGTH()
	{
		return getStaticField<jint>(
			"java.util.prefs.Preferences",
			"MAX_KEY_LENGTH"
		);
	}
	jint Preferences::MAX_NAME_LENGTH()
	{
		return getStaticField<jint>(
			"java.util.prefs.Preferences",
			"MAX_NAME_LENGTH"
		);
	}
	jint Preferences::MAX_VALUE_LENGTH()
	{
		return getStaticField<jint>(
			"java.util.prefs.Preferences",
			"MAX_VALUE_LENGTH"
		);
	}
	
	// QAndroidJniObject forward
	Preferences::Preferences(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void Preferences::importPreferences(java::io::InputStream arg0)
	{
		callStaticMethod<void>(
			"java.util.prefs.Preferences",
			"importPreferences",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	java::util::prefs::Preferences Preferences::systemNodeForPackage(jclass arg0)
	{
		return callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"systemNodeForPackage",
			"(Ljava/lang/Class;)Ljava/util/prefs/Preferences;",
			arg0
		);
	}
	java::util::prefs::Preferences Preferences::systemRoot()
	{
		return callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"systemRoot",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	java::util::prefs::Preferences Preferences::userNodeForPackage(jclass arg0)
	{
		return callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"userNodeForPackage",
			"(Ljava/lang/Class;)Ljava/util/prefs/Preferences;",
			arg0
		);
	}
	java::util::prefs::Preferences Preferences::userRoot()
	{
		return callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"userRoot",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	jstring Preferences::absolutePath()
	{
		return callObjectMethod(
			"absolutePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Preferences::addNodeChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.object()
		);
	}
	void Preferences::addPreferenceChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addPreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.object()
		);
	}
	jarray Preferences::childrenNames()
	{
		return callObjectMethod(
			"childrenNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void Preferences::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Preferences::exportNode(java::io::OutputStream arg0)
	{
		callMethod<void>(
			"exportNode",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	void Preferences::exportSubtree(java::io::OutputStream arg0)
	{
		callMethod<void>(
			"exportSubtree",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	void Preferences::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	jstring Preferences::get(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jboolean Preferences::getBoolean(jstring arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jbyteArray Preferences::getByteArray(jstring arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;[B)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jdouble Preferences::getDouble(jstring arg0, jdouble arg1)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jfloat Preferences::getFloat(jstring arg0, jfloat arg1)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jint Preferences::getInt(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jlong Preferences::getLong(jstring arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jboolean Preferences::isUserNode()
	{
		return callMethod<jboolean>(
			"isUserNode",
			"()Z"
		);
	}
	jarray Preferences::keys()
	{
		return callObjectMethod(
			"keys",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring Preferences::name()
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::prefs::Preferences Preferences::node(jstring arg0)
	{
		return callObjectMethod(
			"node",
			"(Ljava/lang/String;)Ljava/util/prefs/Preferences;",
			arg0
		);
	}
	jboolean Preferences::nodeExists(jstring arg0)
	{
		return callMethod<jboolean>(
			"nodeExists",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	java::util::prefs::Preferences Preferences::parent()
	{
		return callObjectMethod(
			"parent",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	void Preferences::put(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Preferences::putBoolean(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void Preferences::putByteArray(jstring arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void Preferences::putDouble(jstring arg0, jdouble arg1)
	{
		callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1
		);
	}
	void Preferences::putFloat(jstring arg0, jfloat arg1)
	{
		callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	void Preferences::putInt(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Preferences::putLong(jstring arg0, jlong arg1)
	{
		callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void Preferences::remove(jstring arg0)
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Preferences::removeNode()
	{
		callMethod<void>(
			"removeNode",
			"()V"
		);
	}
	void Preferences::removeNodeChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.object()
		);
	}
	void Preferences::removePreferenceChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removePreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.object()
		);
	}
	void Preferences::sync()
	{
		callMethod<void>(
			"sync",
			"()V"
		);
	}
	jstring Preferences::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::prefs

