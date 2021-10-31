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
		
		// QJniObject forward
		template<typename ...Ts> explicit UrlQuerySanitizer_ParameterValuePair(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UrlQuerySanitizer_ParameterValuePair(QJniObject obj);
		
		// Constructors
		UrlQuerySanitizer_ParameterValuePair(android::net::UrlQuerySanitizer arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace android::net

