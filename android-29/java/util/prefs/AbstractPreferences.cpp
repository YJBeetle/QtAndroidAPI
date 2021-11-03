#include "../../io/OutputStream.hpp"
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
	jstring AbstractPreferences::absolutePath()
	{
		return callObjectMethod(
			"absolutePath",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jarray AbstractPreferences::childrenNames()
	{
		return callObjectMethod(
			"childrenNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
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
	jstring AbstractPreferences::get(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jboolean AbstractPreferences::getBoolean(jstring arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jbyteArray AbstractPreferences::getByteArray(jstring arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;[B)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jdouble AbstractPreferences::getDouble(jstring arg0, jdouble arg1)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jfloat AbstractPreferences::getFloat(jstring arg0, jfloat arg1)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jint AbstractPreferences::getInt(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jlong AbstractPreferences::getLong(jstring arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0,
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
	jarray AbstractPreferences::keys()
	{
		return callObjectMethod(
			"keys",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring AbstractPreferences::name()
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::prefs::Preferences AbstractPreferences::node(jstring arg0)
	{
		return callObjectMethod(
			"node",
			"(Ljava/lang/String;)Ljava/util/prefs/Preferences;",
			arg0
		);
	}
	jboolean AbstractPreferences::nodeExists(jstring arg0)
	{
		return callMethod<jboolean>(
			"nodeExists",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	java::util::prefs::Preferences AbstractPreferences::parent()
	{
		return callObjectMethod(
			"parent",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	void AbstractPreferences::put(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AbstractPreferences::putBoolean(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void AbstractPreferences::putByteArray(jstring arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void AbstractPreferences::putDouble(jstring arg0, jdouble arg1)
	{
		callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1
		);
	}
	void AbstractPreferences::putFloat(jstring arg0, jfloat arg1)
	{
		callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	void AbstractPreferences::putInt(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void AbstractPreferences::putLong(jstring arg0, jlong arg1)
	{
		callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void AbstractPreferences::remove(jstring arg0)
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
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
	jstring AbstractPreferences::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::prefs

