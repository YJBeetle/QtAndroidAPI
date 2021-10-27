#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"


namespace java::util
{
	class AbstractSet : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		AbstractSet(QAndroidJniObject obj);
		// Constructors
		AbstractSet() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean removeAll(__JniBaseClass arg0);
	};
} // namespace java::util

