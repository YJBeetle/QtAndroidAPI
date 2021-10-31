#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Reference.hpp"

namespace java::lang::ref
{
	class ReferenceQueue;
}

namespace java::lang::ref
{
	class PhantomReference : public java::lang::ref::Reference
	{
	public:
		// Fields
		
		PhantomReference(QAndroidJniObject obj);
		// Constructors
		PhantomReference(jobject arg0, java::lang::ref::ReferenceQueue arg1);
		PhantomReference() = default;
		
		// Methods
		jobject get();
	};
} // namespace java::lang::ref

