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
		
		Provider_Service(QAndroidJniObject obj);
		// Constructors
		Provider_Service(java::security::Provider &arg0, jstring &arg1, jstring &arg2, jstring &arg3, __JniBaseClass &arg4, __JniBaseClass &arg5);
		Provider_Service(java::security::Provider &arg0, const QString &arg1, const QString &arg2, const QString &arg3, __JniBaseClass &arg4, __JniBaseClass &arg5);
		Provider_Service() = default;
		
		// Methods
		jstring getAlgorithm();
		jstring getAttribute(jstring arg0);
		jstring getAttribute(const QString &arg0);
		jstring getClassName();
		QAndroidJniObject getProvider();
		jstring getType();
		jobject newInstance(jobject arg0);
		jboolean supportsParameter(jobject arg0);
		jstring toString();
	};
} // namespace java::security

