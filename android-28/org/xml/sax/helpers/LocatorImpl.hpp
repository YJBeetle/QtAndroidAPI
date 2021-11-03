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
		jint getColumnNumber() const;
		jint getLineNumber() const;
		JString getPublicId() const;
		JString getSystemId() const;
		void setColumnNumber(jint arg0) const;
		void setLineNumber(jint arg0) const;
		void setPublicId(JString arg0) const;
		void setSystemId(JString arg0) const;
	};
} // namespace org::xml::sax::helpers

