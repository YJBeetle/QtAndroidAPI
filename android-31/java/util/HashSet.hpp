#pragma once

#include "./AbstractSet.hpp"

class JObjectArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HashSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		HashSet(QAndroidJniObject obj);
		
		// Constructors
		HashSet();
		HashSet(jint arg0);
		HashSet(JObject arg0);
		HashSet(jint arg0, jfloat arg1);
		
		// Methods
		jboolean add(JObject arg0);
		void clear();
		JObject clone();
		jboolean contains(JObject arg0);
		jboolean isEmpty();
		JObject iterator();
		jboolean remove(JObject arg0);
		jint size();
		JObject spliterator();
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
	};
} // namespace java::util

