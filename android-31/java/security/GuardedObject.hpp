#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectOutputStream;
}

namespace java::security
{
	class GuardedObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GuardedObject(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GuardedObject(QJniObject obj);
		
		// Constructors
		GuardedObject(jobject arg0, __JniBaseClass arg1);
		
		// Methods
		jobject getObject();
	};
} // namespace java::security

