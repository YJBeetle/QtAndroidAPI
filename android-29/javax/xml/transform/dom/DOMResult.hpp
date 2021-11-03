#pragma once

#include "../../../../JObject.hpp"


namespace javax::xml::transform::dom
{
	class DOMResult : public JObject
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DOMResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DOMResult(QJniObject obj);
		
		// Constructors
		DOMResult();
		DOMResult(JObject arg0);
		DOMResult(JObject arg0, jstring arg1);
		DOMResult(JObject arg0, JObject arg1);
		DOMResult(JObject arg0, JObject arg1, jstring arg2);
		
		// Methods
		JObject getNextSibling();
		JObject getNode();
		jstring getSystemId();
		void setNextSibling(JObject arg0);
		void setNode(JObject arg0);
		void setSystemId(jstring arg0);
	};
} // namespace javax::xml::transform::dom

