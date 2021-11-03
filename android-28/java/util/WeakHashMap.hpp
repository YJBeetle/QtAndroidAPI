#pragma once

#include "./AbstractMap.hpp"

class JArray;
class JObject;
namespace java::lang::ref
{
	class ReferenceQueue;
}

namespace java::util
{
	class WeakHashMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WeakHashMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		WeakHashMap(QAndroidJniObject obj);
		
		// Constructors
		WeakHashMap();
		WeakHashMap(jint arg0);
		WeakHashMap(JObject arg0);
		WeakHashMap(jint arg0, jfloat arg1);
		
		// Methods
		void clear() const;
		jboolean containsKey(JObject arg0) const;
		jboolean containsValue(JObject arg0) const;
		JObject entrySet() const;
		void forEach(JObject arg0) const;
		JObject get(JObject arg0) const;
		jboolean isEmpty() const;
		JObject keySet() const;
		JObject put(JObject arg0, JObject arg1) const;
		void putAll(JObject arg0) const;
		JObject remove(JObject arg0) const;
		void replaceAll(JObject arg0) const;
		jint size() const;
		JObject values() const;
	};
} // namespace java::util

