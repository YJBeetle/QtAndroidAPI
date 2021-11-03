#pragma once

#include "../../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WeakReference(const char *className, const char *sig, Ts...agv) : java::lang::ref::Reference(className, sig, std::forward<Ts>(agv)...) {}
		WeakReference(QAndroidJniObject obj);
		
		// Constructors
		WeakReference(jobject arg0);
		WeakReference(jobject arg0, java::lang::ref::ReferenceQueue arg1);
		
		// Methods
	};
} // namespace java::lang::ref

