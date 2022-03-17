#pragma once

#include "./AbstractCollection.def.hpp"

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
		AbstractList(QAndroidJniObject obj) : java::util::AbstractCollection(obj) {}
		
		// Constructors
		
		// Methods
		jboolean add(JObject arg0) const;
		void add(jint arg0, JObject arg1) const;
		jboolean addAll(jint arg0, JObject arg1) const;
		void clear() const;
		jboolean equals(JObject arg0) const;
		JObject get(jint arg0) const;
		jint hashCode() const;
		jint indexOf(JObject arg0) const;
		JObject iterator() const;
		jint lastIndexOf(JObject arg0) const;
		JObject listIterator() const;
		JObject listIterator(jint arg0) const;
		JObject remove(jint arg0) const;
		JObject set(jint arg0, JObject arg1) const;
		JObject subList(jint arg0, jint arg1) const;
	};
} // namespace java::util

