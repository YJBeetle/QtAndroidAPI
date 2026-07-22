#pragma once

#include "./HashSet.def.hpp"

class JObject;
namespace java::util
{
	class LinkedHashMap;
}

namespace java::util
{
	class LinkedHashSet : public java::util::HashSet
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LinkedHashSet(const char *className, const char *sig, Ts...agv) : java::util::HashSet(className, sig, std::forward<Ts>(agv)...) {}
		LinkedHashSet(QJniObject obj) : java::util::HashSet(obj) {}
		
		// Constructors
		LinkedHashSet();
		LinkedHashSet(jint arg0);
		LinkedHashSet(JObject arg0);
		LinkedHashSet(jint arg0, jfloat arg1);
		
		// Methods
		static java::util::LinkedHashSet newLinkedHashSet(jint arg0);
		void addFirst(JObject arg0) const;
		void addLast(JObject arg0) const;
		JObject getFirst() const;
		JObject getLast() const;
		JObject removeFirst() const;
		JObject removeLast() const;
		JObject reversed() const;
		JObject spliterator() const;
	};
} // namespace java::util

