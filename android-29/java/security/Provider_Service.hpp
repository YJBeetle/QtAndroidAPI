#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class Boolean;
}
namespace java::lang::ref
{
	class Reference;
}
namespace java::security
{
	class Provider;
}

namespace java::security
{
	class Provider_Service : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Provider_Service(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Provider_Service(QJniObject obj);
		
		// Constructors
		Provider_Service(java::security::Provider arg0, jstring arg1, jstring arg2, jstring arg3, __JniBaseClass arg4, __JniBaseClass arg5);
		
		// Methods
		jstring getAlgorithm();
		jstring getAttribute(jstring arg0);
		jstring getClassName();
		java::security::Provider getProvider();
		jstring getType();
		jobject newInstance(jobject arg0);
		jboolean supportsParameter(jobject arg0);
		jstring toString();
	};
} // namespace java::security

