#pragma once

#include "../../../../JObject.hpp"
#include "../helpers/LocatorImpl.hpp"


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
		jstring getEncoding();
		jstring getXMLVersion();
		void setEncoding(jstring arg0);
		void setXMLVersion(jstring arg0);
	};
} // namespace org::xml::sax::ext

