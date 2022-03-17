#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/InputStream.def.hpp"
#include "../../io/OutputStream.def.hpp"
#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "../../security/Permission.def.hpp"
#include "./Preferences.def.hpp"

namespace java::util::prefs
{
	// Fields
	inline jint Preferences::MAX_KEY_LENGTH()
	{
		return getStaticField<jint>(
			"java.util.prefs.Preferences",
			"MAX_KEY_LENGTH"
		);
	}
	inline jint Preferences::MAX_NAME_LENGTH()
	{
		return getStaticField<jint>(
			"java.util.prefs.Preferences",
			"MAX_NAME_LENGTH"
		);
	}
	inline jint Preferences::MAX_VALUE_LENGTH()
	{
		return getStaticField<jint>(
			"java.util.prefs.Preferences",
			"MAX_VALUE_LENGTH"
		);
	}
	
	// Constructors
	
	// Methods
	inline void Preferences::importPreferences(java::io::InputStream arg0)
	{
		callStaticMethod<void>(
			"java.util.prefs.Preferences",
			"importPreferences",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	inline java::util::prefs::Preferences Preferences::systemNodeForPackage(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"systemNodeForPackage",
			"(Ljava/lang/Class;)Ljava/util/prefs/Preferences;",
			arg0.object<jclass>()
		);
	}
	inline java::util::prefs::Preferences Preferences::systemRoot()
	{
		return callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"systemRoot",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	inline java::util::prefs::Preferences Preferences::userNodeForPackage(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"userNodeForPackage",
			"(Ljava/lang/Class;)Ljava/util/prefs/Preferences;",
			arg0.object<jclass>()
		);
	}
	inline java::util::prefs::Preferences Preferences::userRoot()
	{
		return callStaticObjectMethod(
			"java.util.prefs.Preferences",
			"userRoot",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	inline JString Preferences::absolutePath() const
	{
		return callObjectMethod(
			"absolutePath",
			"()Ljava/lang/String;"
		);
	}
	inline void Preferences::addNodeChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.object()
		);
	}
	inline void Preferences::addPreferenceChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addPreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.object()
		);
	}
	inline JArray Preferences::childrenNames() const
	{
		return callObjectMethod(
			"childrenNames",
			"()[Ljava/lang/String;"
		);
	}
	inline void Preferences::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void Preferences::exportNode(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"exportNode",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	inline void Preferences::exportSubtree(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"exportSubtree",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	inline void Preferences::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline JString Preferences::get(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean Preferences::getBoolean(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JByteArray Preferences::getByteArray(JString arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;[B)[B",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline jdouble Preferences::getDouble(JString arg0, jdouble arg1) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jfloat Preferences::getFloat(JString arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint Preferences::getInt(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jlong Preferences::getLong(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean Preferences::isUserNode() const
	{
		return callMethod<jboolean>(
			"isUserNode",
			"()Z"
		);
	}
	inline JArray Preferences::keys() const
	{
		return callObjectMethod(
			"keys",
			"()[Ljava/lang/String;"
		);
	}
	inline JString Preferences::name() const
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::prefs::Preferences Preferences::node(JString arg0) const
	{
		return callObjectMethod(
			"node",
			"(Ljava/lang/String;)Ljava/util/prefs/Preferences;",
			arg0.object<jstring>()
		);
	}
	inline jboolean Preferences::nodeExists(JString arg0) const
	{
		return callMethod<jboolean>(
			"nodeExists",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline java::util::prefs::Preferences Preferences::parent() const
	{
		return callObjectMethod(
			"parent",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	inline void Preferences::put(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Preferences::putBoolean(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Preferences::putByteArray(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void Preferences::putDouble(JString arg0, jdouble arg1) const
	{
		callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Preferences::putFloat(JString arg0, jfloat arg1) const
	{
		callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Preferences::putInt(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Preferences::putLong(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Preferences::remove(JString arg0) const
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Preferences::removeNode() const
	{
		callMethod<void>(
			"removeNode",
			"()V"
		);
	}
	inline void Preferences::removeNodeChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.object()
		);
	}
	inline void Preferences::removePreferenceChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removePreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.object()
		);
	}
	inline void Preferences::sync() const
	{
		callMethod<void>(
			"sync",
			"()V"
		);
	}
	inline JString Preferences::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::prefs

// Base class headers

