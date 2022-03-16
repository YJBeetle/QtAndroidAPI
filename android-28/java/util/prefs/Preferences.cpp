#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../../../JClass.hpp"
#include "../../../JString.hpp"
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
	java::util::prefs::Preferences Preferences::systemNodeForPackage(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"systemNodeForPackage",
			"(Ljava/lang/Class;)Ljava/util/prefs/Preferences;",
			arg0.object<jclass>()
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
	java::util::prefs::Preferences Preferences::userNodeForPackage(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"userNodeForPackage",
			"(Ljava/lang/Class;)Ljava/util/prefs/Preferences;",
			arg0.object<jclass>()
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
	JString Preferences::absolutePath() const
	{
		return callObjectMethod(
			"absolutePath",
			"()Ljava/lang/String;"
		);
	}
	void Preferences::addNodeChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.object()
		);
	}
	void Preferences::addPreferenceChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addPreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.object()
		);
	}
	JArray Preferences::childrenNames() const
	{
		return callObjectMethod(
			"childrenNames",
			"()[Ljava/lang/String;"
		);
	}
	void Preferences::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Preferences::exportNode(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"exportNode",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	void Preferences::exportSubtree(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"exportSubtree",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	void Preferences::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	JString Preferences::get(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jboolean Preferences::getBoolean(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	JByteArray Preferences::getByteArray(JString arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;[B)[B",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	jdouble Preferences::getDouble(JString arg0, jdouble arg1) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0.object<jstring>(),
			arg1
		);
	}
	jfloat Preferences::getFloat(JString arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint Preferences::getInt(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	jlong Preferences::getLong(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	jboolean Preferences::isUserNode() const
	{
		return callMethod<jboolean>(
			"isUserNode",
			"()Z"
		);
	}
	JArray Preferences::keys() const
	{
		return callObjectMethod(
			"keys",
			"()[Ljava/lang/String;"
		);
	}
	JString Preferences::name() const
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	java::util::prefs::Preferences Preferences::node(JString arg0) const
	{
		return callObjectMethod(
			"node",
			"(Ljava/lang/String;)Ljava/util/prefs/Preferences;",
			arg0.object<jstring>()
		);
	}
	jboolean Preferences::nodeExists(JString arg0) const
	{
		return callMethod<jboolean>(
			"nodeExists",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	java::util::prefs::Preferences Preferences::parent() const
	{
		return callObjectMethod(
			"parent",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	void Preferences::put(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Preferences::putBoolean(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Preferences::putByteArray(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	void Preferences::putDouble(JString arg0, jdouble arg1) const
	{
		callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Preferences::putFloat(JString arg0, jfloat arg1) const
	{
		callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Preferences::putInt(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Preferences::putLong(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Preferences::remove(JString arg0) const
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Preferences::removeNode() const
	{
		callMethod<void>(
			"removeNode",
			"()V"
		);
	}
	void Preferences::removeNodeChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.object()
		);
	}
	void Preferences::removePreferenceChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removePreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.object()
		);
	}
	void Preferences::sync() const
	{
		callMethod<void>(
			"sync",
			"()V"
		);
	}
	JString Preferences::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::prefs

