#pragma once

#include "../../../JObject.hpp"
#include "./Preferences.hpp"

namespace java::io
{
	class OutputStream;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractPreferences(const char *className, const char *sig, Ts...agv) : java::util::prefs::Preferences(className, sig, std::forward<Ts>(agv)...) {}
		AbstractPreferences(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring absolutePath();
		void addNodeChangeListener(JObject arg0);
		void addPreferenceChangeListener(JObject arg0);
		jarray childrenNames();
		void clear();
		void exportNode(java::io::OutputStream arg0);
		void exportSubtree(java::io::OutputStream arg0);
		void flush();
		jstring get(jstring arg0, jstring arg1);
		jboolean getBoolean(jstring arg0, jboolean arg1);
		jbyteArray getByteArray(jstring arg0, jbyteArray arg1);
		jdouble getDouble(jstring arg0, jdouble arg1);
		jfloat getFloat(jstring arg0, jfloat arg1);
		jint getInt(jstring arg0, jint arg1);
		jlong getLong(jstring arg0, jlong arg1);
		jboolean isUserNode();
		jarray keys();
		jstring name();
		java::util::prefs::Preferences node(jstring arg0);
		jboolean nodeExists(jstring arg0);
		java::util::prefs::Preferences parent();
		void put(jstring arg0, jstring arg1);
		void putBoolean(jstring arg0, jboolean arg1);
		void putByteArray(jstring arg0, jbyteArray arg1);
		void putDouble(jstring arg0, jdouble arg1);
		void putFloat(jstring arg0, jfloat arg1);
		void putInt(jstring arg0, jint arg1);
		void putLong(jstring arg0, jlong arg1);
		void remove(jstring arg0);
		void removeNode();
		void removeNodeChangeListener(JObject arg0);
		void removePreferenceChangeListener(JObject arg0);
		void sync();
		jstring toString();
	};
} // namespace java::util::prefs

