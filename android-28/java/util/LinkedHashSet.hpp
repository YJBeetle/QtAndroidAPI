#pragma once

#include "./HashSet.hpp"

namespace java::util
{
	class LinkedHashSet : public java::util::HashSet
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkedHashSet(const char *className, const char *sig, Ts...agv) : java::util::HashSet(className, sig, std::forward<Ts>(agv)...) {}
		LinkedHashSet(QAndroidJniObject obj);
		
		// Constructors
		LinkedHashSet();
		LinkedHashSet(jint arg0);
		LinkedHashSet(JObject arg0);
		LinkedHashSet(jint arg0, jfloat arg1);
		
		// Methods
		JObject spliterator();
	};
} // namespace java::util

