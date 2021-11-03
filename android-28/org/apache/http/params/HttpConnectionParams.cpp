#include "./HttpConnectionParams.hpp"

namespace org::apache::http::params
{
	// Fields
	
	// QJniObject forward
	HttpConnectionParams::HttpConnectionParams(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint HttpConnectionParams::getConnectionTimeout(JObject arg0)
	{
		return callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getConnectionTimeout",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.object()
		);
	}
	jint HttpConnectionParams::getLinger(JObject arg0)
	{
		return callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getLinger",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.object()
		);
	}
	jint HttpConnectionParams::getSoTimeout(JObject arg0)
	{
		return callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getSoTimeout",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.object()
		);
	}
	jint HttpConnectionParams::getSocketBufferSize(JObject arg0)
	{
		return callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getSocketBufferSize",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.object()
		);
	}
	jboolean HttpConnectionParams::getTcpNoDelay(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"org.apache.http.params.HttpConnectionParams",
			"getTcpNoDelay",
			"(Lorg/apache/http/params/HttpParams;)Z",
			arg0.object()
		);
	}
	jboolean HttpConnectionParams::isStaleCheckingEnabled(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"org.apache.http.params.HttpConnectionParams",
			"isStaleCheckingEnabled",
			"(Lorg/apache/http/params/HttpParams;)Z",
			arg0.object()
		);
	}
	void HttpConnectionParams::setConnectionTimeout(JObject arg0, jint arg1)
	{
		callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setConnectionTimeout",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.object(),
			arg1
		);
	}
	void HttpConnectionParams::setLinger(JObject arg0, jint arg1)
	{
		callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setLinger",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.object(),
			arg1
		);
	}
	void HttpConnectionParams::setSoTimeout(JObject arg0, jint arg1)
	{
		callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setSoTimeout",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.object(),
			arg1
		);
	}
	void HttpConnectionParams::setSocketBufferSize(JObject arg0, jint arg1)
	{
		callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setSocketBufferSize",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.object(),
			arg1
		);
	}
	void HttpConnectionParams::setStaleCheckingEnabled(JObject arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setStaleCheckingEnabled",
			"(Lorg/apache/http/params/HttpParams;Z)V",
			arg0.object(),
			arg1
		);
	}
	void HttpConnectionParams::setTcpNoDelay(JObject arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setTcpNoDelay",
			"(Lorg/apache/http/params/HttpParams;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace org::apache::http::params

