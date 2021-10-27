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
		
		GuardedObject(QAndroidJniObject obj);
		// Constructors
		GuardedObject(jobject &arg0, __JniBaseClass &arg1);
		GuardedObject() = default;
		
		// Methods
		jobject getObject();
	};
} // namespace java::security

