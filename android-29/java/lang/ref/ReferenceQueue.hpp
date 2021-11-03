#pragma once

#include "../../../JObject.hpp"

namespace java::lang::ref
{
	class Reference;
}

namespace java::lang::ref
{
	class ReferenceQueue : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReferenceQueue(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReferenceQueue(QJniObject obj);
		
		// Constructors
		ReferenceQueue();
		
		// Methods
		java::lang::ref::Reference poll();
		java::lang::ref::Reference remove();
		java::lang::ref::Reference remove(jlong arg0);
	};
} // namespace java::lang::ref

