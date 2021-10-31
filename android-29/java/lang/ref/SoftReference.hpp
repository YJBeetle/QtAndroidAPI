#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Reference.hpp"

namespace java::lang::ref
{
	class ReferenceQueue;
}

namespace java::lang::ref
{
	class SoftReference : public java::lang::ref::Reference
	{
	public:
		// Fields
		
		SoftReference(QAndroidJniObject obj);
		// Constructors
		SoftReference(jobject arg0);
		SoftReference(jobject arg0, java::lang::ref::ReferenceQueue arg1);
		SoftReference() = default;
		
		// Methods
		jobject get();
	};
} // namespace java::lang::ref

