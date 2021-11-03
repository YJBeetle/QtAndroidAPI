#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::util
{
	class AbstractMap : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void clear();
		jboolean containsKey(JObject arg0);
		jboolean containsValue(JObject arg0);
		JObject entrySet();
		jboolean equals(JObject arg0);
		JObject get(JObject arg0);
		jint hashCode();
		jboolean isEmpty();
		JObject keySet();
		JObject put(JObject arg0, JObject arg1);
		void putAll(JObject arg0);
		JObject remove(JObject arg0);
		jint size();
		JString toString();
		JObject values();
	};
} // namespace java::util

