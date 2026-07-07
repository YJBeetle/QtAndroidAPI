#pragma once

#include "./Reference.def.hpp"

class JObject;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PhantomReference(const char *className, const char *sig, Ts...agv) : java::lang::ref::Reference(className, sig, std::forward<Ts>(agv)...) {}
		PhantomReference(QJniObject obj) : java::lang::ref::Reference(obj) {}
		
		// Constructors
		PhantomReference(JObject arg0, java::lang::ref::ReferenceQueue arg1);
		
		// Methods
		JObject get() const;
	};
} // namespace java::lang::ref

