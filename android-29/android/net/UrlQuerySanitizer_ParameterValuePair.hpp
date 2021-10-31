#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class UrlQuerySanitizer;
}

namespace android::net
{
	class UrlQuerySanitizer_ParameterValuePair : public __JniBaseClass
	{
	public:
		// Fields
		jstring mParameter();
		jstring mValue();
		
		UrlQuerySanitizer_ParameterValuePair(QAndroidJniObject obj);
		// Constructors
		UrlQuerySanitizer_ParameterValuePair(android::net::UrlQuerySanitizer arg0, jstring arg1, jstring arg2);
		UrlQuerySanitizer_ParameterValuePair() = default;
		
		// Methods
	};
} // namespace android::net

