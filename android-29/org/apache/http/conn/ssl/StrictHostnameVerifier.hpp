#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "./AbstractVerifier.hpp"


namespace org::apache::http::conn::ssl
{
	class StrictHostnameVerifier : public org::apache::http::conn::ssl::AbstractVerifier
	{
	public:
		// Fields
		
		StrictHostnameVerifier(QAndroidJniObject obj);
		// Constructors
		StrictHostnameVerifier();
		
		// Methods
		jstring toString();
		void verify(jstring arg0, jarray arg1, jarray arg2);
		void verify(const QString &arg0, jarray arg1, jarray arg2);
	};
} // namespace org::apache::http::conn::ssl

