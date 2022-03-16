#pragma once

#include "./Preferences.hpp"

class JByteArray;
class JArray;
class JArray;
class JArray;
class JArray;
namespace java::io
{
	class OutputStream;
}
class JObject;
class JString;
namespace java::lang
{
	class Thread;
}
namespace java::util
{
	class StringTokenizer;
}
namespace java::util::prefs
{
	class Preferences;
}

namespace java::util::prefs
{
	class AbstractPreferences : public java::util::prefs::Preferences
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractPreferences(const char *className, const char *sig, Ts...agv) : java::util::prefs::Preferences(className, sig, std::forward<Ts>(agv)...) {}
		AbstractPreferences(QAndroidJniObject obj) : java::util::prefs::Preferences(obj) {}
		
		// Constructors
		
		// Methods
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

