#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace javax::xml::namespace_
{
	class QName : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit QName(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		QName(QAndroidJniObject obj);
		
		// Constructors
		QName(JString arg0);
		QName(JString arg0, JString arg1);
		QName(JString arg0, JString arg1, JString arg2);
		
		// Methods
		static javax::xml::namespace_::QName valueOf(JString arg0);
		jboolean equals(JObject arg0) const;
		JString getLocalPart() const;
		JString getNamespaceURI() const;
		JString getPrefix() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace javax::xml::namespace_

