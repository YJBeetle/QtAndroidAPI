#pragma once

#include "../../JObject.hpp"


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
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		void ensureCapacity(jint arg0);
		JObject entrySet();
		jboolean equals(jobject arg0);
		jobject get(jobject arg0);
		jint hashCode();
		jint indexOfKey(jobject arg0);
		jboolean isEmpty();
		jobject keyAt(jint arg0);
		JObject keySet();
		jobject put(jobject arg0, jobject arg1);
		void putAll(android::util::ArrayMap arg0);
		void putAll(JObject arg0);
		jobject remove(jobject arg0);
		jboolean removeAll(JObject arg0);
		jobject removeAt(jint arg0);
		jboolean retainAll(JObject arg0);
		jobject setValueAt(jint arg0, jobject arg1);
		jint size();
		jstring toString();
		jobject valueAt(jint arg0);
		JObject values();
	};
} // namespace android::util

