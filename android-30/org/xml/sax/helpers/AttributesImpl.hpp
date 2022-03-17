#pragma once

#include "../../../../JArray.hpp"
#include "../../../../JString.hpp"
#include "./AttributesImpl.def.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	inline AttributesImpl::AttributesImpl()
		: JObject(
			"org.xml.sax.helpers.AttributesImpl",
			"()V"
		) {}
	inline AttributesImpl::AttributesImpl(JObject arg0)
		: JObject(
			"org.xml.sax.helpers.AttributesImpl",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void AttributesImpl::addAttribute(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4) const
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
	inline void AttributesImpl::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jint AttributesImpl::getIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint AttributesImpl::getIndex(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint AttributesImpl::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	inline JString AttributesImpl::getLocalName(jint arg0) const
	{
		return callObjectMethod(
			"getLocalName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString AttributesImpl::getQName(jint arg0) const
	{
		return callObjectMethod(
			"getQName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString AttributesImpl::getType(jint arg0) const
	{
		return callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString AttributesImpl::getType(JString arg0) const
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString AttributesImpl::getType(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString AttributesImpl::getURI(jint arg0) const
	{
		return callObjectMethod(
			"getURI",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString AttributesImpl::getValue(jint arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString AttributesImpl::getValue(JString arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString AttributesImpl::getValue(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void AttributesImpl::removeAttribute(jint arg0) const
	{
		callMethod<void>(
			"removeAttribute",
			"(I)V",
			arg0
		);
	}
	inline void AttributesImpl::setAttribute(jint arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5) const
	{
		callMethod<void>(
			"setAttribute",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>()
		);
	}
	inline void AttributesImpl::setAttributes(JObject arg0) const
	{
		callMethod<void>(
			"setAttributes",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.object()
		);
	}
	inline void AttributesImpl::setLocalName(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setLocalName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void AttributesImpl::setQName(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setQName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void AttributesImpl::setType(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setType",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void AttributesImpl::setURI(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setURI",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void AttributesImpl::setValue(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setValue",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace org::xml::sax::helpers

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::xml::sax::helpers;
#endif
