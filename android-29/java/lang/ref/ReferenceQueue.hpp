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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReferenceQueue(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ReferenceQueue(QAndroidJniObject obj);
		
		// Constructors
		ReferenceQueue();
		
		// Methods
		QAndroidJniObject poll();
		QAndroidJniObject remove();
		QAndroidJniObject remove(jlong arg0);
	};
} // namespace java::lang::ref

