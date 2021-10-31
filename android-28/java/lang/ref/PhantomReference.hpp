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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PhantomReference(const char *className, const char *sig, Ts...agv) : java::lang::ref::Reference(className, sig, std::forward<Ts>(agv)...) {}
		PhantomReference(QAndroidJniObject obj);
		
		// Constructors
		PhantomReference(jobject arg0, java::lang::ref::ReferenceQueue arg1);
		
		// Methods
		jobject get();
	};
} // namespace java::lang::ref

