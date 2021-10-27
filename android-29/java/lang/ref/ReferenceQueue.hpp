#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang::ref
{
	class Reference;
}

namespace java::lang::ref
{
	class ReferenceQueue : public __JniBaseClass
	{
	public:
		// Fields
		
		ReferenceQueue(QAndroidJniObject obj);
		// Constructors
		ReferenceQueue();
		
		// Methods
		QAndroidJniObject poll();
		QAndroidJniObject remove();
		QAndroidJniObject remove(jlong arg0);
	};
} // namespace java::lang::ref

