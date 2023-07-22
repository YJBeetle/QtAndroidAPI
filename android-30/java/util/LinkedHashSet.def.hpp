#pragma once

#include "./HashSet.def.hpp"

namespace java::util
{
	class LinkedHashSet : public java::util::HashSet
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkedHashSet(const char *className, const char *sig, Ts...agv) : java::util::HashSet(className, sig, std::forward<Ts>(agv)...) {}
		LinkedHashSet(QAndroidJniObject obj) : java::util::HashSet(obj) {}
		
		// Constructors
		LinkedHashSet();
		LinkedHashSet(jint arg0);
		LinkedHashSet(JObject arg0);
		LinkedHashSet(jint arg0, jfloat arg1);
		
		// Methods
		static java::util::LinkedHashSet newLinkedHashSet(jint arg0);
		JObject spliterator() const;
	};
} // namespace java::util

