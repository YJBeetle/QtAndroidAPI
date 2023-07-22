#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../io/InputStream.def.hpp"
#include "../io/OutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ContentHandler.def.hpp"
#include "./URL.def.hpp"
#include "../security/Permission.def.hpp"
#include "../util/Hashtable.def.hpp"
#include "../util/concurrent/ConcurrentHashMap.def.hpp"
#include "./URLConnection.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean URLConnection::getDefaultAllowUserInteraction()
	{
		return callStaticMethod<jboolean>(
			"java.net.URLConnection",
			"getDefaultAllowUserInteraction",
			"()Z"
		);
	}
	inline JString URLConnection::getDefaultRequestProperty(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLConnection",
			"getDefaultRequestProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLConnection::getDefaultUseCaches(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"java.net.URLConnection",
			"getDefaultUseCaches",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject URLConnection::getFileNameMap()
	{
		return callStaticObjectMethod(
			"java.net.URLConnection",
			"getFileNameMap",
			"()Ljava/net/FileNameMap;"
		);
	}
	inline JString URLConnection::guessContentTypeFromName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLConnection",
			"guessContentTypeFromName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString URLConnection::guessContentTypeFromStream(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLConnection",
			"guessContentTypeFromStream",
			"(Ljava/io/InputStream;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline void URLConnection::setContentHandlerFactory(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.URLConnection",
			"setContentHandlerFactory",
			"(Ljava/net/ContentHandlerFactory;)V",
			arg0.object()
		);
	}
	inline void URLConnection::setDefaultAllowUserInteraction(jboolean arg0)
	{
		callStaticMethod<void>(
			"java.net.URLConnection",
			"setDefaultAllowUserInteraction",
			"(Z)V",
			arg0
		);
	}
	inline void URLConnection::setDefaultRequestProperty(JString arg0, JString arg1)
	{
		callStaticMethod<void>(
			"java.net.URLConnection",
			"setDefaultRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void URLConnection::setDefaultUseCaches(JString arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"java.net.URLConnection",
			"setDefaultUseCaches",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void URLConnection::setFileNameMap(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.URLConnection",
			"setFileNameMap",
			"(Ljava/net/FileNameMap;)V",
			arg0.object()
		);
	}
	inline void URLConnection::addRequestProperty(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"addRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void URLConnection::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline jboolean URLConnection::getAllowUserInteraction() const
	{
		return callMethod<jboolean>(
			"getAllowUserInteraction",
			"()Z"
		);
	}
	inline jint URLConnection::getConnectTimeout() const
	{
		return callMethod<jint>(
			"getConnectTimeout",
			"()I"
		);
	}
	inline JObject URLConnection::getContent() const
	{
		return callObjectMethod(
			"getContent",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject URLConnection::getContent(JArray arg0) const
	{
		return callObjectMethod(
			"getContent",
			"([Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object<jarray>()
		);
	}
	inline JString URLConnection::getContentEncoding() const
	{
		return callObjectMethod(
			"getContentEncoding",
			"()Ljava/lang/String;"
		);
	}
	inline jint URLConnection::getContentLength() const
	{
		return callMethod<jint>(
			"getContentLength",
			"()I"
		);
	}
	inline jlong URLConnection::getContentLengthLong() const
	{
		return callMethod<jlong>(
			"getContentLengthLong",
			"()J"
		);
	}
	inline JString URLConnection::getContentType() const
	{
		return callObjectMethod(
			"getContentType",
			"()Ljava/lang/String;"
		);
	}
	inline jlong URLConnection::getDate() const
	{
		return callMethod<jlong>(
			"getDate",
			"()J"
		);
	}
	inline jboolean URLConnection::getDefaultUseCaches() const
	{
		return callMethod<jboolean>(
			"getDefaultUseCaches",
			"()Z"
		);
	}
	inline jboolean URLConnection::getDoInput() const
	{
		return callMethod<jboolean>(
			"getDoInput",
			"()Z"
		);
	}
	inline jboolean URLConnection::getDoOutput() const
	{
		return callMethod<jboolean>(
			"getDoOutput",
			"()Z"
		);
	}
	inline jlong URLConnection::getExpiration() const
	{
		return callMethod<jlong>(
			"getExpiration",
			"()J"
		);
	}
	inline JString URLConnection::getHeaderField(jint arg0) const
	{
		return callObjectMethod(
			"getHeaderField",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString URLConnection::getHeaderField(JString arg0) const
	{
		return callObjectMethod(
			"getHeaderField",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jlong URLConnection::getHeaderFieldDate(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getHeaderFieldDate",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint URLConnection::getHeaderFieldInt(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getHeaderFieldInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString URLConnection::getHeaderFieldKey(jint arg0) const
	{
		return callObjectMethod(
			"getHeaderFieldKey",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jlong URLConnection::getHeaderFieldLong(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getHeaderFieldLong",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JObject URLConnection::getHeaderFields() const
	{
		return callObjectMethod(
			"getHeaderFields",
			"()Ljava/util/Map;"
		);
	}
	inline jlong URLConnection::getIfModifiedSince() const
	{
		return callMethod<jlong>(
			"getIfModifiedSince",
			"()J"
		);
	}
	inline java::io::InputStream URLConnection::getInputStream() const
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline jlong URLConnection::getLastModified() const
	{
		return callMethod<jlong>(
			"getLastModified",
			"()J"
		);
	}
	inline java::io::OutputStream URLConnection::getOutputStream() const
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	inline java::security::Permission URLConnection::getPermission() const
	{
		return callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
	inline jint URLConnection::getReadTimeout() const
	{
		return callMethod<jint>(
			"getReadTimeout",
			"()I"
		);
	}
	inline JObject URLConnection::getRequestProperties() const
	{
		return callObjectMethod(
			"getRequestProperties",
			"()Ljava/util/Map;"
		);
	}
	inline JString URLConnection::getRequestProperty(JString arg0) const
	{
		return callObjectMethod(
			"getRequestProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline java::net::URL URLConnection::getURL() const
	{
		return callObjectMethod(
			"getURL",
			"()Ljava/net/URL;"
		);
	}
	inline jboolean URLConnection::getUseCaches() const
	{
		return callMethod<jboolean>(
			"getUseCaches",
			"()Z"
		);
	}
	inline void URLConnection::setAllowUserInteraction(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowUserInteraction",
			"(Z)V",
			arg0
		);
	}
	inline void URLConnection::setConnectTimeout(jint arg0) const
	{
		callMethod<void>(
			"setConnectTimeout",
			"(I)V",
			arg0
		);
	}
	inline void URLConnection::setDefaultUseCaches(jboolean arg0) const
	{
		callMethod<void>(
			"setDefaultUseCaches",
			"(Z)V",
			arg0
		);
	}
	inline void URLConnection::setDoInput(jboolean arg0) const
	{
		callMethod<void>(
			"setDoInput",
			"(Z)V",
			arg0
		);
	}
	inline void URLConnection::setDoOutput(jboolean arg0) const
	{
		callMethod<void>(
			"setDoOutput",
			"(Z)V",
			arg0
		);
	}
	inline void URLConnection::setIfModifiedSince(jlong arg0) const
	{
		callMethod<void>(
			"setIfModifiedSince",
			"(J)V",
			arg0
		);
	}
	inline void URLConnection::setReadTimeout(jint arg0) const
	{
		callMethod<void>(
			"setReadTimeout",
			"(I)V",
			arg0
		);
	}
	inline void URLConnection::setRequestProperty(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void URLConnection::setUseCaches(jboolean arg0) const
	{
		callMethod<void>(
			"setUseCaches",
			"(Z)V",
			arg0
		);
	}
	inline JString URLConnection::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
