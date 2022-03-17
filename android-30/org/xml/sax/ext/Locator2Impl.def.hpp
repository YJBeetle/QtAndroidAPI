#pragma once

#include "../helpers/LocatorImpl.def.hpp"

class JString;

namespace org::xml::sax::ext
{
	class Locator2Impl : public org::xml::sax::helpers::LocatorImpl
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Locator2Impl(const char *className, const char *sig, Ts...agv) : org::xml::sax::helpers::LocatorImpl(className, sig, std::forward<Ts>(agv)...) {}
		Locator2Impl(QAndroidJniObject obj) : org::xml::sax::helpers::LocatorImpl(obj) {}
		
		// Constructors
		Locator2Impl();
		Locator2Impl(JObject arg0);
		
		// Methods
		JString getEncoding() const;
		JString getXMLVersion() const;
		void setEncoding(JString arg0) const;
		void setXMLVersion(JString arg0) const;
	};
} // namespace org::xml::sax::ext

