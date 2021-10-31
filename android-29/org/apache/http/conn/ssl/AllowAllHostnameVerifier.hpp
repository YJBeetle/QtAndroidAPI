#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "./AbstractVerifier.hpp"


namespace org::apache::http::conn::ssl
{
	class AllowAllHostnameVerifier : public org::apache::http::conn::ssl::AbstractVerifier
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AllowAllHostnameVerifier(const char *className, const char *sig, Ts...agv) : org::apache::http::conn::ssl::AbstractVerifier(className, sig, std::forward<Ts>(agv)...) {}
		AllowAllHostnameVerifier(QAndroidJniObject obj);
		
		// Constructors
		AllowAllHostnameVerifier();
		
		// Methods
		jstring toString();
		void verify(jstring arg0, jarray arg1, jarray arg2);
	};
} // namespace org::apache::http::conn::ssl

