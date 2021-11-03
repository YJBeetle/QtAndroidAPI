#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace javax::xml::transform::dom
{
	class DOMResult : public JObject
	{
	public:
		// Fields
		static JString FEATURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DOMResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DOMResult(QAndroidJniObject obj);
		
		// Constructors
		DOMResult();
		DOMResult(JObject arg0);
		DOMResult(JObject arg0, JString arg1);
		DOMResult(JObject arg0, JObject arg1);
		DOMResult(JObject arg0, JObject arg1, JString arg2);
		
		// Methods
		JObject getNextSibling();
		JObject getNode();
		JString getSystemId();
		void setNextSibling(JObject arg0);
		void setNode(JObject arg0);
		void setSystemId(JString arg0);
	};
} // namespace javax::xml::transform::dom

