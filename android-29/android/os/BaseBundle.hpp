#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class PersistableBundle;
}

namespace android::os
{
	class BaseBundle : public __JniBaseClass
	{
	public:
		// Fields
		
		BaseBundle(QAndroidJniObject obj);
		// Constructors
		BaseBundle() = default;
		
		// Methods
		void clear();
		jboolean containsKey(jstring arg0);
		jboolean containsKey(const QString &arg0);
		jobject get(jstring arg0);
		jobject get(const QString &arg0);
		jboolean getBoolean(jstring arg0);
		jboolean getBoolean(const QString &arg0);
		jboolean getBoolean(jstring arg0, jboolean arg1);
		jboolean getBoolean(const QString &arg0, jboolean arg1);
		jbooleanArray getBooleanArray(jstring arg0);
		jbooleanArray getBooleanArray(const QString &arg0);
		jdouble getDouble(jstring arg0);
		jdouble getDouble(const QString &arg0);
		jdouble getDouble(jstring arg0, jdouble arg1);
		jdouble getDouble(const QString &arg0, jdouble arg1);
		jdoubleArray getDoubleArray(jstring arg0);
		jdoubleArray getDoubleArray(const QString &arg0);
		jint getInt(jstring arg0);
		jint getInt(const QString &arg0);
		jint getInt(jstring arg0, jint arg1);
		jint getInt(const QString &arg0, jint arg1);
		jintArray getIntArray(jstring arg0);
		jintArray getIntArray(const QString &arg0);
		jlong getLong(jstring arg0);
		jlong getLong(const QString &arg0);
		jlong getLong(jstring arg0, jlong arg1);
		jlong getLong(const QString &arg0, jlong arg1);
		jlongArray getLongArray(jstring arg0);
		jlongArray getLongArray(const QString &arg0);
		jstring getString(jstring arg0);
		jstring getString(const QString &arg0);
		jstring getString(jstring arg0, jstring arg1);
		jstring getString(const QString &arg0, const QString &arg1);
		jarray getStringArray(jstring arg0);
		jarray getStringArray(const QString &arg0);
		jboolean isEmpty();
		QAndroidJniObject keySet();
		void putAll(android::os::PersistableBundle arg0);
		void putBoolean(jstring arg0, jboolean arg1);
		void putBoolean(const QString &arg0, jboolean arg1);
		void putBooleanArray(jstring arg0, jbooleanArray arg1);
		void putBooleanArray(const QString &arg0, jbooleanArray arg1);
		void putDouble(jstring arg0, jdouble arg1);
		void putDouble(const QString &arg0, jdouble arg1);
		void putDoubleArray(jstring arg0, jdoubleArray arg1);
		void putDoubleArray(const QString &arg0, jdoubleArray arg1);
		void putInt(jstring arg0, jint arg1);
		void putInt(const QString &arg0, jint arg1);
		void putIntArray(jstring arg0, jintArray arg1);
		void putIntArray(const QString &arg0, jintArray arg1);
		void putLong(jstring arg0, jlong arg1);
		void putLong(const QString &arg0, jlong arg1);
		void putLongArray(jstring arg0, jlongArray arg1);
		void putLongArray(const QString &arg0, jlongArray arg1);
		void putString(jstring arg0, jstring arg1);
		void putString(const QString &arg0, const QString &arg1);
		void putStringArray(jstring arg0, jarray arg1);
		void putStringArray(const QString &arg0, jarray arg1);
		void remove(jstring arg0);
		void remove(const QString &arg0);
		jint size();
	};
} // namespace android::os

