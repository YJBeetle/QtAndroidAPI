#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Rfc822Token.def.hpp"

namespace android::text::util
{
	// Fields
	
	// Constructors
	inline Rfc822Token::Rfc822Token(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.text.util.Rfc822Token",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline JString Rfc822Token::quoteComment(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteComment",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Rfc822Token::quoteName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Rfc822Token::quoteNameIfNecessary(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteNameIfNecessary",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jboolean Rfc822Token::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString Rfc822Token::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		);
	}
	inline JString Rfc822Token::getComment() const
	{
		return callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		);
	}
	inline JString Rfc822Token::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint Rfc822Token::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Rfc822Token::setAddress(JString arg0) const
	{
		callMethod<void>(
			"setAddress",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Rfc822Token::setComment(JString arg0) const
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Rfc822Token::setName(JString arg0) const
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString Rfc822Token::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::util;
#endif
