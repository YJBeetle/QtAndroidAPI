#pragma once

#include "../../../../JBooleanArray.hpp"
#include "../../../../JString.hpp"
#include "./Attributes2Impl.def.hpp"

namespace org::xml::sax::ext
{
	// Fields
	
	// Constructors
	inline Attributes2Impl::Attributes2Impl()
		: org::xml::sax::helpers::AttributesImpl(
			"org.xml.sax.ext.Attributes2Impl",
			"()V"
		) {}
	inline Attributes2Impl::Attributes2Impl(JObject arg0)
		: org::xml::sax::helpers::AttributesImpl(
			"org.xml.sax.ext.Attributes2Impl",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void Attributes2Impl::addAttribute(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4) const
	{
		callMethod<void>(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		);
	}
	inline jboolean Attributes2Impl::isDeclared(jint arg0) const
	{
		return callMethod<jboolean>(
			"isDeclared",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Attributes2Impl::isDeclared(JString arg0) const
	{
		return callMethod<jboolean>(
			"isDeclared",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean Attributes2Impl::isDeclared(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isDeclared",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean Attributes2Impl::isSpecified(jint arg0) const
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Attributes2Impl::isSpecified(JString arg0) const
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean Attributes2Impl::isSpecified(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Attributes2Impl::removeAttribute(jint arg0) const
	{
		callMethod<void>(
			"removeAttribute",
			"(I)V",
			arg0
		);
	}
	inline void Attributes2Impl::setAttributes(JObject arg0) const
	{
		callMethod<void>(
			"setAttributes",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.object()
		);
	}
	inline void Attributes2Impl::setDeclared(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setDeclared",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void Attributes2Impl::setSpecified(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setSpecified",
			"(IZ)V",
			arg0,
			arg1
		);
	}
} // namespace org::xml::sax::ext

// Base class headers
#include "../helpers/AttributesImpl.hpp"

