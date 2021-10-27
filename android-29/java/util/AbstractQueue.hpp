#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"


namespace java::util
{
	class AbstractQueue : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		AbstractQueue(QAndroidJniObject obj);
		// Constructors
		AbstractQueue() = default;
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		void clear();
		jobject element();
		jobject remove();
	};
} // namespace java::util

