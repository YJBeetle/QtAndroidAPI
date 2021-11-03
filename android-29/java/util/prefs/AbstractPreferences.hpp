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
		AbstractPreferences(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
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

