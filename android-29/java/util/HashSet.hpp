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
		
		HashSet(QAndroidJniObject obj);
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
		QAndroidJniObject iterator();
		jboolean remove(jobject arg0);
		jint size();
		QAndroidJniObject spliterator();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
	};
} // namespace java::util

