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
		BaseBundle(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void clear() const;
		jboolean containsKey(JString arg0) const;
		JObject get(JString arg0) const;
		jboolean getBoolean(JString arg0) const;
		jboolean getBoolean(JString arg0, jboolean arg1) const;
		JBooleanArray getBooleanArray(JString arg0) const;
		jdouble getDouble(JString arg0) const;
		jdouble getDouble(JString arg0, jdouble arg1) const;
		JDoubleArray getDoubleArray(JString arg0) const;
		jint getInt(JString arg0) const;
		jint getInt(JString arg0, jint arg1) const;
		JIntArray getIntArray(JString arg0) const;
		jlong getLong(JString arg0) const;
		jlong getLong(JString arg0, jlong arg1) const;
		JLongArray getLongArray(JString arg0) const;
		JString getString(JString arg0) const;
		JString getString(JString arg0, JString arg1) const;
		JArray getStringArray(JString arg0) const;
		jboolean isEmpty() const;
		JObject keySet() const;
		void putAll(android::os::PersistableBundle arg0) const;
		void putBoolean(JString arg0, jboolean arg1) const;
		void putBooleanArray(JString arg0, JBooleanArray arg1) const;
		void putDouble(JString arg0, jdouble arg1) const;
		void putDoubleArray(JString arg0, JDoubleArray arg1) const;
		void putInt(JString arg0, jint arg1) const;
		void putIntArray(JString arg0, JIntArray arg1) const;
		void putLong(JString arg0, jlong arg1) const;
		void putLongArray(JString arg0, JLongArray arg1) const;
		void putString(JString arg0, JString arg1) const;
		void putStringArray(JString arg0, JArray arg1) const;
		void remove(JString arg0) const;
		jint size() const;
	};
} // namespace android::os

