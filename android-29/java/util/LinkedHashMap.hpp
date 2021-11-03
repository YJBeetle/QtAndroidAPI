#pragma once

#include "../../JObject.hpp"
#include "./AbstractMap.hpp"
#include "./HashMap.hpp"

namespace java::io
{
	class ObjectOutputStream;
}

namespace java::util
{
	class LinkedHashMap : public java::util::HashMap
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkedHashMap(const char *className, const char *sig, Ts...agv) : java::util::HashMap(className, sig, std::forward<Ts>(agv)...) {}
		LinkedHashMap(QAndroidJniObject obj);
		
		// Constructors
		LinkedHashMap();
		LinkedHashMap(jint arg0);
		LinkedHashMap(JObject arg0);
		LinkedHashMap(jint arg0, jfloat arg1);
		LinkedHashMap(jint arg0, jfloat arg1, jboolean arg2);
		
		// Methods
		void clear();
		jboolean containsValue(jobject arg0);
		JObject entrySet();
		void forEach(JObject arg0);
		jobject get(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		JObject keySet();
		void replaceAll(JObject arg0);
		JObject values();
	};
} // namespace java::util

