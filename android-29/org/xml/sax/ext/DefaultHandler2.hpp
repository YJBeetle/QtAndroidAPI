#pragma once

#include "../../../../JCharArray.hpp"
#include "../../../../JString.hpp"
#include "../InputSource.def.hpp"
#include "./DefaultHandler2.def.hpp"

namespace org::xml::sax::ext
{
	// Fields
	
	// Constructors
	inline DefaultHandler2::DefaultHandler2()
		: org::xml::sax::helpers::DefaultHandler(
			"org.xml.sax.ext.DefaultHandler2",
			"()V"
		) {}
	
	// Methods
	inline void DefaultHandler2::attributeDecl(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4) const
	{
		callMethod<void>(
			"attributeDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		);
	}
	inline void DefaultHandler2::comment(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"comment",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void DefaultHandler2::elementDecl(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"elementDecl",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void DefaultHandler2::endCDATA() const
	{
		callMethod<void>(
			"endCDATA",
			"()V"
		);
	}
	inline void DefaultHandler2::endDTD() const
	{
		callMethod<void>(
			"endDTD",
			"()V"
		);
	}
	inline void DefaultHandler2::endEntity(JString arg0) const
	{
		callMethod<void>(
			"endEntity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DefaultHandler2::externalEntityDecl(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"externalEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline org::xml::sax::InputSource DefaultHandler2::getExternalSubset(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getExternalSubset",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void DefaultHandler2::internalEntityDecl(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"internalEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline org::xml::sax::InputSource DefaultHandler2::resolveEntity(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline org::xml::sax::InputSource DefaultHandler2::resolveEntity(JString arg0, JString arg1, JString arg2, JString arg3) const
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	inline void DefaultHandler2::startCDATA() const
	{
		callMethod<void>(
			"startCDATA",
			"()V"
		);
	}
	inline void DefaultHandler2::startDTD(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"startDTD",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void DefaultHandler2::startEntity(JString arg0) const
	{
		callMethod<void>(
			"startEntity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace org::xml::sax::ext

// Base class headers
#include "../helpers/DefaultHandler.hpp"

