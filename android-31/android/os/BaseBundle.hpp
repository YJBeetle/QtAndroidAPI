#pragma once

#include "../../JObject.hpp"

class JDoubleArray;
class JIntArray;
class JLongArray;
class JArray;
class JBooleanArray;
namespace android::os
{
	class PersistableBundle;
}
class JObject;
class JString;

namespace android::os
{
	class BaseBundle : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BaseBundle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BaseBundle(QJniObject obj);
		
		// Constructors
		
		// Methods
		void clear();
		jboolean containsKey(JString arg0);
		JObject get(JString arg0);
		jboolean getBoolean(JString arg0);
		jboolean getBoolean(JString arg0, jboolean arg1);
		JBooleanArray getBooleanArray(JString arg0);
		jdouble getDouble(JString arg0);
		jdouble getDouble(JString arg0, jdouble arg1);
		JDoubleArray getDoubleArray(JString arg0);
		jint getInt(JString arg0);
		jint getInt(JString arg0, jint arg1);
		JIntArray getIntArray(JString arg0);
		jlong getLong(JString arg0);
		jlong getLong(JString arg0, jlong arg1);
		JLongArray getLongArray(JString arg0);
		JString getString(JString arg0);
		JString getString(JString arg0, JString arg1);
		JArray getStringArray(JString arg0);
		jboolean isEmpty();
		JObject keySet();
		void putAll(android::os::PersistableBundle arg0);
		void putBoolean(JString arg0, jboolean arg1);
		void putBooleanArray(JString arg0, JBooleanArray arg1);
		void putDouble(JString arg0, jdouble arg1);
		void putDoubleArray(JString arg0, JDoubleArray arg1);
		void putInt(JString arg0, jint arg1);
		void putIntArray(JString arg0, JIntArray arg1);
		void putLong(JString arg0, jlong arg1);
		void putLongArray(JString arg0, JLongArray arg1);
		void putString(JString arg0, JString arg1);
		void putStringArray(JString arg0, JArray arg1);
		void remove(JString arg0);
		jint size();
	};
} // namespace android::os

