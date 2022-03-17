#pragma once

#include "./URLConnection.def.hpp"

class JArray;
namespace java::io
{
	class InputStream;
}
class JString;
namespace java::net
{
	class Authenticator;
}
namespace java::net
{
	class URL;
}
namespace java::security
{
	class Permission;
}

namespace java::net
{
	class HttpURLConnection : public java::net::URLConnection
	{
	public:
		// Fields
		static jint HTTP_ACCEPTED();
		static jint HTTP_BAD_GATEWAY();
		static jint HTTP_BAD_METHOD();
		static jint HTTP_BAD_REQUEST();
		static jint HTTP_CLIENT_TIMEOUT();
		static jint HTTP_CONFLICT();
		static jint HTTP_CREATED();
		static jint HTTP_ENTITY_TOO_LARGE();
		static jint HTTP_FORBIDDEN();
		static jint HTTP_GATEWAY_TIMEOUT();
		static jint HTTP_GONE();
		static jint HTTP_INTERNAL_ERROR();
		static jint HTTP_LENGTH_REQUIRED();
		static jint HTTP_MOVED_PERM();
		static jint HTTP_MOVED_TEMP();
		static jint HTTP_MULT_CHOICE();
		static jint HTTP_NOT_ACCEPTABLE();
		static jint HTTP_NOT_AUTHORITATIVE();
		static jint HTTP_NOT_FOUND();
		static jint HTTP_NOT_IMPLEMENTED();
		static jint HTTP_NOT_MODIFIED();
		static jint HTTP_NO_CONTENT();
		static jint HTTP_OK();
		static jint HTTP_PARTIAL();
		static jint HTTP_PAYMENT_REQUIRED();
		static jint HTTP_PRECON_FAILED();
		static jint HTTP_PROXY_AUTH();
		static jint HTTP_REQ_TOO_LONG();
		static jint HTTP_RESET();
		static jint HTTP_SEE_OTHER();
		static jint HTTP_SERVER_ERROR();
		static jint HTTP_UNAUTHORIZED();
		static jint HTTP_UNAVAILABLE();
		static jint HTTP_UNSUPPORTED_TYPE();
		static jint HTTP_USE_PROXY();
		static jint HTTP_VERSION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HttpURLConnection(const char *className, const char *sig, Ts...agv) : java::net::URLConnection(className, sig, std::forward<Ts>(agv)...) {}
		HttpURLConnection(QAndroidJniObject obj) : java::net::URLConnection(obj) {}
		
		// Constructors
		
		// Methods
		static jboolean getFollowRedirects();
		static void setFollowRedirects(jboolean arg0);
		void disconnect() const;
		java::io::InputStream getErrorStream() const;
		JString getHeaderField(jint arg0) const;
		jlong getHeaderFieldDate(JString arg0, jlong arg1) const;
		JString getHeaderFieldKey(jint arg0) const;
		jboolean getInstanceFollowRedirects() const;
		java::security::Permission getPermission() const;
		JString getRequestMethod() const;
		jint getResponseCode() const;
		JString getResponseMessage() const;
		void setAuthenticator(java::net::Authenticator arg0) const;
		void setChunkedStreamingMode(jint arg0) const;
		void setFixedLengthStreamingMode(jint arg0) const;
		void setFixedLengthStreamingMode(jlong arg0) const;
		void setInstanceFollowRedirects(jboolean arg0) const;
		void setRequestMethod(JString arg0) const;
		jboolean usingProxy() const;
	};
} // namespace java::net

