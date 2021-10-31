#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::security
{
	class Permission;
}

namespace java::util::prefs
{
	class Preferences : public __JniBaseClass
	{
	public:
		// Fields
		static jint MAX_KEY_LENGTH();
		static jint MAX_NAME_LENGTH();
		static jint MAX_VALUE_LENGTH();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Preferences(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Preferences(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void importPreferences(java::io::InputStream arg0);
		static java::util::prefs::Preferences systemNodeForPackage(jclass arg0);
		static java::util::prefs::Preferences systemRoot();
		static java::util::prefs::Preferences userNodeForPackage(jclass arg0);
		static java::util::prefs::Preferences userRoot();
		jstring absolutePath();
		void addNodeChangeListener(__JniBaseClass arg0);
		void addPreferenceChangeListener(__JniBaseClass arg0);
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
		void removeNodeChangeListener(__JniBaseClass arg0);
		void removePreferenceChangeListener(__JniBaseClass arg0);
		void sync();
		jstring toString();
	};
} // namespace java::util::prefs

