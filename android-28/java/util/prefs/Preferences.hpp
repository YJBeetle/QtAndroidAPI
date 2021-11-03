#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JArray;
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JClass;
class JString;
namespace java::security
{
	class Permission;
}

namespace java::util::prefs
{
	class Preferences : public JObject
	{
	public:
		// Fields
		static jint MAX_KEY_LENGTH();
		static jint MAX_NAME_LENGTH();
		static jint MAX_VALUE_LENGTH();
		
		// QJniObject forward
		template<typename ...Ts> explicit Preferences(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Preferences(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void importPreferences(java::io::InputStream arg0);
		static java::util::prefs::Preferences systemNodeForPackage(JClass arg0);
		static java::util::prefs::Preferences systemRoot();
		static java::util::prefs::Preferences userNodeForPackage(JClass arg0);
		static java::util::prefs::Preferences userRoot();
		JString absolutePath();
		void addNodeChangeListener(JObject arg0);
		void addPreferenceChangeListener(JObject arg0);
		JArray childrenNames();
		void clear();
		void exportNode(java::io::OutputStream arg0);
		void exportSubtree(java::io::OutputStream arg0);
		void flush();
		JString get(JString arg0, JString arg1);
		jboolean getBoolean(JString arg0, jboolean arg1);
		JByteArray getByteArray(JString arg0, JByteArray arg1);
		jdouble getDouble(JString arg0, jdouble arg1);
		jfloat getFloat(JString arg0, jfloat arg1);
		jint getInt(JString arg0, jint arg1);
		jlong getLong(JString arg0, jlong arg1);
		jboolean isUserNode();
		JArray keys();
		JString name();
		java::util::prefs::Preferences node(JString arg0);
		jboolean nodeExists(JString arg0);
		java::util::prefs::Preferences parent();
		void put(JString arg0, JString arg1);
		void putBoolean(JString arg0, jboolean arg1);
		void putByteArray(JString arg0, JByteArray arg1);
		void putDouble(JString arg0, jdouble arg1);
		void putFloat(JString arg0, jfloat arg1);
		void putInt(JString arg0, jint arg1);
		void putLong(JString arg0, jlong arg1);
		void remove(JString arg0);
		void removeNode();
		void removeNodeChangeListener(JObject arg0);
		void removePreferenceChangeListener(JObject arg0);
		void sync();
		JString toString();
	};
} // namespace java::util::prefs

