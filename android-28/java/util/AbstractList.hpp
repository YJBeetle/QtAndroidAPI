#pragma once

#include "./AbstractCollection.hpp"

class JObject;
class JString;

namespace java::util
{
	class AbstractList : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractList(const char *className, const char *sig, Ts...agv) : java::util::AbstractCollection(className, sig, std::forward<Ts>(agv)...) {}
		AbstractList(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean add(JObject arg0);
		void add(jint arg0, JObject arg1);
		jboolean addAll(jint arg0, JObject arg1);
		void clear();
		jboolean equals(JObject arg0);
		JObject get(jint arg0);
		jint hashCode();
		jint indexOf(JObject arg0);
		JObject iterator();
		jint lastIndexOf(JObject arg0);
		JObject listIterator();
		JObject listIterator(jint arg0);
		JObject remove(jint arg0);
		JObject set(jint arg0, JObject arg1);
		JObject subList(jint arg0, jint arg1);
	};
} // namespace java::util

