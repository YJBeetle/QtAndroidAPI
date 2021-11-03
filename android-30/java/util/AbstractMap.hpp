#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class AbstractMap : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractMap(QJniObject obj);
		
		// Constructors
		
		// Methods
		void clear();
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		JObject entrySet();
		jboolean equals(jobject arg0);
		jobject get(jobject arg0);
		jint hashCode();
		jboolean isEmpty();
		JObject keySet();
		jobject put(jobject arg0, jobject arg1);
		void putAll(JObject arg0);
		jobject remove(jobject arg0);
		jint size();
		jstring toString();
		JObject values();
	};
} // namespace java::util

