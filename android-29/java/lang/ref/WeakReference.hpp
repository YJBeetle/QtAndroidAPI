#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Reference.hpp"

namespace java::lang::ref
{
	class ReferenceQueue;
}

namespace java::lang::ref
{
	class WeakReference : public java::lang::ref::Reference
	{
	public:
		// Fields
		
		WeakReference(QAndroidJniObject obj);
		// Constructors
		WeakReference(jobject &arg0);
		WeakReference(jobject &arg0, java::lang::ref::ReferenceQueue &arg1);
		WeakReference() = default;
		
		// Methods
	};
} // namespace java::lang::ref

