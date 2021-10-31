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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BaseBundle(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BaseBundle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void clear();
		jboolean containsKey(jstring arg0);
		jobject get(jstring arg0);
		jboolean getBoolean(jstring arg0);
		jboolean getBoolean(jstring arg0, jboolean arg1);
		jbooleanArray getBooleanArray(jstring arg0);
		jdouble getDouble(jstring arg0);
		jdouble getDouble(jstring arg0, jdouble arg1);
		jdoubleArray getDoubleArray(jstring arg0);
		jint getInt(jstring arg0);
		jint getInt(jstring arg0, jint arg1);
		jintArray getIntArray(jstring arg0);
		jlong getLong(jstring arg0);
		jlong getLong(jstring arg0, jlong arg1);
		jlongArray getLongArray(jstring arg0);
		jstring getString(jstring arg0);
		jstring getString(jstring arg0, jstring arg1);
		jarray getStringArray(jstring arg0);
		jboolean isEmpty();
		__JniBaseClass keySet();
		void putAll(android::os::PersistableBundle arg0);
		void putBoolean(jstring arg0, jboolean arg1);
		void putBooleanArray(jstring arg0, jbooleanArray arg1);
		void putDouble(jstring arg0, jdouble arg1);
		void putDoubleArray(jstring arg0, jdoubleArray arg1);
		void putInt(jstring arg0, jint arg1);
		void putIntArray(jstring arg0, jintArray arg1);
		void putLong(jstring arg0, jlong arg1);
		void putLongArray(jstring arg0, jlongArray arg1);
		void putString(jstring arg0, jstring arg1);
		void putStringArray(jstring arg0, jarray arg1);
		void remove(jstring arg0);
		jint size();
	};
} // namespace android::os

