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
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractMap(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void clear() const;
		jboolean containsKey(JObject arg0) const;
		jboolean containsValue(JObject arg0) const;
		JObject entrySet() const;
		jboolean equals(JObject arg0) const;
		JObject get(JObject arg0) const;
		jint hashCode() const;
		jboolean isEmpty() const;
		JObject keySet() const;
		JObject put(JObject arg0, JObject arg1) const;
		void putAll(JObject arg0) const;
		JObject remove(JObject arg0) const;
		jint size() const;
		JString toString() const;
		JObject values() const;
	};
} // namespace java::util

