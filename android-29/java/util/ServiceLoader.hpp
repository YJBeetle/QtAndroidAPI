#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class Void;
}
namespace java::lang::reflect
{
	class Constructor;
}
namespace java::lang::reflect
{
	class Method;
}
namespace java::net
{
	class URL;
}
namespace java::security
{
	class AccessControlContext;
}
namespace java::util
{
	class Optional;
}

namespace java::util
{
	class ServiceLoader : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceLoader(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ServiceLoader(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::ServiceLoader load(jclass arg0);
		static java::util::ServiceLoader load(jclass arg0, java::lang::ClassLoader arg1);
		static java::util::ServiceLoader load(__JniBaseClass arg0, jclass arg1);
		static java::util::ServiceLoader loadInstalled(jclass arg0);
		java::util::Optional findFirst();
		__JniBaseClass iterator();
		void reload();
		__JniBaseClass stream();
		jstring toString();
	};
} // namespace java::util

