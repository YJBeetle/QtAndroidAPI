#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/OutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/Thread.def.hpp"
#include "../StringTokenizer.def.hpp"
#include "./Preferences.def.hpp"
#include "./AbstractPreferences.def.hpp"

namespace java::util::prefs
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString AbstractPreferences::absolutePath() const
	{
		return callObjectMethod(
			"absolutePath",
			"()Ljava/lang/String;"
		);
	}
	inline void AbstractPreferences::addNodeChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.object()
		);
	}
	inline void AbstractPreferences::addPreferenceChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addPreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.object()
		);
	}
	inline JArray AbstractPreferences::childrenNames() const
	{
		return callObjectMethod(
			"childrenNames",
			"()[Ljava/lang/String;"
		);
	}
	inline void AbstractPreferences::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void AbstractPreferences::exportNode(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"exportNode",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	inline void AbstractPreferences::exportSubtree(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"exportSubtree",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	inline void AbstractPreferences::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline JString AbstractPreferences::get(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean AbstractPreferences::getBoolean(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JByteArray AbstractPreferences::getByteArray(JString arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;[B)[B",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline jdouble AbstractPreferences::getDouble(JString arg0, jdouble arg1) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jfloat AbstractPreferences::getFloat(JString arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint AbstractPreferences::getInt(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jlong AbstractPreferences::getLong(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean AbstractPreferences::isUserNode() const
	{
		return callMethod<jboolean>(
			"isUserNode",
			"()Z"
		);
	}
	inline JArray AbstractPreferences::keys() const
	{
		return callObjectMethod(
			"keys",
			"()[Ljava/lang/String;"
		);
	}
	inline JString AbstractPreferences::name() const
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::prefs::Preferences AbstractPreferences::node(JString arg0) const
	{
		return callObjectMethod(
			"node",
			"(Ljava/lang/String;)Ljava/util/prefs/Preferences;",
			arg0.object<jstring>()
		);
	}
	inline jboolean AbstractPreferences::nodeExists(JString arg0) const
	{
		return callMethod<jboolean>(
			"nodeExists",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline java::util::prefs::Preferences AbstractPreferences::parent() const
	{
		return callObjectMethod(
			"parent",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	inline void AbstractPreferences::put(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void AbstractPreferences::putBoolean(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void AbstractPreferences::putByteArray(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void AbstractPreferences::putDouble(JString arg0, jdouble arg1) const
	{
		callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void AbstractPreferences::putFloat(JString arg0, jfloat arg1) const
	{
		callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void AbstractPreferences::putInt(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void AbstractPreferences::putLong(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void AbstractPreferences::remove(JString arg0) const
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void AbstractPreferences::removeNode() const
	{
		callMethod<void>(
			"removeNode",
			"()V"
		);
	}
	inline void AbstractPreferences::removeNodeChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.object()
		);
	}
	inline void AbstractPreferences::removePreferenceChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removePreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.object()
		);
	}
	inline void AbstractPreferences::sync() const
	{
		callMethod<void>(
			"sync",
			"()V"
		);
	}
	inline JString AbstractPreferences::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::prefs

// Base class headers
#include "./Preferences.hpp"

