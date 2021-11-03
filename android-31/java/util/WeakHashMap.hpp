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
		void clear();
		jboolean containsKey(JObject arg0);
		jboolean containsValue(JObject arg0);
		JObject entrySet();
		void forEach(JObject arg0);
		JObject get(JObject arg0);
		jboolean isEmpty();
		JObject keySet();
		JObject put(JObject arg0, JObject arg1);
		void putAll(JObject arg0);
		JObject remove(JObject arg0);
		void replaceAll(JObject arg0);
		jint size();
		JObject values();
	};
} // namespace java::util

