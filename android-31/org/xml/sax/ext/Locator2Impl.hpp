#pragma once

#include "../../../../JString.hpp"
#include "./Locator2Impl.def.hpp"

namespace org::xml::sax::ext
{
	// Fields
	
	// Constructors
	inline Locator2Impl::Locator2Impl()
		: org::xml::sax::helpers::LocatorImpl(
			"org.xml.sax.ext.Locator2Impl",
			"()V"
		) {}
	inline Locator2Impl::Locator2Impl(JObject arg0)
		: org::xml::sax::helpers::LocatorImpl(
			"org.xml.sax.ext.Locator2Impl",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JString Locator2Impl::getEncoding() const
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	inline JString Locator2Impl::getXMLVersion() const
	{
		return callObjectMethod(
			"getXMLVersion",
			"()Ljava/lang/String;"
		);
	}
	inline void Locator2Impl::setEncoding(JString arg0) const
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Locator2Impl::setXMLVersion(JString arg0) const
	{
		callMethod<void>(
			"setXMLVersion",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace org::xml::sax::ext

// Base class headers
#include "../helpers/LocatorImpl.hpp"

