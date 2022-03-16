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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Preferences(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Preferences(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static void importPreferences(java::io::InputStream arg0);
		static java::util::prefs::Preferences systemNodeForPackage(JClass arg0);
		static java::util::prefs::Preferences systemRoot();
		static java::util::prefs::Preferences userNodeForPackage(JClass arg0);
		static java::util::prefs::Preferences userRoot();
		JString absolutePath() const;
		void addNodeChangeListener(JObject arg0) const;
		void addPreferenceChangeListener(JObject arg0) const;
		JArray childrenNames() const;
		void clear() const;
		void exportNode(java::io::OutputStream arg0) const;
		void exportSubtree(java::io::OutputStream arg0) const;
		void flush() const;
		JString get(JString arg0, JString arg1) const;
		jboolean getBoolean(JString arg0, jboolean arg1) const;
		JByteArray getByteArray(JString arg0, JByteArray arg1) const;
		jdouble getDouble(JString arg0, jdouble arg1) const;
		jfloat getFloat(JString arg0, jfloat arg1) const;
		jint getInt(JString arg0, jint arg1) const;
		jlong getLong(JString arg0, jlong arg1) const;
		jboolean isUserNode() const;
		JArray keys() const;
		JString name() const;
		java::util::prefs::Preferences node(JString arg0) const;
		jboolean nodeExists(JString arg0) const;
		java::util::prefs::Preferences parent() const;
		void put(JString arg0, JString arg1) const;
		void putBoolean(JString arg0, jboolean arg1) const;
		void putByteArray(JString arg0, JByteArray arg1) const;
		void putDouble(JString arg0, jdouble arg1) const;
		void putFloat(JString arg0, jfloat arg1) const;
		void putInt(JString arg0, jint arg1) const;
		void putLong(JString arg0, jlong arg1) const;
		void remove(JString arg0) const;
		void removeNode() const;
		void removeNodeChangeListener(JObject arg0) const;
		void removePreferenceChangeListener(JObject arg0) const;
		void sync() const;
		JString toString() const;
	};
} // namespace java::util::prefs

