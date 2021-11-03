#pragma once

#include "./Reference.hpp"

class JObject;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SoftReference(const char *className, const char *sig, Ts...agv) : java::lang::ref::Reference(className, sig, std::forward<Ts>(agv)...) {}
		SoftReference(QJniObject obj);
		
		// Constructors
		SoftReference(JObject arg0);
		SoftReference(JObject arg0, java::lang::ref::ReferenceQueue arg1);
		
		// Methods
		JObject get();
	};
} // namespace java::lang::ref

