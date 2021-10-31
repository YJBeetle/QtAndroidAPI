#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractMap.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}

namespace java::util
{
	class IdentityHashMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IdentityHashMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		IdentityHashMap(QAndroidJniObject obj);
		
		// Constructors
		IdentityHashMap();
		IdentityHashMap(jint arg0);
		IdentityHashMap(__JniBaseClass arg0);
		
		// Methods
		void clear();
		jobject clone();
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		__JniBaseClass entrySet();
		jboolean equals(jobject arg0);
		void forEach(__JniBaseClass arg0);
		jobject get(jobject arg0);
		jint hashCode();
		jboolean isEmpty();
		__JniBaseClass keySet();
		jobject put(jobject arg0, jobject arg1);
		void putAll(__JniBaseClass arg0);
		jobject remove(jobject arg0);
		void replaceAll(__JniBaseClass arg0);
		jint size();
		__JniBaseClass values();
	};
} // namespace java::util

