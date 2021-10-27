#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		AbstractPreferences(QAndroidJniObject obj);
		// Constructors
		AbstractPreferences() = default;
		
		// Methods
		jstring absolutePath();
		void addNodeChangeListener(__JniBaseClass arg0);
		void addPreferenceChangeListener(__JniBaseClass arg0);
		jarray childrenNames();
		void clear();
		void exportNode(java::io::OutputStream arg0);
		void exportSubtree(java::io::OutputStream arg0);
		void flush();
		jstring get(jstring arg0, jstring arg1);
		jstring get(const QString &arg0, const QString &arg1);
		jboolean getBoolean(jstring arg0, jboolean arg1);
		jboolean getBoolean(const QString &arg0, jboolean arg1);
		jbyteArray getByteArray(jstring arg0, jbyteArray arg1);
		jbyteArray getByteArray(const QString &arg0, jbyteArray arg1);
		jdouble getDouble(jstring arg0, jdouble arg1);
		jdouble getDouble(const QString &arg0, jdouble arg1);
		jfloat getFloat(jstring arg0, jfloat arg1);
		jfloat getFloat(const QString &arg0, jfloat arg1);
		jint getInt(jstring arg0, jint arg1);
		jint getInt(const QString &arg0, jint arg1);
		jlong getLong(jstring arg0, jlong arg1);
		jlong getLong(const QString &arg0, jlong arg1);
		jboolean isUserNode();
		jarray keys();
		jstring name();
		QAndroidJniObject node(jstring arg0);
		QAndroidJniObject node(const QString &arg0);
		jboolean nodeExists(jstring arg0);
		jboolean nodeExists(const QString &arg0);
		QAndroidJniObject parent();
		void put(jstring arg0, jstring arg1);
		void put(const QString &arg0, const QString &arg1);
		void putBoolean(jstring arg0, jboolean arg1);
		void putBoolean(const QString &arg0, jboolean arg1);
		void putByteArray(jstring arg0, jbyteArray arg1);
		void putByteArray(const QString &arg0, jbyteArray arg1);
		void putDouble(jstring arg0, jdouble arg1);
		void putDouble(const QString &arg0, jdouble arg1);
		void putFloat(jstring arg0, jfloat arg1);
		void putFloat(const QString &arg0, jfloat arg1);
		void putInt(jstring arg0, jint arg1);
		void putInt(const QString &arg0, jint arg1);
		void putLong(jstring arg0, jlong arg1);
		void putLong(const QString &arg0, jlong arg1);
		void remove(jstring arg0);
		void remove(const QString &arg0);
		void removeNode();
		void removeNodeChangeListener(__JniBaseClass arg0);
		void removePreferenceChangeListener(__JniBaseClass arg0);
		void sync();
		jstring toString();
	};
} // namespace java::util::prefs

