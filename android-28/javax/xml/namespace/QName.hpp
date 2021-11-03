#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace javax::xml::_namespace
{
	class QName : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit QName(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		QName(QJniObject obj);
		
		// Constructors
		QName(JString arg0);
		QName(JString arg0, JString arg1);
		QName(JString arg0, JString arg1, JString arg2);
		
		// Methods
		static javax::xml::_namespace::QName valueOf(JString arg0);
		jboolean equals(JObject arg0);
		JString getLocalPart();
		JString getNamespaceURI();
		JString getPrefix();
		jint hashCode();
		JString toString();
	};
} // namespace javax::xml::_namespace

