#pragma once

#include "../../../../JObject.hpp"


namespace org::xml::sax::helpers
{
	class LocatorImpl : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LocatorImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocatorImpl(QJniObject obj);
		
		// Constructors
		LocatorImpl();
		LocatorImpl(JObject arg0);
		
		// Methods
		jint getColumnNumber();
		jint getLineNumber();
		jstring getPublicId();
		jstring getSystemId();
		void setColumnNumber(jint arg0);
		void setLineNumber(jint arg0);
		void setPublicId(jstring arg0);
		void setSystemId(jstring arg0);
	};
} // namespace org::xml::sax::helpers

