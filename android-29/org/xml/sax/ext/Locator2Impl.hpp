#pragma once

#include "../helpers/LocatorImpl.hpp"

class JString;

namespace org::xml::sax::ext
{
	class Locator2Impl : public org::xml::sax::helpers::LocatorImpl
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Locator2Impl(const char *className, const char *sig, Ts...agv) : org::xml::sax::helpers::LocatorImpl(className, sig, std::forward<Ts>(agv)...) {}
		Locator2Impl(QJniObject obj);
		
		// Constructors
		Locator2Impl();
		Locator2Impl(JObject arg0);
		
		// Methods
		JString getEncoding();
		JString getXMLVersion();
		void setEncoding(JString arg0);
		void setXMLVersion(JString arg0);
	};
} // namespace org::xml::sax::ext

