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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SoftReference(const char *className, const char *sig, Ts...agv) : java::lang::ref::Reference(className, sig, std::forward<Ts>(agv)...) {}
		SoftReference(QAndroidJniObject obj);
		
		// Constructors
		SoftReference(jobject arg0);
		SoftReference(jobject arg0, java::lang::ref::ReferenceQueue arg1);
		
		// Methods
		jobject get();
	};
} // namespace java::lang::ref

