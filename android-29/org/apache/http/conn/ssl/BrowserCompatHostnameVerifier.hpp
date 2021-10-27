#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "./AbstractVerifier.hpp"


namespace org::apache::http::conn::ssl
{
	class BrowserCompatHostnameVerifier : public org::apache::http::conn::ssl::AbstractVerifier
	{
	public:
		// Fields
		
		BrowserCompatHostnameVerifier(QAndroidJniObject obj);
		// Constructors
		BrowserCompatHostnameVerifier();
		
		// Methods
		jstring toString();
		void verify(jstring arg0, jarray arg1, jarray arg2);
		void verify(const QString &arg0, jarray arg1, jarray arg2);
	};
} // namespace org::apache::http::conn::ssl

