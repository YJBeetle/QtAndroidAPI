#pragma once

#include "./Reference.def.hpp"

class JObject;
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
		WeakReference(QAndroidJniObject obj) : java::lang::ref::Reference(obj) {}
		
		// Constructors
		WeakReference(JObject arg0);
		WeakReference(JObject arg0, java::lang::ref::ReferenceQueue arg1);
		
		// Methods
	};
} // namespace java::lang::ref

