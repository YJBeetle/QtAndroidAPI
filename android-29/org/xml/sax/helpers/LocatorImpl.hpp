#pragma once

#include "../../../../JString.hpp"
#include "./LocatorImpl.def.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	inline LocatorImpl::LocatorImpl()
		: JObject(
			"org.xml.sax.helpers.LocatorImpl",
			"()V"
		) {}
	inline LocatorImpl::LocatorImpl(JObject arg0)
		: JObject(
			"org.xml.sax.helpers.LocatorImpl",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint LocatorImpl::getColumnNumber() const
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	inline jint LocatorImpl::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	inline JString LocatorImpl::getPublicId() const
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		);
	}
	inline JString LocatorImpl::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	inline void LocatorImpl::setColumnNumber(jint arg0) const
	{
		callMethod<void>(
			"setColumnNumber",
			"(I)V",
			arg0
		);
	}
	inline void LocatorImpl::setLineNumber(jint arg0) const
	{
		callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0
		);
	}
	inline void LocatorImpl::setPublicId(JString arg0) const
	{
		callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void LocatorImpl::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace org::xml::sax::helpers

// Base class headers

