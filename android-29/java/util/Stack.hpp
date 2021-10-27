#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractList.hpp"
#include "./Vector.hpp"


namespace java::util
{
	class Stack : public java::util::Vector
	{
	public:
		// Fields
		
		Stack(QAndroidJniObject obj);
		// Constructors
		Stack();
		
		// Methods
		jboolean empty();
		jobject peek();
		jobject pop();
		jobject push(jobject arg0);
		jint search(jobject arg0);
	};
} // namespace java::util

