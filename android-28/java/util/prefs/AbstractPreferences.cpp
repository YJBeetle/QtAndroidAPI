#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/OutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/Thread.hpp"
#include "../StringTokenizer.hpp"
#include "./Preferences.hpp"
#include "./AbstractPreferences.hpp"

namespace java::util::prefs
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractPreferences::AbstractPreferences(QAndroidJniObject obj) : java::util::prefs::Preferences(obj) {}
	
	// Constructors
	
	// Methods
	JString AbstractPreferences::absolutePath()
	{
		return callObjectMethod(
			"absolutePath",
			"()Ljava/lang/String;"
		);
	}
	void AbstractPreferences::addNodeChangeListener(JObject arg0)
	{
		callMethod<void>(
			"addNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.object()
		);
	}
	void AbstractPreferences::addPreferenceChangeListener(JObject arg0)
	{
		callMethod<void>(
			"addPreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.object()
		);
	}
	JArray AbstractPreferences::childrenNames()
	{
		return callObjectMethod(
			"childrenNames",
			"()[Ljava/lang/String;"
		);
	}
	void AbstractPreferences::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void AbstractPreferences::exportNode(java::io::OutputStream arg0)
	{
		callMethod<void>(
			"exportNode",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	void AbstractPreferences::exportSubtree(java::io::OutputStream arg0)
	{
		callMethod<void>(
			"exportSubtree",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	void AbstractPreferences::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	JString AbstractPreferences::get(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jboolean AbstractPreferences::getBoolean(JString arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	JByteArray AbstractPreferences::getByteArray(JString arg0, JByteArray arg1)
	{
		return callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;[B)[B",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	jdouble AbstractPreferences::getDouble(JString arg0, jdouble arg1)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0.object<jstring>(),
			arg1
		);
	}
	jfloat AbstractPreferences::getFloat(JString arg0, jfloat arg1)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint AbstractPreferences::getInt(JString arg0, jint arg1)
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	jlong AbstractPreferences::getLong(JString arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	jboolean AbstractPreferences::isUserNode()
	{
		return callMethod<jboolean>(
			"isUserNode",
			"()Z"
		);
	}
	JArray AbstractPreferences::keys()
	{
		return callObjectMethod(
			"keys",
			"()[Ljava/lang/String;"
		);
	}
	JString AbstractPreferences::name()
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	java::util::prefs::Preferences AbstractPreferences::node(JString arg0)
	{
		return callObjectMethod(
			"node",
			"(Ljava/lang/String;)Ljava/util/prefs/Preferences;",
			arg0.object<jstring>()
		);
	}
	jboolean AbstractPreferences::nodeExists(JString arg0)
	{
		return callMethod<jboolean>(
			"nodeExists",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	java::util::prefs::Preferences AbstractPreferences::parent()
	{
		return callObjectMethod(
			"parent",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	void AbstractPreferences::put(JString arg0, JString arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void AbstractPreferences::putBoolean(JString arg0, jboolean arg1)
	{
		callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void AbstractPreferences::putByteArray(JString arg0, JByteArray arg1)
	{
		callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	void AbstractPreferences::putDouble(JString arg0, jdouble arg1)
	{
		callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void AbstractPreferences::putFloat(JString arg0, jfloat arg1)
	{
		callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void AbstractPreferences::putInt(JString arg0, jint arg1)
	{
		callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void AbstractPreferences::putLong(JString arg0, jlong arg1)
	{
		callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void AbstractPreferences::remove(JString arg0)
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void AbstractPreferences::removeNode()
	{
		callMethod<void>(
			"removeNode",
			"()V"
		);
	}
	void AbstractPreferences::removeNodeChangeListener(JObject arg0)
	{
		callMethod<void>(
			"removeNodeChangeListener",
			"(Ljava/util/prefs/NodeChangeListener;)V",
			arg0.object()
		);
	}
	void AbstractPreferences::removePreferenceChangeListener(JObject arg0)
	{
		callMethod<void>(
			"removePreferenceChangeListener",
			"(Ljava/util/prefs/PreferenceChangeListener;)V",
			arg0.object()
		);
	}
	void AbstractPreferences::sync()
	{
		callMethod<void>(
			"sync",
			"()V"
		);
	}
	JString AbstractPreferences::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::prefs

