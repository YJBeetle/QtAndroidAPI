#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractSet.hpp"

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
	class HashMap;
}

namespace java::util
{
	class HashSet : public java::util::AbstractSet
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HashSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		HashSet(QJniObject obj);
		
		// Constructors
		HashSet();
		HashSet(jint arg0);
		HashSet(__JniBaseClass arg0);
		HashSet(jint arg0, jfloat arg1);
		
		// Methods
		jboolean add(jobject arg0);
		void clear();
		jobject clone();
		jboolean contains(jobject arg0);
		jboolean isEmpty();
		__JniBaseClass iterator();
		jboolean remove(jobject arg0);
		jint size();
		__JniBaseClass spliterator();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
	};
} // namespace java::util

