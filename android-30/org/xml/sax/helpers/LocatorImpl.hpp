#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace org::xml::sax::helpers
{
	class LocatorImpl : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocatorImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocatorImpl(QAndroidJniObject obj);
		
		// Constructors
		LocatorImpl();
		LocatorImpl(JObject arg0);
		
		// Methods
		jint getColumnNumber();
		jint getLineNumber();
		JString getPublicId();
		JString getSystemId();
		void setColumnNumber(jint arg0);
		void setLineNumber(jint arg0);
		void setPublicId(JString arg0);
		void setSystemId(JString arg0);
	};
} // namespace org::xml::sax::helpers

