#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace javax::xml::transform::dom
{
	class DOMSource : public JObject
	{
	public:
		// Fields
		static JString FEATURE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DOMSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DOMSource(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DOMSource();
		DOMSource(JObject arg0);
		DOMSource(JObject arg0, JString arg1);
		
		// Methods
		JObject getNode() const;
		JString getSystemId() const;
		jboolean isEmpty() const;
		void setNode(JObject arg0) const;
		void setSystemId(JString arg0) const;
	};
} // namespace javax::xml::transform::dom

