#pragma once

#include "../../JObject.hpp"

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
	class ServiceLoader : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceLoader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServiceLoader(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::ServiceLoader load(jclass arg0);
		static java::util::ServiceLoader load(jclass arg0, java::lang::ClassLoader arg1);
		static java::util::ServiceLoader load(JObject arg0, jclass arg1);
		static java::util::ServiceLoader loadInstalled(jclass arg0);
		java::util::Optional findFirst();
		JObject iterator();
		void reload();
		JObject stream();
		jstring toString();
	};
} // namespace java::util

