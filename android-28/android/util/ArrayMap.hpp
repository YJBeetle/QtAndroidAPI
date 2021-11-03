#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class ArrayMap : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArrayMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ArrayMap(QAndroidJniObject obj);
		
		// Constructors
		ArrayMap();
		ArrayMap(android::util::ArrayMap &arg0);
		ArrayMap(jint arg0);
		
		// Methods
		void clear() const;
		jboolean containsAll(JObject arg0) const;
		jboolean containsKey(JObject arg0) const;
		jboolean containsValue(JObject arg0) const;
		void ensureCapacity(jint arg0) const;
		JObject entrySet() const;
		jboolean equals(JObject arg0) const;
		JObject get(JObject arg0) const;
		jint hashCode() const;
		jint indexOfKey(JObject arg0) const;
		jboolean isEmpty() const;
		JObject keyAt(jint arg0) const;
		JObject keySet() const;
		JObject put(JObject arg0, JObject arg1) const;
		void putAll(android::util::ArrayMap arg0) const;
		void putAll(JObject arg0) const;
		JObject remove(JObject arg0) const;
		jboolean removeAll(JObject arg0) const;
		JObject removeAt(jint arg0) const;
		jboolean retainAll(JObject arg0) const;
		JObject setValueAt(jint arg0, JObject arg1) const;
		jint size() const;
		JString toString() const;
		JObject valueAt(jint arg0) const;
		JObject values() const;
	};
} // namespace android::util

