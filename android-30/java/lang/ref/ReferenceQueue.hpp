#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang::ref
{
	class Reference;
}

namespace java::lang::ref
{
	class ReferenceQueue : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReferenceQueue(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ReferenceQueue(QJniObject obj);
		
		// Constructors
		ReferenceQueue();
		
		// Methods
		java::lang::ref::Reference poll();
		java::lang::ref::Reference remove();
		java::lang::ref::Reference remove(jlong arg0);
	};
} // namespace java::lang::ref

