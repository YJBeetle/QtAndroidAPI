#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractSet.hpp"
#include "./HashSet.hpp"


namespace java::util
{
	class LinkedHashSet : public java::util::HashSet
	{
	public:
		// Fields
		
		LinkedHashSet(QAndroidJniObject obj);
		// Constructors
		LinkedHashSet();
		LinkedHashSet(jint arg0);
		LinkedHashSet(__JniBaseClass arg0);
		LinkedHashSet(jint arg0, jfloat arg1);
		
		// Methods
		QAndroidJniObject spliterator();
	};
} // namespace java::util

