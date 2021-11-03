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
		void clear();
		jboolean containsAll(JObject arg0);
		jboolean containsKey(JObject arg0);
		jboolean containsValue(JObject arg0);
		void ensureCapacity(jint arg0);
		JObject entrySet();
		jboolean equals(JObject arg0);
		JObject get(JObject arg0);
		jint hashCode();
		jint indexOfKey(JObject arg0);
		jint indexOfValue(JObject arg0);
		jboolean isEmpty();
		JObject keyAt(jint arg0);
		JObject keySet();
		JObject put(JObject arg0, JObject arg1);
		void putAll(android::util::ArrayMap arg0);
		void putAll(JObject arg0);
		JObject remove(JObject arg0);
		jboolean removeAll(JObject arg0);
		JObject removeAt(jint arg0);
		jboolean retainAll(JObject arg0);
		JObject setValueAt(jint arg0, JObject arg1);
		jint size();
		JString toString();
		JObject valueAt(jint arg0);
		JObject values();
	};
} // namespace android::util

