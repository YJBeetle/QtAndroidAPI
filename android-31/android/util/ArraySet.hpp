#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class ArraySet : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArraySet(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ArraySet(QJniObject obj);
		
		// Constructors
		ArraySet();
		ArraySet(jobjectArray arg0);
		ArraySet(android::util::ArraySet &arg0);
		ArraySet(jint arg0);
		ArraySet(__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		void addAll(android::util::ArraySet arg0);
		void clear();
		jboolean contains(jobject arg0);
		jboolean containsAll(__JniBaseClass arg0);
		void ensureCapacity(jint arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		jboolean isEmpty();
		__JniBaseClass iterator();
		jboolean remove(jobject arg0);
		jboolean removeAll(android::util::ArraySet arg0);
		jboolean removeAll(__JniBaseClass arg0);
		jobject removeAt(jint arg0);
		jboolean removeIf(__JniBaseClass arg0);
		jboolean retainAll(__JniBaseClass arg0);
		jint size();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
		jobject valueAt(jint arg0);
	};
} // namespace android::util

