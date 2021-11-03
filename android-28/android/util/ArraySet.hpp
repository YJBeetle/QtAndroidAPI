#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class ArraySet : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArraySet(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ArraySet(QJniObject obj);
		
		// Constructors
		ArraySet();
		ArraySet(android::util::ArraySet &arg0);
		ArraySet(jint arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(JObject arg0);
		void addAll(android::util::ArraySet arg0);
		void clear();
		jboolean contains(jobject arg0);
		jboolean containsAll(JObject arg0);
		void ensureCapacity(jint arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		jboolean isEmpty();
		JObject iterator();
		jboolean remove(jobject arg0);
		jboolean removeAll(android::util::ArraySet arg0);
		jboolean removeAll(JObject arg0);
		jobject removeAt(jint arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
		jobject valueAt(jint arg0);
	};
} // namespace android::util

